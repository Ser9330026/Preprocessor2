// Pteprocessor.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>//Дирктива препроцессора - команда, указывающая препоцессору на то, как именно должен быть изменен исходный текст программы и начинаются с #

#include "H1.h"

#define _PI 3.14
//#define forever while(true)//for(;;)
#define forever for(int fori = 0; ;fori++)
#define begin {
#define end }

#define sum(a, b) a + b

#define print_arr(a, s) std::cout<<'[';\
for (int i = 0; i < s; i++)\
    std::cout << a[i] << "\t";\
    std::cout << "\b]\n"

#if 5<4

#define var 666

#elif 5==4

#else

#define show(p) std::cout << #p << std::endl
#define var(name) std::cout<<#name<<'='<<name<<std::endl
#define concat(a, b) a ## b

#endif

#ifdef _PI

void foo() {}

#endif


#ifndef _PI

void foo() {}

#endif

int main()
{
    setlocale(LC_ALL, "rus");
    int n, m;

    //Простые объекты препроцессора\
    ghgjhjkgkgkghkkh\
    ngfndfgnkdfegjksj
   /* std::cout << "Pi = " << _PI << std::endl;//_PI заменяется на 3.14 после обработки препроцессором
    // _PI = 3;//ОШИБКА

    //forever {
       // std::cout << '.';
   // }

    forever begin
        std::cout << '.';
    if (fori >= 20)
        break;
    end*/

    //Макросы препроцессора - функции препроцессора
    std::cout << "Введите два числа: ";
    std::cin >> n >> m;
    std::cout << std::endl;
    std::cout << n << '+' << m << '=' << sum(n, m) << std::endl;

    const int size = 5;
    int arr[size]{ 10, 20, 30, 40, 50 };

    print_arr(arr, size);

    //Операторы препроцессора

    show(I love C++);
    n = 10;
    var(n);
    double tmp = 1.55;
    var(tmp);

    std::cout << "tmp= " << concat(t, mp) << std::endl;

    //Остановка замены текста

    std::cout << _PI << std::endl;

#undef _PI

   // std::cout << _PI << std::endl;//Идентификатор Пи не определен, т.к. строчки ниже андеф использовать не будет

#define _PI 3
    
    std::cout << _PI << std::endl;

    //Условная компиляция





}
