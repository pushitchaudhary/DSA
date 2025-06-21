
/*

3   2   1

3   2

3 

*/


#include <iostream>
using namespace std;


int main(){

    int num = 3;
    int i = 1;

    while(i <= num){

        // cout << i << endl;

        int j = num;

        while (j>=i){
            cout << j;
            j--;
        }
        
        cout << endl;

        i++;
    }



}