#include "stdafx.h"
#include <iostream>
#include<conio.h>

using namespace std;

int findFactorial(int x) {
	if (x == 1) {
		return 1;
	}
	else
	{
		return x*findFactorial(x - 1);
	}
}

int main()
{
	int x;
	cout << "enter the factorial you wanna find: ";
	cin >> x;
	cout<<findFactorial(x);
	getch();
}
