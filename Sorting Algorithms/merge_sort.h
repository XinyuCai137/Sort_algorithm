#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

class merge_sort
{
public:
	merge_sort(int *data, int length) {
		Data = new int[length];
		for (int i = 0; i < length; i++) Data[i] = data[i];
		Length = length;
		Array = new vector<int>(Data, Data + length);
	};
	~merge_sort();

	double sort(bool print = false) {

		
		int start = clock();

		MergeSort(Array, 0, Length - 1);

		int end = clock();

		double time = (double)(end - start) / CLOCKS_PER_SEC * 1000;

		if (print == true) {
			for (int i = 0; i < Length; i++) {
				cout << (*Array)[i] << " ";
			}
			cout << "\n";
		}

		return time;

	};
private:
	int * Data;
	int Length;
	vector<int> *Array;

	void Merge(vector<int> *Array, int front, int mid, int end);

	void MergeSort(vector<int> *Array, int front, int end);
};


merge_sort::~merge_sort()
{
}

void merge_sort::Merge(vector<int> *Array, int front, int mid, int end) {

	vector<int> LeftSubArray(Array->begin() + front, Array->begin() + mid + 1);
	vector<int> RightSubArray(Array->begin() + mid + 1, Array->begin() + end + 1);
	int idxLeft = 0, idxRight = 0;
	LeftSubArray.insert(LeftSubArray.end(), numeric_limits<int>::max());
	RightSubArray.insert(RightSubArray.end(), numeric_limits<int>::max());
	for (int i = front; i <= end; i++) {
		if (LeftSubArray[idxLeft] < RightSubArray[idxRight]) {
			(*Array)[i] = LeftSubArray[idxLeft];
			idxLeft++;
		}
		else {
			(*Array)[i] = RightSubArray[idxRight];
			idxRight++;
		}
	}
}

void merge_sort::MergeSort(vector<int> *Array, int front, int end) {
	if (front >= end)
		return;
	int mid = (front + end) / 2;
	MergeSort(Array, front, mid);
	MergeSort(Array, mid + 1, end);
	Merge(Array, front, mid, end);
}