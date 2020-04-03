#include <iostream>
#include <string>
#include <math.h>
#include "Dzialanie.h"
using namespace std;

int main()
{
	
	while (1 == 1)
	{
		Dzialanie* ax;
		cout << "-----------------MENU-----------------" << endl;
		cout << "1.DEC->BIN" << endl;
		cout << "2.BIN->DEC" << endl;
		cout << "3.DEC->HEX" << endl;
		cout << "4.HEX->DEC" << endl;
		cout << "5.BIN->HEX" << endl;
		cout << "6.HEX->BIN" << endl;
		cout << "7.EXIT" << endl;
		int a;
		cin >> a;
		switch (a)
		{
		case 1:
			ax = new Dzialanie;
			cout << "Wynik to: " << ax->zamianaNaDowolnySystem(10, 2) << endl;
			break;
		case 2:
			ax = new Dzialanie;
			cout << "Wynik to: " << ax->zamianaNaDowolnySystem(2, 10) << endl;
			break;
		case 3:
			ax = new Dzialanie;
			cout << "Wynik to: " << ax->zamianaNaDowolnySystem(10, 16) << endl;
			break;
		case 4:
			ax = new Dzialanie;
			cout << "Wynik to: " << ax->zamianaNaDowolnySystem(16, 10) << endl;
			break;
		case 5:
			ax = new Dzialanie;
			cout << "Wynik to: " << ax->zamianaNaDowolnySystem(2, 16) << endl;
			break;
		case 6:
			ax = new Dzialanie;
			cout << "Wynik to: " << ax->zamianaNaDowolnySystem(16, 2) << endl;
			break;
		case 7:
			return 0;
			break;
		default:
			cout << "nie ma takiej opcji" << endl;
		}
	}
}


