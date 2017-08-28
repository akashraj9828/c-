// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include<stdio.h>
#include <iostream>
#include<conio.h>

using namespace std;

int suma(int a[]);
int subtract(int a[]);
int multiply(int a[]);
int divide(int a[]);
int factorial(int k);
int root(int k);
#define n 10

int main()
{
	//int n = 6;
	char ch[] = { "aksdkjakdkaskdjkdjkasjdkjskdskjdkasjdk""1231" };
	cout << sizeof(ch);

	int a[] = { 0,0 };
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int c;
	int sum;
	cout << "sizzzzzze:" << sizeof(a[10]) << endl;
	sum = suma(a);
	cout << endl << sum;

	//cout << a;
	cin >> c;
	return 0;
}

int suma(int a[]) {
	//int j= a;
	int sum = 0;
	int x = 0;
	for (x = 0; x < n; x++) {
		sum += a[x];
		cout << a[x] << endl;

	}
	cout << "size" << sizeof(a[10]);

	return sum;

}
int subtract(int a[]) {
	return 0;
}
int multiply(int a[]) {
	return 0;

}
int divide(int a[]) {
	return 0;

}
int factorial(int k) {
	return 0;

}
int root(int k) {
	return 0;
}

