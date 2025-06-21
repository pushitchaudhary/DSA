


/*

1   

1   2

1   2   3

*/


#include <iostream>
using namespace std;

int main(){
  
  int num = 4;
  int i = 1;

  while(i <= num){

    int j = num;

    while (j>=i){
      cout << j;
      j--;
    }
    
  cout << endl;

    i++;
  }


}