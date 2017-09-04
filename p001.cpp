/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "main.h"

void p1() {
    cout << "\nQuestion: If we list all the natural numbers below 10 that are multiples\n"
            "of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23\n"
            "Find the sum of all the multiples of 3 or 5 below 1000.\n\n";
    
    //1. set up variables
    int total = 0;
    

    //2. find multiples of 3, 5 or both and add them to the total
    for(int x = 0; x < 1000; x++){
        if(x % 3 == 0 || x % 5 == 0){
            total = total + x;
            
        }        
    }
    
    //3. print out answer
    cout << "The sum is " << total << endl;
}