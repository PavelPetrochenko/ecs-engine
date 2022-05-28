#include <string.h>
#include <stdio.h>

#include <utils/log.h>
#include <modules/module.h>

int main (int argc, char **argv)
{
    switch (argc) 
    {
        case 2:
            int is_v = strncmp(argv[1], "-v", 2);
            int is_version = strncmp(argv[1], "--version", 9);
            if (is_v || is_version) core::utils::log::print_version();
    }

    return 0;
}
