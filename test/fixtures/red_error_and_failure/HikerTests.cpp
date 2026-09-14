#include <cgreen/cgreen.h>

#include "Hiker.hpp"

using namespace cgreen;

Describe(Hiker);
BeforeEach(Hiker) {}
AfterEach(Hiker) {}

Ensure(Hiker, answers_42) {
    Hiker hiker;
    assert_that(hiker.answer(), is_equal_to(42));
}

Ensure(Hiker, checksums_to_0) {
    Hiker hiker;
    assert_that(hiker.checksum(), is_equal_to(0));
}
