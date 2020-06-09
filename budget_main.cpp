#include <iostream>
#include <cstdio> //maybe not necessary, seems to be equivalent to stdio.h in c which is the same as iostream
using namespace std;

int main() {
	cout << "Hello world" << endl;
	cout << "Type in a number: ";
	int x=0;
	cin >> x;
	cout << "This is the number stored in variable x: " << x << endl;
	return 0;
}
