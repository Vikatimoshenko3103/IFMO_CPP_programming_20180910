//Определите сумму всех элементов последовательности, завершающейся числом 0.
//
//Формат входных данных
//        Вводится последовательность целых чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//3
//6
//8
//0
//Sample Output:
//
//17

#include "t04_sum.h"
#include <iostream>

using namespace std;

int t04_sum() {
	int N, sum;
	cin >> N;
	sum = 0;
	while (N != 0) {
		cin >> N;
		sum = sum + N;
	}
	cout << sum;

};