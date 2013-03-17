/*
 * main.cpp
 *
 *  Created on: 17.03.2013
 *      Author: igor
 */

#include <iostream>
#include <cstdlib>
#include <exception>
#include <locale>

int
main(int argc, char *argv[])
try
{
	std::locale::global(std::locale(""));
	std::cout << "Hello World !" << std::endl;
	return EXIT_SUCCESS;
}
catch(const std::exception& er)
{
	std::cerr << "An exception occurred: " << er.what() << std::endl;
	return EXIT_FAILURE;
}
catch(...)
{
	std::cerr << "An unknown exception" << std::endl;
	return EXIT_FAILURE;
}

