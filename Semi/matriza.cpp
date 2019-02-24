#include"matriza.h"
#include<iostream>

int matr::swap(unsigned index) //меняет index и index - 1 строки местами
{
	if (body == NULL)return 1;
	int *tmp;
	tmp = body[index];
	body[index] = body[index - 1];
	body[index - 1] = tmp;
	delete[]tmp;
	return 0;
}

matr::matr(){   //создание матрицы СПЦФК: создаёт нулевую матрицу (тест на корректноть класса)
    col = 0;
    row = 0;
    body = NULL;
}

matr::matr(unsigned n1, unsigned m1){   // создание конкретной матрицы СПФКЦ: НА ВХОД - размеры матрицы
    col = n1;                             //                                    здаёт матрицу конкретных размеров
    row = m1;
    body = new int* [row];
    for(unsigned i = 0; i<row; i++){
        body[i] = new int [col];
    }
    if(body != NULL){
        for(unsigned  i = 0; i<row; i++){
            for(unsigned  ii = 0; ii<col; ii++){
                body[row][col] = 0;
            }
        }
    }
}

matr::matr(const matr& sr){                             // копирование матрицы СПЦФК: на вход - другая матрицы
    col = sr.col;                                           //                            создаёт копию исходной матрицы
    row = sr.row;
    if(sr.body != NULL){
        body = new int*[row];
        for(unsigned  i = 0; i<row; i++){
            body[i] = new int [col];
        }
        if(body != NULL){
            for(unsigned  i = 0; i<row; i++){
                for(unsigned  ii = 0; i<col; i++)
                    body[i][ii] = sr.body[i][ii];
            }
        }
    }
}

int matr::chel_matr(unsigned  i, unsigned  j, int  elem){                  //СПЦФК: НА ВХОД  - номер столбца и строки и елемент
    if(body == NULL){                //       Заменяет определённый элемент в матрице
		return 1;
    } else{
    body[j][i] = elem;
    }
	return 0;
}

int matr::back_matr(unsigned  i, unsigned  j, int  &elem){    //СПЦФК: НА ВХОД - номер столбца и строки и елемент
    if(body == NULL){
		return 1;
    } else{
    elem = body[j][i];
    }
	return 0;
}



int matr::print_stolb(unsigned  &l){                               //СПЦФК: НА ВХОД - матрица и столбец
    if(body == NULL){          //       выводит столбец
		return 1;
    } else{
        l=row;
    }
	return 0;
}


int matr::print_strok(unsigned  &l){
    if(body == NULL){
		return 1;
    } else{
        l=col;
    }
	return 0;
}


int matr::shake_sort()
{
	if (body == NULL)return 1;
	unsigned left = 1, right = row - 1;
	while (left <= right) {
		for (unsigned i = right; i >= left; ++i) {
			if ()
		}
		left++;
		for (unsigned i = left; i <= right; --i) {
			if ()
		}
		right--;
	}
	return 0;
}

matr::~matr(){                          
    if(body != 0){                      
        for(unsigned  i = 0; i<row; i++){
            delete[] body[i];
        }
        delete[] body;
    }
}

int matr::keys() {
	if (body == NULL) {
		return 1;
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			
		}
	}
}