#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <functional>
#include <initializer_list>
#include "Header.h"
#include "Template.h"
#include <map>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;


/*void pisi() {
	cout << endl;
}
template<typename T, typename ...Tt>
void pisi(T first, Tt... other)
{
	cout << first;
	pisi(other...);
}

template<typename ...T>
int f(T... t)
{
	int d = sizeof... (t);
	int niz[] = { t... };
	int s = 0;
	for (int i : {t...}) s += i;
	cout << "d= " << d << endl << "s= " << s << endl;
	return s;
}
*/

void main()
{
	//printStuff("nova godina", 1, 2.2, -0.1, "primjer", 8, 'c');
	/*std::vector<std::tuple<std::vector<int>, std::function<bool(int)>>> myVecTuple;

	std::tuple<std::vector<int>, std::function<bool(int)>> temp;
	std::get<1>(temp) = [](int x) { return x % 2 == 0; };
	myVecTuple.push_back(temp);

	std::get<1>(temp) = [](int x) { return x % 2 == 1; };
	myVecTuple.push_back(temp);

	std::get<1>(temp) = [](int x) { return x % 3 == 0; };
	myVecTuple.push_back(temp);

	std::get<1>(temp) = [](int x) { return x % 6 == 0; };
	myVecTuple.push_back(temp);

	std::get<1>(temp) = [](int x) { return x % 7 == 0; };
	myVecTuple.push_back(temp);


	for (int i = 7; i < 20; i ++)
	{
		if (std::get<1>(myVecTuple[0])(i))
			std::get<0>(myVecTuple[0]).push_back(i);

		if (std::get<1>(myVecTuple[1])(i))
			std::get<0>(myVecTuple[1]).push_back(i);

		if (std::get<1>(myVecTuple[2])(i))
			std::get<0>(myVecTuple[2]).push_back(i);

		if (std::get<1>(myVecTuple[3])(i))
			std::get<0>(myVecTuple[3]).push_back(i);

		if (std::get<1>(myVecTuple[4])(i))
			std::get<0>(myVecTuple[4]).push_back(i);
	}

	for (int i = 0; i < 5; ++i)
	{
		cout << "Vec[" << i << "] ";
		for (auto& temp : (std::get<0>(myVecTuple[i])))
			cout << temp << ' ';
		cout << endl << endl;
	}
	*/
	//cout << std::quoted("Dragan") << ',' << std::quoted("Zrilic");
	//std::initializer_list<double> list{ 1,2,3,4,5,6 };
	//InitListClass<double> llist(list);
	//cout << llist;

	/*A<double> obj(3.3);
	A<int> obj2(1);
	obj2.template m<char>(55);
	cout << obj << obj2;
	A<int>::D<char> d(0x31);
	d.mm(0x41);
	d.print();*/

	//int a = f(1, 2, 3, 4, 5);
	//pisi("Dragan", "Zrilic", '\n', 15, '.', 8, '.', 1996, '.');

	/*std::vector<int> v, w;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
		w.push_back(i * 2);
	}
	int x = v.at(0);
	for (auto it : v)
		cout << it;
	cout << endl;
	v.insert(v.begin() + 2, w.begin(), w.end());
	cout << v.front() << ' ' << v.back() << ' ' << x << endl;
	v.erase(v.begin() + 2, v.begin() + 15);
	v.swap(w);
	for (auto it : v)
		cout << it << ' ';
	cout << endl;
	std::sort(w.begin(), w.end(), [](int a, int b) { return a > b; });
	for (auto it : w)
		cout << it << ' ';
	cout << endl;
	*/

	HashTable myHash;
	myHash.addElement("Apple");	myHash.addElement("Banana"); myHash.addElement("Caterpillar");	myHash.addElement("Dog");	myHash.addElement("Elephant");
	myHash.addElement("Fedora");	myHash.addElement("Goosebumps"); myHash.addElement("House");	myHash.addElement("Insects");	myHash.addElement("Jam");
	myHash.addElement("Kite");	myHash.addElement("Limestone");	myHash.addElement("Mountaineering");	myHash.addElement("Night");	myHash.addElement("Open Sesame");
	myHash.addElement("Potatoes");	myHash.addElement("Quantum Mechanics");	myHash.addElement("Rrrrrrrrrrawr");	myHash.addElement("Snakes");	myHash.addElement("Tizzy Tube");
	myHash.addElement("Underworld");	myHash.addElement("Volcanic Ash"); myHash.addElement("Who When What Why"); myHash.addElement("XXX"); myHash.addElement("Yellow"); myHash.addElement("Zest of Lemon");
	
	cout << myHash;

	cout << endl;
	myHash.printHistogram();
	
	cin.ignore();
	cin.get();
}
