#include <string.h>
#include <stdio.h>

#include <utils/log.h>
#include <modules/module.h>

int main (int argc, char *argv[])
{
    if(argc > 1 && memcmp(argv[1], "-v", sizeof(char*) * 2))
	core::utils::log::print_version();
    return modules::module::r_one();
}
