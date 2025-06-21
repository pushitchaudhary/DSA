


/*

1   

1   2

1   2   3

*/


#include <iostream>
using namespace std;

int main(){

    int num = 3;
    int i = 1;

    while(i<=num){
        int j = 1;
        while(j <=i){
          cout << j ;
          j++;  
        }
        cout << endl;
        i++;
    }
   

}