/*
 * Solution: file streams were used to read in the 50 digit numbers
 * 
 */

#include "main.h"

void p13() {
    cout << "Work out the first ten digits of the sum of the following one-hundred 50-digit numbers.\n"
            "The 100 numbers should be saved in p013.txt in resources\n\n";

    //1. set up variables and streams
    ifstream load;
    load.open("p013.txt");
    if (load.fail()) {
        cout << "Cannot load 'p013.txt' : may not exist\n";
    }
    stringstream convert;
    vector<string> num;
    vector<int> sum;
    int temp = 0;
    int tempsum = 0;
    int carry = 0;
    bool end = true;
    string tempnum;

    //2. set up a for loop for reading in the 100 numbers
    for (int x = 0; x < 100; x++) {
        load >> tempnum;
        num.push_back(tempnum);
    }

    //3. start adding each digit to eachother and save it in a temporary number
    for (int y = 49; y >= 0; y--) {
        tempsum = 0;
        for (int x = 0; x < 100; x++) {
            //4. using a string stream, convert char to a int
            tempnum = num[x];
            convert << tempnum[y] << endl;
            convert >> temp;
            //5. take the sum of the digits in the yth position
            tempsum += temp;
            //cout << temp << " ";
        }
        //6. add the carry to the tempsum to and take the first digit of the tempsum
        tempsum += carry;
        sum.push_back((tempsum % 100) % 10);
        
        //7. divide the tempsum by 10 to get the carry number
        carry = tempsum / 10;
        //cout << "\nsum: " << tempsum << endl;
        //cout << "carry: " << carry << endl;
    }
    
    cout << "The Large Sum is: " << carry;
    for(int x = 49; x >= 0; x--){
        cout << sum[x];
    }
    cout << endl << endl;

    load.close();
    return;
}