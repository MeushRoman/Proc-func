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




int main()
{
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

