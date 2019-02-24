#ifndef MATRIZA_H
#define MATRIZA_H 

class matr {
    private:
        unsigned m,n;
        unsigned **body;
        unsigned err;
    public:
        matr();
        matr(unsigned, unsigned); //создание
        matr(const matr& sr);     //копирование
        ~matr();                  //уничтожение

        void chel_matr(unsigned i, unsigned j, unsigned elem);    //ввод элемента на определённую позицию
        void back_matr(unsigned i, unsigned j, unsigned &elem);   //вывод изменения на определённую позицую

        void print_stolb(unsigned &l);     //вывод столбца/строки
        void print_strok(unsigned &l);

        void bad_matr(unsigned err);    // фатальное завершение
};

#endif // MATRIZA_H
