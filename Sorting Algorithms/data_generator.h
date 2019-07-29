#pragma once
#include <time.h>
#include <iostream>

class Data_generator
{
public:
	Data_generator(int length);
	~Data_generator();

	int* Generate()
	{
		free(Data);
		srand(unsigned(time(NULL)));
		Data = (int *)malloc(sizeof(int) * Length);
		for (int i = 0; i < Length; i++)
		{
			Data[i] = rand() % (Length * 10);
		}

		return Data;
	}

private:
	int Length;
	int *Data;


};

Data_generator::Data_generator(int length)
{
	Length = length;
}

Data_generator::~Data_generator()
{

}