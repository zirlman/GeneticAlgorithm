#include "Template.h"

HashTable::HashTable() {}

HashTable::~HashTable()
{
	hashMap.clear();
}

std::string HashTable::getHashElement(const std::string &str)
{
	int index = hash(str);
	return *std::find(hashMap[index].begin(), hashMap[index].end(), str);
}

void HashTable::addElement(const std::string &str)
{
	int index = hash(str);
	hashMap[index].push_back(str);
}

void HashTable::removeElement(const std::string &str)
{
	hashMap[hash(str)].pop_back();
}

void HashTable::printHistogram()
{
	std::cout << "Total items:" << std::endl;
	for (auto& mit : hashMap)
	{
		std::cout << std::setw(2) << std::right << mit.first << ": ";
		for (int i = 0; i < mit.second.size(); i++)
			std::cout << "X ";
		std::cout << std::endl;
	}

}

int HashTable::hash(const std::string& itemKey)
{
	int s = 0;
	for (int i = 0; i < itemKey.length(); ++i)
		s += itemKey[i];
	return (s*itemKey.length()) % 13;
}

std::ostream & operator<<(std::ostream& os, const HashTable& ht)
{
	os << "Hash Table:" << std::endl;
	for (auto& mit = ht.hashMap.begin(); mit != ht.hashMap.end(); mit++)
	{
		os << std::setw(2) << std::right << mit->first << ":  ";
		for (auto& lit = mit->second.begin(); lit != mit->second.end(); lit++)
			os << std::setw(16) << std::left << *lit << ' ';
		os << std::endl;
	}
	return os;
}
