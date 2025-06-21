
/*


1

2   3

4   5   6

7   8   9   10



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

    while (row <= num){

        int col = 1;
        while(col<=row){
            cout << count << " ";
            col++;
            count++;
        }
        cout << endl;
        row++;

    }
    


}