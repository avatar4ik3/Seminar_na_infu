#include"matriza.h"
#include<iostream>

matr::matr(){   //создание матрицы СПЦФК: создаёт нулевую матрицу (тест на корректноть класса)
    n = 0;
    m = 0;
    err = 0;
    body = NULL;
}

matr::matr(unsigned n1, unsigned m1){   // создание конкретной матрицы СПФКЦ: НА ВХОД - размеры матрицы
    n = n1;                             //                                    здаёт матрицу конкретных размеров
    m = m1;
    body = new unsigned* [m];
    for(unsigned i = 0; i<m; i++){
        body[i] = new unsigned [n];
    }
    if(body == NULL){
        bad_matr(1);
    } else{
        for(unsigned  i = 0; i<m; i++){
            for(unsigned  ii = 0; ii<n; ii++){
                body[m][n] = 0;
            }
        }
    }
    err = 0;
}

matr::matr(const matr& sr){                             // копирование матрицы СПЦФК: на вход - другая матрицы
    n = sr.n;                                           //                            создаёт копию исходной матрицы
    m = sr.m;
    if(sr.body == 0){
        bad_matr(1);
    }   else{
        body = new unsigned*[m];
        for(unsigned  i = 0; i<m; i++){
            body[i] = new unsigned [n];
        }
        if(body == 0){
            bad_matr(1);
        } else{
            for(unsigned  i = 0; i<m; i++){
                for(unsigned  ii = 0; i<n; i++)
                    body[i][ii] = sr.body[i][ii];
            }
        }
    }
    err = 0;
}

void matr::chel_matr(unsigned  i, unsigned  j, unsigned  elem){                  //СПЦФК: НА ВХОД  - номер столбца и строки и елемент
    if(body == 0 || n == 0 || m == 0 || err != 0){                //       Заменяет определённый элемент в матрице
    bad_matr(3);
    } else{
    body[j][i] = elem;
    }
}

void matr::back_matr(unsigned  i, unsigned  j, unsigned  &elem){                      //СПЦФК: НА ВХОД - номер столбца и строки и елемент
    if(body == 0 || n == 0 || m == 0 || err != 0){
    bad_matr(4);
    } else{
    elem = body[j][i];
    }
}

void matr::print_stolb(unsigned  &l){                               //СПЦФК: НА ВХОД - матрица и столбец
    if(body == 0 || n == 0 || m == 0 || err != 0){          //       выводит столбец
    bad_matr(4);
    } else{
        l=m;
    }
}


void matr::print_strok(unsigned  &l){
    if(body == 0 || n == 0 || m == 0 || err != 0){
    bad_matr(4);
    } else{
        l=n;
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

matr::~matr(){                          
    if(body != 0){                      
        for(unsigned  i = 0; i<m; i++){
            delete[] body[i];
        }
        delete[] body;
    }
}

int matr::keys() {
	for (int i)
}