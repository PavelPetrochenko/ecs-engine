#include "core.h"

//FIXME: version from cmake config
void print_version()
{
    printf(
        "VERSION %d.%d",
        1,  // ECSENGINE_VERSION_MAJOR, 
        0   // ECSENGINE_VERSION_MINOR
    );
}