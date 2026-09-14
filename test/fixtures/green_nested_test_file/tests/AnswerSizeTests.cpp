/* A test file in a sub-directory joins the run the same way as one beside
   HikerTests.cpp: the Makefile names its two object files and nothing else,
   so this file is #included by path from HikerTests.cpp. */

Ensure(Hiker, answers_two_digits) {
    Hiker hiker;
    assert_that(hiker.answer() > 9 && hiker.answer() < 100, is_true);
}
