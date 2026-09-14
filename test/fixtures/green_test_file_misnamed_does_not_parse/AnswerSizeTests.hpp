/* Given a .hpp name instead of a .cpp one, and nothing #includes it. The
   Makefile names HikerTests.o and Hiker.o and nothing else, so clang++ never
   opens this file and the missing bracket never stops the build. */

Ensure(Hiker, answers_two_digits) {
    Hiker hiker;
    assert_that(hiker.answer(), is_equal_to(42);
}
