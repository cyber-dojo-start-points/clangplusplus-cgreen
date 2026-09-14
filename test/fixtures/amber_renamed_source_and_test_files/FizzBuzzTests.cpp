#include <cgreen/cgreen.h>

#include "FizzBuzz.hpp"

using namespace cgreen;

/* The tests themselves are sound. The Makefile sets KATA=Hiker and names
   HikerTests.o and Hiker.o, so renaming both files leaves it asking for
   sources that are no longer there and the build stops before any test
   runs. Renaming here means editing the Makefile too. */

Describe(FizzBuzz);
BeforeEach(FizzBuzz) {}
AfterEach(FizzBuzz) {}

Ensure(FizzBuzz, answers_42) {
    FizzBuzz fizz_buzz;
    assert_that(fizz_buzz.answer(), is_equal_to(42));
}
