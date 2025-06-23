
/*


1

2   1

3   2   1

4   3   2   1


*/


#include <iostream>
using namespace std;

int main(){

    int num;
    cout << "enter any number";
    cin >> num;
    cout << endl;

    int row = 1;

    while(row <= num){
        // cout << row << endl;

        int col = 1;
        while(col <= row){
            cout << row - col +1 ;
            col++;
        }


        cout << endl;
        row++;
    }



}