#include "Hiker.hpp"
#include <cstddef>

int Hiker::answer() const {
    return 6 * 9;
}

int Hiker::checksum() const {
    /* The learner has not filled the table in yet, so it is still null and
       reading from it crashes. The crash and the false assertion are in
       separate test processes, so the run reports both. */
    int *checksums = NULL;
    return checksums[0];
}
