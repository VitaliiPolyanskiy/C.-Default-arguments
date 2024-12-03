#include <iostream>

using namespace std;

void Function1(int nNumber1, int nNumber2 = 7);
//void Function2(int nNumber1, int nNumber2 = 2, int nNumber3); // Ошибка.
void Function3(int nNumber1, int nNumber2 = 3, int nNumber3 = 7);
void Function4(int nNumber1 = 11, int nNumber2 = 22, int nNumber3 = 33);
//void Function5(int nNumber1 = -3, int nNumber2); // Ошибка.

int main()
{
	// Аргументу функции может быть задано значение по умолчанию. Это означает, что в данный 
	// аргумент значение при вызове можно не передавать. В этом случае будет использовано значение 
	// по умолчанию.

	// Синтаксис аргументов по умолчанию:
	//      возвращаемое_значение имя_функции(тип_аргумента имя_аргумента = значение);
	// возвращаемое_значение - результат работы функции. На место возвращаемого значения 
	//      подставляется любой из базовых типов. Это тип тех данных, которые функция подставляет на 
	//      место своего вызова в программе.
	// имя_функции - любое имя, которое подчиняется "правилам именования переменных".
	// тип_аргумента - тип аргумента.
	// имя_аргумента - имя аргумента.
	// значение - значение аргумента по умолчанию.

	// Аргументами по умолчанию могут быть аргументы, начиная с правого конца списка параметров 
	// функции и далее последовательно справа налево без перерывов.

	Function1(1);
	Function1(1, 2);

	cout << endl;

	Function3(1);
	Function3(1, 2);
	Function3(1, 2, 3);

	cout << endl;

	Function4();
	Function4(1);
	Function4(1, 2);
	Function4(1, 2, 3);

	return 0;
}

void Function1(int nNumber1, int nNumber2)
{
	cout << nNumber1 << ' ' << nNumber2 << endl;
}

void Function3(int nNumber1, int nNumber2, int nNumber3)
{
	cout << nNumber1 << ' ' << nNumber2 << ' ' << nNumber3 << endl;
}

void Function4(int nNumber1, int nNumber2, int nNumber3)
{
	cout << nNumber1 << ' ' << nNumber2 << ' ' << nNumber3 << endl;
}