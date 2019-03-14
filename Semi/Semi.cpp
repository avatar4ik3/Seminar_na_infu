// Semi.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <ctime>
#include "matriza.h"
using namespace std;

void array_fill_rand(int **arr, int str, int col) {
	srand(time(NULL));
	int rdn;
	for (int i = 0; i < str; ++i) {
		for (int j = 0; j < col; ++j) {
			rdn = rand() % 2;
			if (rdn == 1)arr[i][j] = rand() % 10;
			else arr[i][j] = (-1)*(rand() % 10);
		}
	}
}

int main()
{
	int row = 4, col = 4;
	int **arr = new int*[row];
	for (int i = 0; i < row; ++i)arr[i] = new int[col];
	array_fill_rand(arr, row, col);
	matr mtr(arr, row, col);
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			int a = mtr.back_matr(i, j);
			cout <<a << " ";
		}
		cout << endl;
	}
	if (mtr.shake_sort()) {
		cout << "err"; 
		return 0;
	}
	cout << endl;
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			int a = mtr.back_matr(i, j);
			cout << a << " ";
		}
		cout << endl;
	}
} 