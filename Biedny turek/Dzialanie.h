#pragma once
#include <iostream>
#include <string.h>
#include <math.h>
#include <string>
using namespace std;



class Dzialanie
{
private:
	string zmienna;
private:
	string reverseString(string str);
	string zamianaZzDec(int podstawa);
	string zamianaNaDec(int podstawa);
public:
	Dzialanie();
	~Dzialanie();
	string zamianaNaDowolnySystem(int pod1, int pod2);

};

