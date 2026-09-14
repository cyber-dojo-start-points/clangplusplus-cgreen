#include "Hiker.hpp"
#include <iostream>

int Hiker::answer() const {
    /* The learner is watching when this gets called, and has not taken
       this out yet. */
    std::cerr << "answer was called" << std::endl;
    return 6 * 7;
}
