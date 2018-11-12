﻿//Дано нечетное число n, не превосходящее 15.
//Создайте двумерный массив из n×n элементов, заполнив его символами "."
// (каждый элемент массива является строкой из одного символа).
// Затем заполните символами "*" среднюю строку массива,
// средний столбец массива, главную диагональ и побочную диагональ.
// В результате "*" в массиве должны образовывать изображение звездочки.
// Выведите полученный массив на экран, разделяя элементы массива пробелами.
//
//Sample Input:
//
//5
//Sample Output:
//
//* . * . *
//. * * * .
//* * * * *
//. * * * .
//* . * . *

#include "t02_star.h"
#include <iostream>


using namespace std;

int t02_star() {
int q;
cin >> q;
char a[q][q];
for (int i = 0; i < q; i++) {
for (int j = 0; j < q; j++) {
a[i][j] = '.';
}
}
for (int i = 0; i < q; i++) {
for (int j = 0; j < q; j++) {
if (i == q / 2 || j == q / 2 || i == j || i + j == q - 1) {
a[i][j]='*';
}
}
}
for (int i = 0; i < q; i++) {
for (int j = 0; j < q; j++) {
cout << a[i][j] <<" ";
}
cout << endl;
}
return 0;
}
