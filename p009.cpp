/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "main.h"

void p9() {
    cout << "A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,\n"
            "a^2 + b^2 = c^2\n"
            "For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.\n"
            "There exists exactly one Pythagorean triplet for which a + b + c = 1000.\n"
            "Find the product abc.\n\n";
    //1. setup variables
    int a, b, c;
    int sum = 1000;
    unsigned long long int product = 0;
    
    //2. setup for loop to test the combinations
    for (a = 1; a < sum; a++){
        for(b = 2; b < sum; b++){
            c = 1000 - a - b;
            if(a * a + b * b == c * c){
                product = a * b * c;
                break;
            }
        }
        if(product != 0){
            break;
        }
    }
    //3. print out answer
    //cout << a << " " << b << " " << c << endl;
    cout << "The product of a, b, and c is: " << product << endl;
    return;
}