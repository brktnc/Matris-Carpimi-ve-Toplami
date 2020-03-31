#include "Matrix.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
	cout << "1. matris satir ve sutun sayisi gir: ";
	int x, y;
	cin >> x;
	cin >> y;
	Matrix m(x, y);
	cout << "2. matris satir ve sutun sayisi gir: ";
	int x1, y1;
	cin >> x1;
	cin >> y1;
	Matrix m2(x1, y1);
	int sayi;
	cout << "1. matris" << endl;
	for (int i = 0; i < x ; i++) {
		for (int j = 0; j < y; j++) {
			cout << i+1 << ". satir " << j+1 << ". sutuna girilecek sayi: ";
			cin >> sayi;
			m.elemanAyarla(i, j, sayi);
		}
	}
	cout << "2. matris" << endl;
	for (int i = 0; i < x1; i++) {
		for (int j = 0; j < y1; j++) {
			cout << i + 1 << ". satir" << j + 1 << ". sutuna girilecek sayi: ";
			cin >> sayi;
			m2.elemanAyarla(i, j, sayi);
		}
	}
	cout << "Matrislerin toplami: "<<endl;
	m.matrisToplami(m2);
	cout << "Matrislerin carpimi: " << endl;
	m.matrisCarpimi(m2);
}