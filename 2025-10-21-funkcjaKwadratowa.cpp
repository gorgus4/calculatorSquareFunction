/******************************************************************************

Program do równania kwadratowego

Jakub Gara

Podstawy Programowania
21-10-2025

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Deklaracja zmiennych
    
	double a = 0, b = 0, c = 0;                 // współczynniki a, b, c
	double delta = 0;                           // delta
	double x1 = 0, x2 = 0, x0 = 0;              // pierwiastki x0, x1, x2
    
    // Wprowadzanie zmiennych
    
	cout << "Wprowadź: współczynnik a: ";
	cin >> a;
	cout << endl;

	cout << "Wprowadź: współczynnik b: ";
	cin >> b;
	cout << endl;

	cout << "Wprowadź: wyraz wolny c: ";
	cin >> c;
	cout << endl;

	delta = b*b - 4*a*c;
    
    // Brak rozwiązań
    
	if (delta < 0) {
		cout << "Brak rozwiązań - delta mniejsza niż zero. ";
	}
    
    // Jedno rozwiązanie
    
	if (delta == 0) {
		x0 = -b / 2*a;
		cout << "Funkacja posiada jedno rozwiązanie: \n" << "x0 = " << x0;
	}
    
    // Dwa rozwiązania
    
	if (delta > 0) {
		x1 = (-b - sqrt(delta)) / 2*a;
		x2 = (-b + sqrt(delta)) / 2*a;
		cout << "Funkacja posiada dwa rozwiązania: \n" << "x1 = " << x1 << "\n" << "x2 = " << x2;
	}

	return 0;
}