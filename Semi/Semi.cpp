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
	int **arr = new int*[3];
	for (int i = 0; i < 3; ++i)arr[i] = new int[3];
	array_fill_rand(arr, 3, 3);
	matr mtr(arr, 3, 3);
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			int a = mtr.back_matr(i, j);
			cout <<a << " ";
		}
		cout << endl;
	}
	mtr.shake_sort();
	cout << endl;
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			int a = mtr.back_matr(i, j);
			cout << a << " ";
		}
		cout << endl;
	}
} 