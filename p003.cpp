/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "main.h"

void p3() {
    cout << "The prime factors of 13195 are 5, 7, 13 and 29.\n"
            "What is the largest prime factor of the number 600851475143 ?\n\n";
    //1. The number is too large to be a variable of type 'int,' so 'long long int'
    //   will be used.
    //   Define variables.
    long long int num = 600851475143;
    vector <long long int> factor;
    long long int gfactor = 1;

    //2. Start dividing the large number by integers and add
    //   data to the vector containing the factors of the number
    for (long long int x = 2; x <= num; x++) {
        if (num % x == 0) {
            factor.push_back(x);
            num = num / x;
            x = 2;
            //3. check if the x has reached the number and break out of for loop
            if (num == x) {
                break;
            }
        }
    }

    //4. Find the greatest factor
    for (int x = 0; x < factor.size(); x++) {
        if (factor[x] > gfactor) {
            gfactor = factor[x];
        }
    }

    //5. Print out the greatest factor
    cout << "The greatest prime factor is: " << gfactor << endl;
    
    return;
}