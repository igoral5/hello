hello
=====

Program Hello World use autotools and gettext

Example build:
==============

CXXFLAGS="-ggdb -Wall -Werror" ./configure --prefix=/home/igor/test<br>
make<br>
make install<br> 
make install-strip<br>
make uninstall<br>
make distcheck

Cross compiling for Raspberry Pi:
=================================

CXX='arm-linux-gnueabihf-g++' STRIP='arm-linux-gnueabihf-strip' CXXFLAGS="-ggdb -Wall -Werror" ./configure --host=arm-linux --prefix=/home/pi/test

