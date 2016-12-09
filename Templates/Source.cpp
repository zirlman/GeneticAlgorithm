#include <iostream>
using std::cout;
using std::cin;
using std::endl;


template<typename T>
T max(T a, T b) { return a > b ? a : b; }

void main() {
	cout << max(3.3, 8.3);
	cout << max('c', 'a');

	cin.ignore();
	cin.get();
}