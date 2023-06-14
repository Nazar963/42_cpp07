#include "iter.hpp"
#include <iostream>
#include <string>

int main(void)
{
	int eren[4] = {0, 1, 2, 3};

	for(int i = 0; i < 4; i++)
		std::cout << eren[i] << ", ";
	std::cout << std::endl;
	iter(eren, 4, loco);
	for(int i = 0; i < 4; i++)
		std::cout << eren[i] << ", ";
	std::cout << std::endl;

	float zoro[4] = {0.5, 1.5, 2.5, 3.5};

	for(int i = 0; i < 4; i++)
		std::cout << zoro[i] << ", ";
	std::cout << std::endl;
	iter(zoro, 4, loco);
	for(int i = 0; i < 4; i++)
		std::cout << zoro[i] << ", ";
	std::cout << std::endl;

	char levi[4] = {'a', 'b', 'c', 'd'};

	for(int i = 0; i < 4; i++)
		std::cout << levi[i] << ", ";
	std::cout << std::endl;
	iter(levi, 4, loco);
	for(int i = 0; i < 4; i++)
		std::cout << levi[i] << ", ";
	std::cout << std::endl;
}