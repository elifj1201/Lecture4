#include <iostream>
using namespace std;

int add(int a, int b) {

	return a + b;
}

int test() {

	cout << "Hello, World! My name is Jaehee Lim/" << endl;
	int a, b;
	cin >> a >> b;
	cout << add(a, b);

	return 0;
}