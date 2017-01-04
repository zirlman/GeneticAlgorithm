#pragma once
#include <iostream>
#include <map>
#include <list>
#include <string>
#include <iomanip>

/*template<class T, int k>
class Vekt
{
public:
	Vekt();
	T& operator[] (int) const;
private:
	int len;
	T niz[k];
};

template<class T, int k>
Vekt<T, k>::Vekt()
{
	len = k;
	for (int i = 0; i < len; i++)
		niz[i] = T();
}

template<class T, int k>
T& Vekt<T, k>::operator[] (int i) const { return niz[i]; }*/

/*template<class T>
class InitListClass
{
public:
	InitListClass(std::initializer_list<T>);
private:
	std::initializer_list<T> list;

	template<typename T>
	friend std::ostream& operator<< (std::ostream&, const InitListClass<T>&);
};

template<class T>
InitListClass<T>::InitListClass(std::initializer_list<T> llist) : list(llist) {}

template<typename T>
std::ostream& operator<<(std::ostream& os, const InitListClass<T>& ilc)
{
	for (auto& it : ilc.list)
		os << it << " ";
	return os << endl;
}*/

/*template<class T, int k>
class Vekt
{
public:
	Vekt();
private:
	T niz[k];
	int len;
};

template<class T, int k>
Vekt<T, k>::Vekt()
{
	len = n;
	for (int i = 0; i < len; ++i)
		niz[i] = T();
}*/

/*template<class T>
class A
{
public:
	template<class U>
	class D
	{
	public:
		D(U x) : aa(x) {}

		void mm(const U&);
		void print();
	private:
		U aa;


	};

	template<typename B>
	A(B x) : info(x) {}

	template<typename B>
	void m(const B&);
private:
	T info;

	template<typename T>
	friend std::ostream& operator<< (std::ostream&, const A<T>&);
};

template<typename T>
std::ostream& operator<< (std::ostream& os, const A<T>& obj)
{
	return os << obj.info << endl;
}

template<typename T>
template<typename B>
void A<T>::m(const B& b)
{
	info = b;
}


template<typename T>
template<typename U>
void A<T>::D<U>::mm(const U& _aa)
{
	aa = _aa;
}


template<typename T>
template<typename U>
void A<T>::D<U>::print()
{
	cout << aa << endl;
}*/

/*class A
{
public:
	A();
	A(const A&);
	A(A&&);
	~A();
	A& operator= (const A&);
	A& operator= (A&&);
private:
	int* niz;
	int len;

	void copy(const A&);
	void move(A&&);
};

A::A() :len(0)
{
	niz = new int[1];
}

A::A(const A&other)
{
	copy(other);
}

A::A(A&& other)
{
	move(std::move(other));
}

A::~A() { delete[] niz; }

void A::copy(const A& other)
{
	len = other.len;
	delete[] niz;
	niz = new int[len];
	std::copy(other.niz, other.niz + len, niz);
}

void A::move(A&& other)
{
	len = other.len;
	niz = other.niz;
	other.niz = nullptr;
}

A& A::operator= (const A& other)
{
	if (&other != this)
		copy(other);
	return *this;
}

A& A::operator= (A&& other)
{
	if (&other != this)
		move(std::move(other));
	return *this;
}*/


class HashTable
{
public:
	HashTable();
	~HashTable();
	std::string getHashElement(const std::string&);
	void addElement(const std::string&);
	void removeElement(const std::string&);
	void printHistogram();

private:
	std::map<int, std::list<std::string>> hashMap;

	int hash(const std::string&);

	friend std::ostream& operator<<(std::ostream&, const HashTable&);
};