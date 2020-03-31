#include "Matrix.h"
#include <vector>
#include <iostream>
using namespace std;

Matrix::Matrix(int x, int y)
{
	satirSayisi = x;
	sutunSayisi = y;
	v2.resize(x, vector<int>(y));
}

int Matrix::satirSayisiniAl()
{
	return satirSayisi;
}

int Matrix::sutunSayisiniAl()
{
	return sutunSayisi;
}

void Matrix::elemanAyarla(int x, int y, int sayi)
{
	v2[x][y] = sayi;
}

void Matrix::matrisToplami(Matrix x)
{
	vector<vector<int>>sonuc(satirSayisi, vector<int>(sutunSayisi));
	if (x.satirSayisi == satirSayisi && x.sutunSayisi == sutunSayisi) {
		for (int i = 0; i < satirSayisi; i++) {
			for (int j = 0; j < sutunSayisi; j++) {
				sonuc[i][j] = v2[i][j] + x.v2[i][j];
				cout << sonuc[i][j] << " ";
			}
			cout << endl;
		}
	}
	else
		cout << "Matris toplami yapilamaz."<<endl;
	x.v2.clear();
}

void Matrix::matrisCarpimi(Matrix x)
{
	vector<vector<int>>sonuc(satirSayisi, vector<int>(x.sutunSayisi));
	if (x.satirSayisi == sutunSayisi) {
		for (int i = 0; i < satirSayisi; i++)
		{
			for (int j = 0; j < x.sutunSayisi; j++)
			{
				sonuc[i][j] = 0;
				for (int k = 0; k < x.satirSayisi; k++)
				{
					sonuc[i][j] += v2[i][k] * x.v2[k][j];
				}
			}
		}
		for (int i = 0; i < satirSayisi; i++)
		{
			for (int j = 0; j < x.sutunSayisi; j++)
				cout << sonuc[i][j] << "  ";

			cout << endl;
		}
	}
	else
		cout << "Matris carpimi yapilamaz." << endl;

}
