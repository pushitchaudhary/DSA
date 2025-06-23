
/*

A   A   A   A

B   B   B   B

C   C   C   C

D   D   D   D

*/


#include <iostream>
using namespace std;

int main(){

    int num;
    cout << "Enter any number";
    cin >> num;

    cout << endl;

    int row = 1;

    while( row <= num ){

        int col = 1;
        while(col <= num){
            char ch = ('A'+ col - 1);
            cout << ch;
            col++;
        }
        cout << endl;
        row++;

    }


}