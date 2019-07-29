#pragma once
#include <iostream>
#include <time.h>
#include <algorithm>
using namespace std;

class quick_sort
{
	public:
		quick_sort(int *data, int length) {
			Data = new int[length];
			for (int i = 0; i < length; i++) Data[i] = data[i];
			Length = length;
		};

		double sort(bool print = false) {

			int start = clock();

			QuickSort(Data, Length);

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

	private:
		void quick_sort_recursive(int arr[], int start, int end);
		void QuickSort(int arr[], int len);

};


void quick_sort::quick_sort_recursive(int arr[], int start, int end) {
	if (start >= end)
		return;
	int mid = arr[end];
	int left = start, right = end - 1;
	while (left < right) {
		while (arr[left] < mid && left < right)
			left++;
		while (arr[right] >= mid && left < right)
			right--;
		swap(arr[left], arr[right]);
	}
	if (arr[left] >= arr[end])
		swap(arr[left], arr[end]);
	else
		left++;
	if (left)
		quick_sort_recursive(arr, start, left - 1);
	quick_sort_recursive(arr, left + 1, end);
}

void quick_sort::QuickSort(int arr[], int len) {
	quick_sort_recursive(arr, 0, len - 1);
}