#include<stdio.h>
bool isHappy(int n) {

    int digit;
    int rem;
    int rem1;

    while (n != 1) {

        if (n == 4) {
            return false;
        }
        rem1 = 0;
        while(n > 0)
        {
            digit = n % 10;
            rem = digit * digit;
            rem1 = rem1 + rem;
            n = n / 10;
        }
            n = rem1;
    }

    return true;
}

