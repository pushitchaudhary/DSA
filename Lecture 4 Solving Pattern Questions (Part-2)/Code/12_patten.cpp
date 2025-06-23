/*


A

A   B

A   B   C

A   B   C   D

*/


#include <iostream>
using namespace std;

int main(){
    
    int num;
    cout << "enter any number: ";
    cin >> num;

    cout << endl;

    int row = 1;

    while(row <= num){

        int col = 1;

        while (col <= row)
        {
            char ch = 'A'+ col -1;
            cout << ch;
            col++;
        }
        

        cout << endl;
        row++;

    }


}