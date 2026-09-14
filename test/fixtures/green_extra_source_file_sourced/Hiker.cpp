#include "Hiker.hpp"

/* The Makefile compiles Hiker.cpp and HikerTests.cpp and nothing else, so an
   extra source file reaches the build by being #included here. */
#include "Checksum.cpp"

int Hiker::answer() const {
    return 6 * checksum();
}
