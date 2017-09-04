/*
 * My approach: Instead of brute forcing, which would take ages, I am going to work backwards
 * starting from the first number in the sequence, one, we know that to make the sequence the longest
 * we need to have as many odd numbers in it as possible.
 */

#include "main.h"

void p14() {
    cout << "The following iterative sequence is defined for the set of positive integers:\n"
            "n → n/2 (n is even)\n"
            "n → 3n + 1 (n is odd)\n"
            "Using the rule above and starting with 13, we generate the following sequence:\n"
            "13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1\n"
            "It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.\n"
            "Which starting number, under one million, produces the longest chain?\n\n";

    //1. set up variables
    int num, counter, hnum = 0, hcnt = 0, temp;

    //2. set up a for loop and keep num under a million and odd, because the num can sometimes be over a million
    /*for (num = 8; num < 1000000 || (num < 1500000 && num % 2 == 1 ); counter++) {
        cout << num << endl;
        //3. with an if else statement, figure out if the number can be reduced: lengthening the
        if (((num - 1) % 3 == 0) && !(2 * (num - 1) % 9 == 0) && !((num - 1) % 6 == 0)) {
            num = (num - 1) / 3;
        } else {
            num *= 2;
        }
        if (num == 1) {
            break;
        }
    }*/
    for (num = 2; num < 1000000; num++) {
        temp = num;

        for (counter = 0; temp != 1; counter++) {
            if (temp % 2 == 0) {
                temp /= 2;
            } else {
                temp = temp * 3 + 1;
            }
        }
        if (counter > hcnt) {
            hnum = num;
            hcnt = counter;
        }
        cout << num << endl;
    }

    //4. print out answer
    cout << "The Answer is: " << hnum << endl << endl;

    return;
}