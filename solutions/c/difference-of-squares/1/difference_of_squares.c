#include "difference_of_squares.h"
#include <stdio.h>

unsigned int sum_of_squares(unsigned int number) {
    unsigned int nums[number];
    for (unsigned int i = 0; i < number; i++) {
        nums[i] = i + 1;
    }

    unsigned int squaredNums[number];
    for (unsigned int i = 0; i < number; i++) {
        squaredNums[i] = nums[i] * nums[i];
    }

    unsigned int sum = 0;
    for (unsigned int i = 0; i < number; i++) {
        sum += squaredNums[i];
    }

    return sum;
}

unsigned int square_of_sum(unsigned int number) {
    unsigned int nums[number];
    for (unsigned int i = 0; i < number; i++) {
        nums[i] = i + 1;
    }

    unsigned int sum = 0;
    for (unsigned int i = 0; i < number; i++) {
        sum += nums[i];
    }

    return sum *= sum;
}

unsigned int difference_of_squares(unsigned int number) {
    return square_of_sum(number) - sum_of_squares(number);
}
