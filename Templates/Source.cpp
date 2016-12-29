#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <functional>
using std::cout;
using std::cin;
using std::endl;

void printStuff()
{
	cout << endl;
}
template<typename Tfirst, typename... Trest>
void printStuff(Tfirst info, Trest... rest)
{
	cout << info << ' ';
	printStuff(rest...);
}




void main()
{
	//printStuff("kita", 1, 2.2, -0.1, "primjer", 8, 'c');

	std::vector<std::tuple<std::vector<int>, std::function<bool(int)>>> myVecTuple;

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
			(std::get<0>(myVecTuple[0])).push_back(i);

		if (std::get<1>(myVecTuple[1])(i))
			(std::get<0>(myVecTuple[1])).push_back(i);

		if (std::get<1>(myVecTuple[2])(i))
			(std::get<0>(myVecTuple[2])).push_back(i);

		if (std::get<1>(myVecTuple[3])(i))
			(std::get<0>(myVecTuple[3])).push_back(i);

		if (std::get<1>(myVecTuple[4])(i))
			(std::get<0>(myVecTuple[4])).push_back(i);
	}

	for (int i = 0; i < 5; ++i)
	{
		cout << "Vec[" << i << "] ";
		for (auto& temp : (std::get<0>(myVecTuple[i])))
			cout << temp << ' ';
		cout << endl << endl;
	}

	cin.ignore();
	cin.get();
}
