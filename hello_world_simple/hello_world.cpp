#include <ostream>
#include "hello_world.hpp"

std::ostream& hello_world_out::hello_world_out(std::ostream &out){
    out << "Hello world!" << '\n';
    return out;
}