#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "../core/core.h"

TEST_CASE("testing the print_version function"){
    CHECK(VERSION == 1.0);
}
