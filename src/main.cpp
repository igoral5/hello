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
#include <gmpxx.h>
#include <iostream>
#include <iomanip>
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
    mpz_class a("12345678901234567890232346458769879783523523455465675674674");
    mpz_class b("-56789012345678901234567890546458769780784562456347648568976456547567");
    std::cout << _("First term: ") << a << std::endl;
    std::cout << _("Second term: ") << b << std::endl;
    std::cout << _("Sum: ") << a + b  << std::endl;
    std::cout << _("Absolute value: ") << abs(a + b) << std::endl;
    mpq_class d(2);
    mpq_class e(3);
    std::cout << _("Dividend: ") << d << std::endl;
    std::cout << _("Divisor: ") << e << std::endl;
    std::cout << _("Quotient: ") << d / e << std::endl;
    mpq_class a1("3/5");
    mpq_class b1("7/8");
    std::cout << _("First term: ") << a1 << std::endl;
    std::cout << _("Second term: ") << b1 << std::endl;
    std::cout << _("Sum: ") << a1 + b1 << std::endl;
    mpf_class d1("2,34123432453464575678876897978978987e12345", 1000);
    mpf_class e1("3,456457568768964634645756783567356756e45235", 1000);
    std::cout << std::setprecision(100);
    std::cout << _("First multiplier: ")<< d1 << std::endl;
    std::cout << _("Second multiplier: ") << e1 << std::endl;
    std::cout << _("Product: ") << d1 * e1 << std::endl;
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

