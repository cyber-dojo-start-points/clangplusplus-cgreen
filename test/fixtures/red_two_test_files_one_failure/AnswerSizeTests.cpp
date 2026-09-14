/* The Makefile names HikerTests.o and Hiker.o and nothing else, so a second
   test file reaches the build by being #included from HikerTests.cpp. Of the
   two tests here only answers_three_digits is false. */

Ensure(Hiker, answers_two_digits) {
    Hiker hiker;
    assert_that(hiker.answer() > 9 && hiker.answer() < 100, is_true);
}

Ensure(Hiker, answers_three_digits) {
    Hiker hiker;
    assert_that(hiker.answer() > 99, is_true);
}
