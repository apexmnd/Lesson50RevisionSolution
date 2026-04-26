#include "util.h"

void print(string msg) {
	cout << msg;
}


void init(int array[], int size, int a, int b) {
	if (size <= 0 || size > DEF_SIZE) {
		return;
	}

	if (a > b) {
		int temp = a;
		a = b;
		b = temp;
	}

	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % (b - a + 1) + a;
	}

}

string convert(int array[], int size) {
	if (size <= 0 || size > DEF_SIZE) {
		return "NO array elements.";
	}

	string s = to_string(array[0]);

	for (int i = 1; i < size; i++)
	{
		s += " " + to_string(array[i]);
	}

	return s;
}