#include <cgreen/cgreen.h>

#include "Hiker.hpp"

using namespace cgreen;

Describe(Hiker);
BeforeEach(Hiker) {}
AfterEach(Hiker) {}

/* Only answers_42 is false. The other two hold for 54 as well as for 42, so
   the run reports two passes beside the one failure. */

Ensure(Hiker, answers_two_digits) {
    Hiker hiker;
    assert_that(hiker.answer() > 9 && hiker.answer() < 100, is_true);
}

Ensure(Hiker, answers_42) {
    Hiker hiker;
    assert_that(hiker.answer(), is_equal_to(42));
}

Ensure(Hiker, answers_more_than_40) {
    Hiker hiker;
    assert_that(hiker.answer() > 40, is_true);
}
