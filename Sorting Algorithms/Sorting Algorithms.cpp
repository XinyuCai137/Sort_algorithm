// Sorting Algorithms.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include "heap_sort.h"
#include "insert_sort.h"
#include "merge_sort.h"
#include "quick_sort.h"
#include "data_generator.h"

using namespace std;

int main()
{	
	int Insert_time[7];
	int Heap_time[7];
	int Quick_time[7];
	int Merge_time[7];
	
	Data_generator Generator_1(1000 * 10);

	int *data_1 = Generator_1.Generate();

	for (int i = 0; i < 10; i++) {
		insert_sort Insert_Sort(data_1 + 1000 * i, 1000);
		int t = Insert_Sort.sort();
		cout << "Insert sort 1000:" << t << "\n";
		Insert_time[0] += t;
	}
	Insert_time[0] /= 10;
	

	for (int i = 0; i < 10; i++) {
		heap_sort Heap_Sort(data_1 + 1000 * i, 1000);
		int t = Heap_Sort.sort();
		cout << "Heap sort 1000:" << t << "\n";
		Heap_time[0] += t;
	}
	Heap_time[0] /= 10;

	for (int i = 0; i < 10; i++) {
		quick_sort Quick_Sort(data_1 + 1000 * i, 1000);
		int t = Quick_Sort.sort();
		cout << "Quick sort 1000:" << t << "\n";
	}
	Quick_time[0] /= 10;

	for (int i = 0; i < 10; i++) {
		merge_sort Merge_Sort(data_1 + 1000 * i, 1000);
		int t = Merge_Sort.sort();
		cout << "Merge sort 1000:" << t << "\n";
	}
	Merge_time[0] /= 10;

	delete data_1;

	Data_generator Generator_2(10000 * 10);
	int *data_2 = Generator_2.Generate();

	for (int i = 0; i < 10; i++) {
		insert_sort Insert_Sort(data_2 + 10000 * i, 10000);
		int t = Insert_Sort.sort();
		cout << "Insert sort 10000:" << t << "\n";
		Insert_time[0] += t;
	}
	Insert_time[1] /= 10;

	for (int i = 0; i < 10; i++) {
		heap_sort Heap_Sort(data_2 + 10000 * i, 10000);
		int t = Heap_Sort.sort();
		cout << "Heap sort 10000:" << t << "\n";
	}
	Heap_time[1] /= 10;


	for (int i = 0; i < 10; i++) {
		quick_sort Quick_Sort(data_2 + 10000 * i, 10000);
		int t = Quick_Sort.sort();
		cout << "Quick sort 10000:" << t << "\n";
	}
	Quick_time[1] /= 10;

	for (int i = 0; i < 10; i++) {
		merge_sort Merge_Sort(data_2 + 10000 * i, 10000);
		int t = Merge_Sort.sort();
		cout << "Merge sort 10000:" << t << "\n";
	}
	Merge_time[1] /= 10;
	delete data_2;

	Data_generator Generator_3(50000 * 10);
	int *data_3 = Generator_3.Generate();

	for (int i = 0; i < 10; i++) {
		insert_sort Insert_Sort(data_3 + 50000 * i, 50000);
		int t = Insert_Sort.sort();
		cout << "Insert sort 50000:" << t << "\n";
		Insert_time[0] += t;
	}
	Insert_time[2] /= 10;

	for (int i = 0; i < 10; i++) {
		heap_sort Heap_Sort(data_3 + 50000 * i, 50000);
		int t = Heap_Sort.sort();
		cout << "Heap sort 50000:" << t << "\n";
	}
	Heap_time[2] /= 10;

	for (int i = 0; i < 10; i++) {
		quick_sort Quick_Sort(data_3 + 50000 * i, 50000);
		int t = Quick_Sort.sort();
		cout << "Quick sort 50000:" << t << "\n";
	}
	Quick_time[2] /= 10;

	for (int i = 0; i < 10; i++) {
		merge_sort Merge_Sort(data_3 + 50000 * i, 50000);
		int t = Merge_Sort.sort();
		cout << "Merge sort 50000:" << t << "\n";
	}
	Merge_time[2] /= 10;
	delete data_3;

	Data_generator Generator_4(100000 * 10);
	int *data_4 = Generator_4.Generate();

	for (int i = 0; i < 10; i++) {
		insert_sort Insert_Sort(data_4 + 100000 * i, 100000);
		int t = Insert_Sort.sort();
		cout << "Insert sort 100000:" << t << "\n";
		Insert_time[0] += t;
	}
	Insert_time[3] /= 10;


	for (int i = 0; i < 10; i++) {
		heap_sort Heap_Sort(data_4 + 100000 * i, 100000);
		int t = Heap_Sort.sort();
		cout << "Heap sort 100000:" << t << "\n";
	}
	Heap_time[3] /= 10;

	for (int i = 0; i < 10; i++) {
		quick_sort Quick_Sort(data_4 + 100000 * i, 100000);
		int t = Quick_Sort.sort();
		cout << "Quick sort 100000:" << t << "\n";
	}
	Quick_time[3] /= 10;

	for (int i = 0; i < 10; i++) {
		merge_sort Merge_Sort(data_4 + 100000 * i, 100000);
		int t = Merge_Sort.sort();
		cout << "Merge sort 100000:" << t << "\n";
	}
	Merge_time[3] /= 10;
	delete data_4;

	Data_generator Generator_5(200000 * 10);
	int *data_5 = Generator_5.Generate();

	for (int i = 0; i < 10; i++) {
		insert_sort Insert_Sort(data_5 + 200000 * i, 200000);
		int t = Insert_Sort.sort();
		cout << "Insert sort 200000:" << t << "\n";
		Insert_time[0] += t;
	}
	Insert_time[4] /= 10;


	for (int i = 0; i < 10; i++) {
		heap_sort Heap_Sort(data_5 + 200000 * i, 200000);
		int t = Heap_Sort.sort();
		cout << "Heap sort 200000:" << t << "\n";
		delete &Heap_Sort;
	}
	Heap_time[4] /= 10;

	for (int i = 0; i < 10; i++) {
		quick_sort Quick_Sort(data_5 + 200000 * i, 200000);
		int t = Quick_Sort.sort();
		cout << "Quick sort 200000:" << t << "\n";
	}
	Quick_time[4] /= 10;

	for (int i = 0; i < 10; i++) {
		merge_sort Merge_Sort(data_5 + 200000 * i, 200000);
		int t = Merge_Sort.sort();
		cout << "Merge sort 200000:" << t << "\n";
	}
	Merge_time[4] /= 10;
	delete data_5;

	Data_generator Generator_6(500000 * 10);
	int *data_6 = Generator_6.Generate();

	for (int i = 0; i < 10; i++) {
		insert_sort Insert_Sort(data_6 + 500000 * i, 500000);
		int t = Insert_Sort.sort();
		cout << "Insert sort 500000:" << t << "\n";
		Insert_time[0] += t;
	}
	Insert_time[5] /= 10;


	for (int i = 0; i < 10; i++) {
		heap_sort Heap_Sort(data_6 + 500000 * i, 500000);
		int t = Heap_Sort.sort();
		cout << "Heap sort 500000:" << t << "\n";
	}
	Heap_time[5] /= 10;

	for (int i = 0; i < 10; i++) {
		quick_sort Quick_Sort(data_6 + 500000 * i, 500000);
		int t = Quick_Sort.sort();
		cout << "Quick sort 500000:" << t << "\n";
	}
	Quick_time[5] /= 10;

	for (int i = 0; i < 10; i++) {
		merge_sort Merge_Sort(data_6 + 500000 * i, 500000);
		int t = Merge_Sort.sort();
		cout << "Merge sort 500000:" << t << "\n";
	}
	Merge_time[5] /= 10;
	delete data_6;

	Data_generator Generator_7(1000000 * 10);
	int *data_7 = Generator_7.Generate();

	for (int i = 0; i < 10; i++) {
		insert_sort Insert_Sort(data_7 + 1000000 * i, 1000000);
		int t = Insert_Sort.sort();
		cout << "Insert sort 1000000:" << t << "\n";
		Insert_time[0] += t;
	}
	Insert_time[6] /= 10;

	for (int i = 0; i < 10; i++) {
		heap_sort Heap_Sort(data_7 + 1000000 * i, 1000000);
		int t = Heap_Sort.sort();
		cout << "Heap sort 1000000:" << t << "\n";
	}
	Heap_time[6] /= 10;

	for (int i = 0; i < 10; i++) {
		quick_sort Quick_Sort(data_7 + 1000000 * i, 1000000);
		int t = Quick_Sort.sort();
		cout << "Quick sort 1000000:" << t << "\n";
	}
	Quick_time[6] /= 10;

	for (int i = 0; i < 10; i++) {
		merge_sort Merge_Sort(data_7 + 1000000 * i, 1000000);
		int t = Merge_Sort.sort();
		cout << "Merge sort 1000000:" << t << "\n";
	}
	Merge_time[6] /= 10;
	delete data_7;

	for (int i = 0; i < 7; i++)
	{
		cout << "Insert sort: " << Insert_time[i] << "\n";
	}

	for (int i = 0; i < 7; i++)
	{
		cout << "Heap sort: " << Heap_time[i] << "\n";
	}

	for (int i = 0; i < 7; i++)
	{
		cout << "Quick sort: " << Quick_time[i] << "\n";
	}

	for (int i = 0; i < 7; i++)
	{
		cout << "Merge sort: " << Merge_time[i] << "\n";
	}

	system("pause");
    return 0;
}

