
/* 

 ========   Patten 1    =========
1   2   3   4
1   2   3   4
1   2   3   4
1   2   3   4

*/


#include <iostream>
using namespace std;


int main(){


    int num;
    cout << "enter any number: ";
    cin >> num;

    cout << endl;

    int i = 1;

    while(i <= num){
        int j = 1;
        while(j <= num ){
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }




}