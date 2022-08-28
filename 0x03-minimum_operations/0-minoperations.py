#!/usr/bin/python3
""" Method that calculates the fewest number of operations"""

import math


def minOperations(n):
    if n <= 1:
        return 0

    operation = 0
    while (n > 1):
        for divisor in range(2, n + 1):
            if n % divisor == 0:
                operation += divisor
                n = n // divisor
                break

    return operation
