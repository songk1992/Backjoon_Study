//-------------------------------------------------------------------
//M1
//SimpleFnMain.cpp

#include <iostream>
using namespace std;

int add(int a, int b)
{
	int sum;
	sum = a + b;
	return sum;
}

void main()
{
	int x = 3, y = 4, z;
	z = add(x, y);
	cout << z;
}

//-------------------------------------------------------------------
//M2
//SimpleFnMain.cpp

#include <iostream>
using namespace std;

int add(int, int);

void main()
{
	int x = 3, y = 4, z;
	z = add(x, y);
	cout << z;
}

int add(int a, int b)
{
	int sum;
	sum = a + b;
	return sum;
}




//-------------------------------------------------------------------
//M3

//SimpleFn.cpp
int add(int a, int b)
{
	int sum;
	sum = a + b;
	return sum;
}

//SimpleFn.h
int add(int, int);

//SimpleFnMain.cpp
#include <iostream>
#include "SimpleFn.h"

void main()
{
	int x = 3, y = 4, z;
	z = add(x, y);
	std::cout << z;
}


