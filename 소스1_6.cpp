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

static unsigned long int next = 1;
int rand1(void) {
	//printf("rand1()::next = %ld\n", next);
	next = next * 1103515245 + 12345;
	return (unsigned int)(next / 65536) % 32768;
}
void srand1(unsigned int seed) {
	next = seed;
}

class Matrix {
private:
	int rows, cols;
	int* data;
public:
	Matrix() {
		data = new int;
	}
	Matrix(int r, int c) {
		rows = r;
		cols = c;
		data = new int;
		for (int i = 0; i < r * c; i++) {
			//
		}
	}
	~Matrix() {
		delete data;
	}
	int* getData() { return data; }
	int getRows() { return rows; }
	int getCols() { return cols; }
	int get_data();
	void show_data();
	void sort_data();
	Matrix& addMatrix(Matrix&);
	int MultyplyMatrix(Matrix&, Matrix&);
};
int Matrix::get_data()
{
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			data[i*rows+j] = rand1() % (N * N);
	return 1;

}


void Matrix::show_data()
{
	int n = rows;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			printf("%d ", data[i*n+j]);
		printf("\n");
	}
}
void Matrix::sort_data() {
	int max = *data;
	int temp;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (data[i * rows + j] > max) {
				temp = max;
				//
			}
			//data[i * rows + j] = ;
		}
	}
}
Matrix& Matrix::addMatrix(Matrix& A) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			data[i * rows + j] += A.getData()[i * rows + j];
		}
	}
	return *this;
}

int Matrix::MultyplyMatrix(Matrix& A, Matrix& B) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			//
		}
	}
}


int main(void)

{
	//int matrixA[AROWS][ACOLS];
	//int matrixB[BROWS][BCOLS];
	//int matrixC[CROWS][CCOLS];

	Matrix matrixA(AROWS, ACOLS);
	Matrix matrixA1(AROWS, ACOLS);
	Matrix matrixB(BROWS, BCOLS);
	Matrix matrixC(CROWS, CCOLS);



	srand(time(NULL));
	/*
	get_data(matrixA, AROWS);//matrixA.get_data();
	show_data(matrixA, AROWS);
	get_data(matrixB, AROWS);//matrixB.get_data();
	show_data(matrixB, AROWS);

	multiply(matrixA, AROWS, matrixB, BROWS, matrixC, CROWS);
	show_data(matrixC, AROWS);
	*/

	matrixA.get_data();
	matrixA.show_data();
	matrixA.sort_data();
	matrixA.addMatrix(matrixA1);
	matrixB.get_data();
	matrixB.show_data();

	system("pause");

	return 0;

}