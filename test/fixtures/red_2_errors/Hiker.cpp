#include "Hiker.hpp"
#include <cstddef>

/* Neither table has been filled in yet, so both are still null and reading
   from either one crashes. Each test has its own process, so both crashes
   are reported rather than the first ending the run. */

int Hiker::answer() const {
    int *answers = NULL;
    return answers[0];
}

int Hiker::checksum() const {
    int *checksums = NULL;
    return checksums[0];
}
