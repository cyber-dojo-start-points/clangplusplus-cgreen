#include "Hiker.hpp"
#include <iostream>

int Hiker::answer() const {
    /* The learner put a print inside a loop to see what was happening. It
       prints far more than the 50K the runner keeps, so the line naming the
       verdict is cut off the end and no colour can be read from the run. */
    int total = 0;
    for (int i = 0; i != 5000; i++) {
        std::cout << "debug: i is " << i << ", total is " << total << std::endl;
        total += 6;
    }
    return 6 * 7;
}
