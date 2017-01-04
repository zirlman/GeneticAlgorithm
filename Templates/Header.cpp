#include "Header.h"

int Bla::stbr = 0;

void Bla::printS()
{
	stbr++;
	std::cout << "Staticka metoda" << std::endl;
	std::cout << "STBR: " << stbr << std::endl;
}
void Bla::printNS()
{
	br++;
	stbr++;
	std::cout << "Nestaticka metoda." << std::endl;
	std::cout << "STBR: " << stbr << std::endl;
	std::cout << "BR: " << br << std::endl;

}
