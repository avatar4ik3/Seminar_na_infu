#ifndef MATRIZA_H
#define MATRIZA_H 

class matr {
    private:
        unsigned row,col;
        int **body;
        unsigned err;
		int swap(unsigned index);
    public:
        matr();
        matr(unsigned, unsigned); //создание
        matr(const matr& sr);     //копирование
        ~matr();                  //уничтожение
// то что писали андрей и максим,а денис и никита привели в удобный для них вид
        int chel_matr(unsigned i, unsigned j, int elem);    //ввод элемента на определённую позицию
        int back_matr(unsigned i, unsigned j, int &elem);   //вывод изменения на определённую позицую

        int print_stolb(unsigned &l);//вывод столбца НЕ РЕАЛИЗОВАНА
        int print_strok(unsigned &l);//вывод строки

//то что писали денис и никита
		int shake_sort();
};

#endif // MATRIZA_H
