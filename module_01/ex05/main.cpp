#include "Karen.hpp"

int main( void )
{
	Karen instance;

	instance.complain("debug");
	instance.complain("info");
	instance.complain("warning");
	instance.complain("error");
	instance.complain("abrakadabra");
	return 0;
}
