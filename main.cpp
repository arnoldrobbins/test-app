#include <cstdio>

#include "hello/hello.h"
#include "goodbye/goodbye.h"

int main(int argc, char **argv)
{
	hello();
	printf("Gettin' some work done...\n");
	goodbye();

	return 0;
}
