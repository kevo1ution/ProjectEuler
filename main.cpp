//Project Euler
//c++ practice

#include "main.h"

int main() {
    //1. Prompt with author name, program title, etc.
    cout << "+-----------------------------------------------------+\n"
            "|       Author: Kevin Tang <kevin26428@gmail.com      |\n"
            "|           Project Euler- Math Algorithms            |\n"
            "|                     Solution                        |\n"
            "+-----------------------------------------------------+\n"
            "\nDescription: C++ language was used to create solutions for\n"
            "www.ProjectEuler.net";

    //2. Prompt user with options and set up necessary variables

    int response = 1;
    while (response != 0) {

        cout << "\nEnter in number for correct option.\n"
                " 0- quit\n"
                " 1- Multiples of 3 and 5\n"
                " 2- Even Fibonacci numbers\n"
                " 3- Largest prime factor\n"
                " 4- Largest palindrome product\n"
                " 5- Smallest multiple\n"
                " 6- Sum square difference\n"
                " 7- 10001st prime\n"
                " 8- Largest product in a series\n"
                " 9- Special Pythagorean triplet\n"
                " 10- Summation of primes\n"
                " 11- Largest product in a grid\n"
                " 12- Highly divisible triangular number\n"
                " 13- Large sum\n"
                " 14- Longest Collatz Sequence\n"
                " 19- ADMIN MENU\n\n"
                "Your input: ";
        cin >> response;
        while (cin.fail() || response < 0) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Your response was invalid. Please enter an integer from 0-18: \n";
            cin >> response;
        }
        switch (response) {
            case 1:
                p1();
                break;
            case 2:
                p2();
                break;
            case 3:
                p3();
                break;
            case 4:
                p4();
                break;
            case 5:
                p5();
                break;
            case 6: 
                p6();
                break;
            case 7:
                p7();
                break;
            case 8:
                p8();
                break;
            case 9:
                p9();
                break;
            case 10:
                p10();
                break;
            case 11:
                p11();
                break;
            case 12:
                p12();
                break;
            case 13:
                p13();
            case 14:
                p14();
        }

    }
    return 0;
}

