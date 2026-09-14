#include <cgreen/cgreen.h>

#include "Hiker.hpp"

using namespace cgreen;

/* The context is set up but the learner has not written an Ensure yet, so
   the shared library builds and cgreen-runner finds nothing to run. */

Describe(Hiker);
BeforeEach(Hiker) {}
AfterEach(Hiker) {}
