/*
 * main.cpp
 *
 *  Created on: 17.03.2013
 *      Author: igor
 */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif
#include "gettext.h"
#define _(string) gettext(string)
#include <iostream>
#include <cstdlib>
#include <exception>
#include <locale>

int
main(int argc, char *argv[])
try
{
    std::locale::global(std::locale(""));
    bindtextdomain(PACKAGE, LOCALEDIR);
    textdomain(PACKAGE);
    std::cout << _("Hello World !") << std::endl;
	return EXIT_SUCCESS;
}
catch(const std::exception& er)
{
	std::cerr << _("An exception occurred: ") << er.what() << std::endl;
	return EXIT_FAILURE;
}
catch(...)
{
	std::cerr << _("An unknown exception") << std::endl;
	return EXIT_FAILURE;
}

