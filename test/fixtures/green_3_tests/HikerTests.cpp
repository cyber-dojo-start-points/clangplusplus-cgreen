#include <cgreen/cgreen.h>

#include "Hiker.hpp"

using namespace cgreen;

Describe(Hiker);
BeforeEach(Hiker) {}
AfterEach(Hiker) {}

/* cgreen-runner finds every Ensure in the shared library by itself, so a
   second and third test join the run without being named anywhere. */

Ensure(Hiker, answers_42) {
    Hiker hiker;
    assert_that(hiker.answer(), is_equal_to(42));
}

Ensure(Hiker, answers_two_digits) {
    Hiker hiker;
    assert_that(hiker.answer() > 9 && hiker.answer() < 100, is_true);
}

Ensure(Hiker, does_not_answer_the_question) {
    Hiker hiker;
    assert_that(hiker.answer(), is_not_equal_to(6 * 9));
}
