/* The learner is part way through adding a second test file. It is already
   #included from HikerTests.cpp, so the half written body is compiled as
   part of HikerTests.cpp and stops the build. */

Ensure(Hiker, answers_two_digits) {
    Hiker hiker;
    assert_that(hiker.answer(), is_equal_to(42);
}
