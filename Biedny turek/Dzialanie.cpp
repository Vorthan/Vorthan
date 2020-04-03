#include "Dzialanie.h"
#include <iostream>
#include <string>
#include <math.h>

using namespace std;


Dzialanie::Dzialanie()
{
	cout << " Podaj liczbe ktora chcesz zamienic" << endl;
	cin >> zmienna;
	for(int i=0;i<zmienna.length(); i++)
	zmienna[i]=toupper(zmienna[i]);
}

Dzialanie::~Dzialanie()
{
	cout << "Umarlem" << endl;
}

string Dzialanie::reverseString (string str)
{
	string Rstr;
	int len = str.length();
	for (int i = len - 1; i >= 0; i--)
		Rstr += str[i];
	return Rstr;
}

string Dzialanie::zamianaZzDec(int podstawa)
{
	int liczba = stoi(zmienna);
	string helper;

	for (; liczba > 0;)
	{
		int temp = (liczba % podstawa);
		if (temp > -1 && temp < 10)
			helper += temp + 48;
		if (temp > 9 && temp < 33)
			helper += temp + 55;
		liczba = liczba / podstawa;
	}

	helper = reverseString(helper);
	return helper;
}

string Dzialanie::zamianaNaDec(int podstawa)
{
	int length = zmienna.length();
	int* tab = new int[length];
	int temp = 0;

	for (int i = 0; length > i; i++)
	{
		int helper = zmienna[i];
		if (helper > 47 && helper < 58)
			tab[i] = (zmienna[i] - 48) * (pow(podstawa, length - i - 1));
		else
			tab[i] = (zmienna[i] - 55) * (pow(podstawa, length - i - 1));

	}

	for (int i = 0; length > i; i++)
		temp += tab[i];

	zmienna = to_string(temp);
	return zmienna;

}

string Dzialanie::zamianaNaDowolnySystem(int pod1, int pod2)
{
	if (pod1 == 10)
		return zamianaZzDec(pod2);
	else if (pod2 == 10)
		return zamianaNaDec(pod1);
	else
	{
		zamianaNaDec(pod1);
		return zamianaZzDec(pod2);
	}

}