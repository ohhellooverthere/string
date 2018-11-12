/*Дана строка. Подсчитать общее количество содержащихся в ней
строчных латинских и русских букв.*/

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale( LC_ALL , "rus");
	int ru = 0;
	int lat = 0;

	char str[] = "sndsышщвоышзы"; 
	for (int i = 0; i < strlen(str); i++)
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			lat++;
		}
		else if ((str[i] >= 'а') && (str[i] <= 'я'))
		{
			ru++;
		}
	}
	cout << "латинских строчных букв :" << lat<<endl;
	cout << "русских строчных букв:" << ru << endl;

}
