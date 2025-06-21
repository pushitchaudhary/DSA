

/*

=======   Patten 2 ========

 3   2   1
 3   2   1
 3   2   1

        OR 

 5   4   3   2   1
 5   4   3   2   1
 5   4   3   2   1
 5   4   3   2   1
 5   4   3   2   1


*/


#include <iostream>
using namespace std;

int main(){


    int value;
    
    cout << "Enter any number";
    cin >> value;
    cout << endl;

    int i = 1;

    while( i <= value){
        int j = value;

        while(j>=1){
            cout << j;
            j--;
        }
        cout << endl;
        i++;
    }


}