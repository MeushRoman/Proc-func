// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

//1
//void powerA3(int a, int &b) {
//	b = pow(a, 3);
//}


//2
//void powerA234(int A, int &B, int &C, int &D) {
//	B = pow(A, 2);
//	C = pow(A, 3);
//	D = pow(A, 4);
//}

//3
//void Mean(int X, int Y, int &AMean, int &GMean) {
//	AMean = (X + Y) / 2;
//	GMean = sqrt(X*Y);
//}

//4
//void TrianglePS(int a, float &P, float &S) {
//	P = 3 * a;
//	S = pow(a, 2 * sqrt(3) / 4);
//}

//6
//void DigitCountSum(int K, int &C, int &S) {
//	
//	while (K!=0)
//	{
//		S += K % 10;
//		++C;
//		K /= 10;
//	}
//}

//7
//void InvertDigits(int &K) {
//	int n = 0;
//
//	while (K > 0)
//	{
//		n *= 10;
//		n += K % 10;
//
//		K /= 10;
//	}
//	K = n;
//}


//8
//void AddRightDigit(int D, int &K) {
//	K = 10 * K + D;
//}

//9
//void AddLeftDigit(int D, int &K) {
//	int  x = 1, z;
//	z = K;
//	for (int i = 0; z != 0; i++)
//	{
//		z /= 10;
//		x *= 10;
//	}
//	K = D * x+ K;
//}


//10
//void Swap(int &x, int &y) {
//	int z;
//
//	z = x;
//	x = y;
//	y = z;
//}


//24
//void ArrayX(int a[],int size) {
//
//	for (int i = 0; i < size/2; i++)
//	{
//		swap(a[i], a[size - 1 - i]);
//	}
//	
//}


//25
//void kratX(int a, int b, int c, int &i) {
//	for (i = 0; i <= 1000; i++)
//	{
//		if (i%a == 0 && i%b == 0 && i%c == 0) cout << i << endl;
//	}
//}


//26
bool ArrZ(char a[]) {
	
	int x = 0, z = 0;
	
	for (int i = 0; i < strlen(a); i++)
	{
		if (x < 0) return false; else
			if (a[i] == '(') x++;  else if (a[i] == ')') x--;
	
		if (z < 0) return false; else
			if (a[i] == '(') z++;  else if (a[i] == ')') z--;
	}

	if (x != 0) return false; else if (z != 0) return false;
	return true;
	
}


int main()
{
	//26
	char strA[10];

	cin >> strA;

	cout << ArrZ(strA) << endl;



	//25
	/*int a, b, c, i=0;

	cin >> a >> b >> c;

	kratX(a, b, c, i);*/


	//24
	/*int a[] = { 1,3,6,4,5,7,8,9,10 };
	int size = 9;

	ArrayX(a, size);

	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}

	cout << endl;
*/



	//10 
	/*int a = 1, b = 2, c = 3, d = 4;

	Swap(a, b);
	cout << a << "\t" << b << endl;

	b = 2; c = 3;
	Swap(b, c);
	cout << b << "\t" << c << endl;

	 c = 3; d = 4;
	Swap(c, d);
	cout << c << "\t" << d << endl;*/



	//9
	/*int d, k;
	cin >> k;
	cin >> d;

	AddLeftDigit(d, k);

	cout << k << endl;*/

	//8
	/*int d, k;

	cin >> k;
	cin >> d;


	AddRightDigit(d, k);

	cout << k << endl;*/

	//7
	/*int k;

	cin >> k;

	InvertDigits(k);

	cout << k <<  endl;*/


	//6
	/*int a, c=0, s=0;

	cin >> a; c << "\t" << s << endl;*/


	/*int a, b = 1, c = 1, d = 1;
	cin >> a;*/

	//3
	/*int a=2, b=4, c=6, d=8, AMean=0, GMean=0;

	Mean(a, b, AMean, GMean);
	cout << AMean << "\t" << GMean << endl;

	Mean(a, c, AMean, GMean);

	DigitCountSum(a, c, s);

	cout <<
	cout << AMean << "\t" << GMean << endl;

	Mean(a, d, AMean, GMean);
	cout << AMean << "\t" << GMean << endl*/;


	//	powerA234(a, b, c, d);

	//	powerA3(x, y);

		/*cout << b << endl;
		cout << c << endl;
		cout << d << endl;*/


	return 0;
}

