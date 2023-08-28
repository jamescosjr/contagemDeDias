#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int dia1, mes1, ano1, dia2, mes2, ano2, qtdDias1, qtdDias2, qtdDias;

		cout << "Digite a data inicial(dd/mm/aaaa)" << endl;
		cout << "dd: ";
		cin >> dia1;
		cout << "mm: ";
		cin >> mes1;
		cout << "aaaa: ";
		cin >> ano1;
		cout <<"" << endl;
		cout << "Digite a data final(dd/mm/aaaa)" << endl;
		cout << "dd: ";
		cin >> dia2;
		cout << "mm: ";
		cin >> mes2;
		cout << "aaaa: ";
		cin >> ano2;

		qtdDias1 = 0;

		for (int a = 1; a < ano1; a++) {
			if (a % 400 == 0 || (a % 4 == 0 && a % 100 != 0)) {
			      qtdDias1 = qtdDias1 + 366;
			    } else {
			      qtdDias1 = qtdDias1 + 365;
			    }
			  }

		for (int m = 1; m < mes1; m++) {
			if (m == 2) {
				if (ano1 % 400 == 0 || (ano1 % 4 == 0 && ano1 % 100 != 0)) {
					qtdDias1 = qtdDias1 + 29;
				}
				else {
					qtdDias1 = qtdDias1 + 28;
				}
			}
			else if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
				qtdDias1 = qtdDias1 + 31;
			}
			else {
				qtdDias1 = qtdDias1 + 30;
			}
		}
		qtdDias1 = qtdDias1 + dia1;

		qtdDias2 = 0;

		for (int b = 1; b < ano2; b++) {
			if (b % 400 == 0 || (b % 4 == 0 && b % 100 != 0)) {
			      qtdDias2 = qtdDias2 + 366;
			    } else {
			      qtdDias2 = qtdDias2 + 365;
			    }
			  }

		for (int n = 1; n < mes2; n++) {
			if (n == 2) {
				if (ano2 % 400 == 0 || (ano2 % 4 == 0 && ano2 % 100 != 0)) {
					qtdDias2 = qtdDias2 + 29;
				}
				else {
					qtdDias2 = qtdDias2 + 28;
				}
			}
			else if(n == 1 || n == 3 || n == 5 || n == 7 || n == 8 || n == 10 || n == 12) {
				qtdDias2 = qtdDias2 + 31;
			}
			else {
				qtdDias2 = qtdDias2 + 30;
			}
		}
		qtdDias2 = qtdDias2 + dia2;

		qtdDias = qtdDias2 - qtdDias1 + 1;

		cout <<"" << endl;

		if(qtdDias < 0) {
			cout << "Comando invalido!" << endl;
		}
		else {
			cout << qtdDias << " dias!" << endl;
		}

		cout <<"" << endl;

		system("pause");

		return 0;
}
