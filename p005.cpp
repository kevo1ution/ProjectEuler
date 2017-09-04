/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "main.h"

void p5() {
    cout << "2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.\n"
            "What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?\n\n";

    //1. set up variables
    int counter = 0;
    long long int num = 1;
    vector<int> cfac; //vector of common factors among the set factors
    vector<int> sfac; //vector of set factors
    for (int x = 2; x <= 20; x++) {
        sfac.push_back(x);
    }

    //2. find common factors among the factors 20 and under
    for (int x = 2; x <= 20; x++) {

        for (int y = 0; y < sfac.size(); y++) {

            //3. check if the set factor is divisible by x and add to the counter
            if (sfac[y] % x == 0) {
                sfac[y] /= x;
                counter++;
                //4. check if the set factor is equal to 1 to erase it
                if (sfac[y] == 1) {
                    sfac.erase(sfac.begin() + y);
                    y--;
                }
            }
            //5. check if counter is greater than 1
            if (counter > 0 && y == sfac.size() - 1) {
                cfac.push_back(x);
                counter = 0;
                x--;
            }

        }
        counter = 0;
    }

    //7. print solution
    for (int x = 0; x < cfac.size(); x++) {
        num *= cfac[x];
    }
    cout << "The LCM of factors 1-20 is: " << num << endl;
    return;
}