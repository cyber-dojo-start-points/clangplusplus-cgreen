/* The Makefile names HikerTests.o and Hiker.o and nothing else, so a second
   test file reaches the build by being #included from HikerTests.cpp. */

Ensure(Hiker, answers_three_digits) {
    Hiker hiker;
    assert_that(hiker.answer() > 99, is_true);
}
