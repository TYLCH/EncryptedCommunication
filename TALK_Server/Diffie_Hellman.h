#pragma once
#include<iostream>
using namespace std;

int power(int a, int r, int p) {
	int n = 1;
	for (int i = 0; i < r; i++) {
		n *= a;
		n = n % p;
	}
	return n;
}


string DS_put(int *ra) {
	string n = "";
	int num[8], a = 5, p = 97;
	for (int i = 0; i < 8; i++) {
		do {
			ra[i] = rand() % 100;
		} while (ra[i] == 0);
		int temp = power(a, ra[i], p);
		n += (char)temp;
	}
	return n;
}

string CStringToString(CString input) {
//	USES_CONVERSION;
	string s = (CT2A)input;
	return s;
}

CString stringToCString(string input) {
	CString str;
	str = input.c_str();
	return str;
}