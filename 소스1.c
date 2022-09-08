/*
#include <stdio.h>
#include <stdlib.h>
#include "time.h"

#define AROWS 3
#define ACOLS 4
#define BROWS 4
#define BCOLS 5
#define CROWS 3
#define CCOLS 5
#define N 10



//행렬이 여러 개일 때 하나의 function으로 처리하는 방법을 고안



static unsigned long int next = 1;

int rand1(void) {
	//printf("rand1()::next = %ld\n", next);
	next = next * 1103515245 + 12345;
	return (unsigned int)(next / 65536) % 32768;
}

void srand1(unsigned int seed) {
	next = seed;
}

int get_data(int(*p)[4], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			p[i][j] = rand1() % (N * N);

	return 1;
}

int get_data2(int(*p)[5], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			p[i][j] = rand1() % (N * N);

	return 1;
}

void show_data(int(*p)[ACOLS], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			printf("%d ", p[i][j]);
		printf("\n");
	}
}

void show_data2(int(*p)[BCOLS], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			printf("%d ", p[i][j]);
		printf("\n");
	}
}

void multiply(int matrixA[][ACOLS], int ar, int matrixB[][BCOLS], int br, int matrixC[][CCOLS], int cr)
{
	for (int i = 0; i < cr; i++) {
		//int num = 0;
		for (int j = 0; j < ; j++) {
			for (int k = 0; k < ; k++) {
				matrixC[][] += matrixA[][] * matrixB[][];
			}
		}
	}

}

int main(void)
{
	int matrixA[AROWS][ACOLS];
	int matrixB[BROWS][BCOLS];
	int matrixC[CROWS][CCOLS];

	srand(time(NULL));
	get_data(matrixA, AROWS);	// 3
	show_data(matrixA, AROWS);	// 3
	get_data2(matrixB, BROWS);	// 4
	show_data2(matrixB, BROWS);	// 4

	//multiply(matrixA, AROWS, matrixB, BROWS, matrixC, CROWS);

	//show_data(matrixC, AROWS);
	system("pause");
	return 0;
}*/