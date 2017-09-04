/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "main.h"
unsigned int sumofsquare(int num, int counter, unsigned int val);
unsigned int sumofval(int num, int counter, unsigned int val);

void p6() {
    cout << "The sum of the squares of the first ten natural numbers is,\n"
            "1^2 + 2^2 + ... + 10^2 = 385\n"
            "The square of the sum of the first ten natural numbers is,\n"
            "(1 + 2 + ... + 10)^2 = 55^2 = 3025\n"
            "Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.\n"
            "Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.\n\n";

    //1. set up variables
    unsigned int sum;
    unsigned int square;
    int temp = 100;

    //2. call recursive functions;
    sum = sumofsquare(temp, 0, 0);
    square = sumofval(temp, 0, 0);
    square *= square;

    //3. print the difference
    cout << "The difference is: " << square - sum << endl;
    return;
}

unsigned int sumofsquare(int num, int counter, unsigned int val) {
    if (counter == num) {
        return val;
    }
    counter++;
    return sumofsquare(num, counter, val += (counter * counter));
}

unsigned int sumofval(int num, int counter, unsigned int val) {
    if (counter == num) {
        return val;
    }
    counter++;
    return sumofval(num, counter, val += counter);
}