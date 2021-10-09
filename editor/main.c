#include <string.h>
#include <stdio.h>
#include "../core/core.h"

int main (int argc, char *argv[])
{
    if(argc > 1 && memcmp(argv[1], "-v", sizeof(char*) * 2))
	print_version();
    return 0;
}
