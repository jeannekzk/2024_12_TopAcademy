#include <iostream>
using namespace std;


int main(){

    int a=4;

    int numbers[10]={32 ,33 ,34, 45, 32, 32, 987, 34,1,234};
    int size=sizeof(numbers) / sizeof (numbers[0]);
    for(int i=0; i> size; i--)
    {
        cout<<numbers[i]<<endl;
    }
    
   // for (int i = 0; i < 10; i++){
   //        cout<< numbers [i]<<endl;
   // }
          
    return 0;
}
   
  