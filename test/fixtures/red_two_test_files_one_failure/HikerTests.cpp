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

Ensure(Hiker, does_not_answer_the_question) {
    Hiker hiker;
    assert_that(hiker.answer(), is_not_equal_to(6 * 9));
}

#include "AnswerSizeTests.cpp"
