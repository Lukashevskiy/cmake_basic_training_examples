#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include "libhello/hello_world.hpp"
#include <sstream>

TEST_CASE( "Quick check", "[main]" ) {
    std::stringstream test_out;
    hello_world_out::hello_world_out(test_out);

    REQUIRE( test_out.str() == "Hello world!\n" );
}

