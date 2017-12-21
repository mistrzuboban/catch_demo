#define CATCH_CONFIG_MAIN
#include "catch.hpp"


#include <iostream>


int sum(const int a, const int b) {

    return a + b;
}



TEST_CASE( "Test sum ok", "[should be OK]" ) {
    REQUIRE( sum(1, 2) == 3 );
}

TEST_CASE( "Test sum fail", "[should fail]" ) {
    REQUIRE( sum(1, 2) != 7 );
}