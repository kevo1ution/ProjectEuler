/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "main.h"

void p10() {
    cout << "The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.\n"
            "Find the sum of all the primes below two million.\n\n";

    //1. setup variables
    vector<unsigned long int> prime;
    prime.push_back(2);
    int cap = 2000000;
    unsigned long long int sum = 2;
    
    //2. start creating an arsenal of prime numbers!
    for (int x = 2; x < cap; x++) {
        //cout << x << endl;
        for (int y = 0; y < prime.size(); y++) {
            //cout << prime[y] << endl;
            //3. check if x is divisible by previous prime numbers
            if (x % prime[y] == 0) {
                //cout << x % prime[y] << endl;
                y = prime.size();
            } else if (y == prime.size() - 1) {
                prime.push_back(x);
                sum += x;
            }

        }
    }
    //4. print out answer
    cout << "The sum is: " << sum << endl;
    return;
}