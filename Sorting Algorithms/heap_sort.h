#pragma once
#include <iostream>
#include <time.h>
#include <algorithm>
using namespace std;

class heap_sort
{
	public:
		heap_sort(int *data, int length) {
			Data = new int[length];
			for (int i = 0; i < length; i++) Data[i] = data[i];
			Length = length;
		};

		double sort(bool print = false) {

			int start = clock();

			HeapSort(Data, Length);

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
		int * Data;
		int Length;

		void max_heapify(int arr[], int start, int end);
		void HeapSort(int arr[], int len);

};



void heap_sort::max_heapify(int arr[], int start, int end) {
	int dad = start;
	int son = dad * 2 + 1;
	while (son <= end) { 
		if (son + 1 <= end && arr[son] < arr[son + 1]) 
			son++;
		if (arr[dad] > arr[son]) 
			return;
		else { 
			swap(arr[dad], arr[son]);
			dad = son;
			son = dad * 2 + 1;
		}
	}
}

void heap_sort::HeapSort(int arr[], int len) {
	for (int i = len / 2 - 1; i >= 0; i--)
		max_heapify(arr, i, len - 1);
	for (int i = len - 1; i > 0; i--) {
		swap(arr[0], arr[i]);
		max_heapify(arr, 0, i - 1);
	}
}