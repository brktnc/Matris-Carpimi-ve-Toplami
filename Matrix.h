#pragma once
#include <vector>
#include <iostream>
using namespace std;
class Matrix
{
public:
	Matrix(int, int);
	int satirSayisiniAl();
	int sutunSayisiniAl();
	void elemanAyarla(int,int,int);
	void matrisToplami(Matrix x);
	void matrisCarpimi(Matrix x);
private:
	int satirSayisi;
	int sutunSayisi;
	vector<vector<int>> v2;
};

