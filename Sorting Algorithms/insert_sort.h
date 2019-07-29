#pragma once
#include <time.h>
#include <iostream>
using namespace std;

class insert_sort
{
	
	public:
		insert_sort(int *data, int length);
		double sort(bool print = false) {
			int start = clock();

			InsertSort();

			int end = clock();

			double time = (double)(end - start) / CLOCKS_PER_SEC * 1000;

			if (print == true) {
				for (int i = 0; i < Length; i++) {
					cout << Data[i] << " ";
				}
				cout << "\n";
			}

			return time;
		};
	private:
		void InsertSort();
		int *Data;
		int Length;
};

insert_sort::insert_sort(int *data, int length)
{
	Data = new int[length];
	for (int i = 0; i < length; i++) Data[i] = data[i];
	Length = length;
}

void insert_sort::InsertSort() {
	for (int i = 1; i < Length; i++) {
		int key = Data[i];
		int j = i - 1;
		while ((j >= 0) && (key<Data[j])) {
			Data[j + 1] = Data[j];
			j--;
		}
		Data[j + 1] = key;
	}
}
