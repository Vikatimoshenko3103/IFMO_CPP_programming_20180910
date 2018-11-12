﻿//Найдите индексы первого вхождения максимального элемента.
//
//Формат входных данных
//        Программа получает на вход размеры массива n и m, 
// затем n строк по m чисел в каждой. n и m не превышают 100.
//
//Формат выходных данных
//        Выведите два числа: номер строки и номер столбца, 
// в которых стоит наибольший элемент в двумерном массиве. 
// Если таких элементов несколько, то выводится тот, у которого меньше номер строки, 
// а если номера строк равны то тот, у которого меньше номер столбца.
//
//Sample Input:
//
//3 4
//0 3 2 4
//2 3 5 5
//5 1 2 3
//Sample Output:
//
//1 2

#include "t01_max.h"
#include <iostream>


using namespace std;

int t01_max() {
int q, w, max, qmax = 0, wmax=0;
cin >> q >> w;
int a[q][w];
for (int i = 0; i < q; i++) {
for (int j = 0; j < w; j++){
cin >> a[i][j];
}
}
max=a[0][0];
for (int i = 0; i < q; i++) {
for (int j = 0; j < w; j++) {
if (a[i][j] > max) {
qmax = i;
wmax = j;
max = a[i][j];
}
if (a[i][j] == max) {
if (i < qmax) {
qmax = i;
wmax = j;
}
if (i == qmax && j < wmax) {
wmax = j;
}
}
}
}
cout << qmax << " " << wmax;
return 0;
}
