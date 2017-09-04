/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "main.h"
bool isPal(int num); //function checking if a number is Palindromic

void p4() {
    cout << "A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.\n"
            "Find the largest palindrome made from the product of two 3 - digit numbers.\n\n";

    //1. set up variables
    int num1, num2; //three digit numbers
    int pal = 0;
    int temp;

    //2. set up for loops to find multiples of three digit numbers
    for (num1 = 100; num1 < 1000; num1++) {
        for (num2 = 100; num2 < 1000; num2++) {
            temp = num1 * num2;

            //3. check if temp is palindrome
            if (isPal(temp)) {
                if (temp > pal) {
                    pal = temp;
                }
            }
            //4. set number 2 equal to number 3 to skip repeating calculations

        }
        num2 = num1;
    }

    //5. print out the largest palindrome
    cout << "The largest palindrome is: " << pal << endl;

    return;
}

bool isPal(int num) {
    //1. set up variables
    string temp = boost::lexical_cast<string>(num); // cast the number as a string
    int half = (temp.length() / 2);

    //2. Check if the last character matches with first character of string
    for (int x = 0; x < half; x++) {
        if (temp[x] != temp[temp.length() - x - 1]) {
            return false;
        }
    }

    //3. It passed the test, 'num' is a palindrome
    return true;
}