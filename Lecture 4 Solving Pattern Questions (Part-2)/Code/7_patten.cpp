
/*


1

2   2

3   3   3

4   4   4   4



*/

#include <iostream>

using namespace std;

int main(){


    int num;
    cout << "enter any number: ";
    cin >> num;
    cout << endl;

    int row = 1;

    while(row <=num){
        int col = 1;
        while(col <= row){
            cout << row << " ";
            col++;
        }
        cout << endl;
        row++;
    }


}