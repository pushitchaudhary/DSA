

/*

A

B   C

D   E   F

G   H   I   J


*/

#include <iostream>
using namespace std;

int main(){

    int num;
    cout << "enter any number: ";
    cin >> num;
    cout << endl;

    int row = 1;
    int count = 1;

    while(row <= num){

        int col = 1;
        while(col<=row){
            char ch = 'A'+count-1;
            cout << ch;
            count++;
            col++;
        }
        cout << endl;
        row++;
    }



}