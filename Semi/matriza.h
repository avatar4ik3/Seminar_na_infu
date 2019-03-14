#ifndef MATRIZA_H
#define MATRIZA_H 

class matr {
    private:
		// Den genii i mi nihuya ne ponimaem
        unsigned row,col;
        int **body;
		int swap(unsigned index);//меняет index и index - 1 строки местами воот 
		int keys();
		void keys_int();
		int *key ;
    public:
        matr();
        matr(unsigned, unsigned); //создание
        matr(const matr& sr);     //копирование
		matr(int **arr, unsigned input_row, unsigned input_col); // копирование массива
        ~matr();                  //уничтожение
// то что писали андрей и максим,а денис и никита привели в удобный для них вид
        int chel_matr(unsigned i, unsigned j, int elem);    //ввод элемента на определённую позицию
        unsigned back_matr(unsigned i, unsigned j);   //вывод изменения на определённую позицую

        int print_stolb(unsigned &l);//вывод столбца НЕ РЕАЛИЗОВАНА
        int print_strok(unsigned &l);//вывод строки

//то что писали денис и никита
		int shake_sort();
};

#endif // MATRIZA_H
