/* The Makefile names HikerTests.o and Hiker.o and nothing else, so a second
   test file reaches the build by being #included from HikerTests.cpp. Once it
   is in the shared library cgreen-runner finds this test by itself. */

Ensure(Hiker, answers_two_digits) {
    Hiker hiker;
    assert_that(hiker.answer() > 9 && hiker.answer() < 100, is_true);
}
