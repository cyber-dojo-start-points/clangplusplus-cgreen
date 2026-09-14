#include <cgreen/cgreen.h>

#include "Hiker.hpp"

using namespace cgreen;

Describe(Hiker);
BeforeEach(Hiker) {}
AfterEach(Hiker) {}

/* cgreen runs each test in its own process, so a false assertion ends only
   the test it is in and all three are reported. */

Ensure(Hiker, answers_42) {
    Hiker hiker;
    assert_that(hiker.answer(), is_equal_to(42));
}

Ensure(Hiker, answers_three_digits) {
    Hiker hiker;
    assert_that(hiker.answer() > 99, is_true);
}

Ensure(Hiker, answers_the_question) {
    Hiker hiker;
    assert_that(hiker.answer(), is_equal_to(6 * 9 * 2));
}
