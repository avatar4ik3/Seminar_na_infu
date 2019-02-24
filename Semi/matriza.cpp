#include"matriza.h"
#include<iostream>

int matr::swap(unsigned index) //меняет index и index - 1 строки местами
{
	if (body == NULL)return 1;
	unsigned *tmp;
	tmp = body[index];
	body[index] = body[index - 1];
	body[index - 1] = tmp;
	delete[]tmp;
	return 0;
}

matr::matr(){   //создание матрицы СПЦФК: создаёт нулевую матрицу (тест на корректноть класса)
    col = 0;
    row = 0;
    err = 0;
    body = NULL;
}

matr::matr(unsigned n1, unsigned m1){   // создание конкретной матрицы СПФКЦ: НА ВХОД - размеры матрицы
    col = n1;                             //                                    здаёт матрицу конкретных размеров
    row = m1;
    body = new unsigned* [row];
    for(unsigned i = 0; i<row; i++){
        body[i] = new unsigned [col];
    }
    if(body == NULL){
        bad_matr(1);
    } else{
        for(unsigned  i = 0; i<row; i++){
            for(unsigned  ii = 0; ii<col; ii++){
                body[row][col] = 0;
            }
        }
    }
    err = 0;
}

matr::matr(const matr& sr){                             // копирование матрицы СПЦФК: на вход - другая матрицы
    col = sr.col;                                           //                            создаёт копию исходной матрицы
    row = sr.row;
    if(sr.body == 0){
        bad_matr(1);
    }   else{
        body = new unsigned*[row];
        for(unsigned  i = 0; i<row; i++){
            body[i] = new unsigned [col];
        }
        if(body == 0){
            bad_matr(1);
        } else{
            for(unsigned  i = 0; i<row; i++){
                for(unsigned  ii = 0; i<col; i++)
                    body[i][ii] = sr.body[i][ii];
            }
        }
    }
    err = 0;
}

void matr::chel_matr(unsigned  i, unsigned  j, unsigned  elem){                  //СПЦФК: НА ВХОД  - номер столбца и строки и елемент
    if(body == 0 || col == 0 || row == 0 || err != 0){                //       Заменяет определённый элемент в матрице
    bad_matr(3);
    } else{
    body[j][i] = elem;
    }
}

void matr::back_matr(unsigned  i, unsigned  j, unsigned  &elem){                      //СПЦФК: НА ВХОД - номер столбца и строки и елемент
    if(body == 0 || col == 0 || row == 0 || err != 0){
    bad_matr(4);
    } else{
    elem = body[j][i];
    }
}

void matr::print_stolb(unsigned  &l){                               //СПЦФК: НА ВХОД - матрица и столбец
    if(body == 0 || col == 0 || row == 0 || err != 0){          //       выводит столбец
    bad_matr(4);
    } else{
        l=row;
    }
}


void matr::print_strok(unsigned  &l){
    if(body == 0 || col == 0 || row == 0 || err != 0){
    bad_matr(4);
    } else{
        l=col;
    }
}


void matr::bad_matr(unsigned  err){                                                  //завершает программу при ошибке
    if(err == 1){
    std::cout << "Ошибка выделения памяти!" << std::endl;
    } else{
        if(err == 2){
        std::cout << "Ошибка вывода столбца/строки!" << std::endl;
        } else{
            if(err == 3){
            std::cout <<"Ошибка замены элемента!" << std::endl;
            } else{
                if(err == 4){
                std::cout << "Ошибка возврата элемента!" << std::endl;
                }
            }
        }
    }
    exit(1);
}

int matr::shake_sort()
{
	if (body == NULL)return 1;

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

