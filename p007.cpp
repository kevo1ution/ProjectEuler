/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "main.h"

void p7() {
    cout << "By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.\n"
            "What is the 10001st prime number ? \n\n";

    //1. create a vector of prime numbers
    vector<unsigned long int> prime;
    prime.push_back(2);

    //2. start creating an arsenal of prime numbers!
    for (unsigned long int x = 2; x != 0; x++) {
        //cout << x << endl;
        for (int y = 0; y < prime.size(); y++) {
            //cout << prime[y] << endl;
            //3. check if x is divisible by previous prime numbers
            if (x % prime[y] == 0) {
                //cout << x % prime[y] << endl;
                y = prime.size();
            } else if (y == prime.size() - 1) {
                prime.push_back(x);
            }

        }

        if (prime.size() == 10001) {
            x = 0;
            break;
        }
    }

    //4. print out answer
    cout << "The 10001 prime is: " << prime[10000] << endl;
    return;
}