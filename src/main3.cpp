#include <iostream>
#define SIZE 3
using namespace std;



int main(){

    const string play_[]={"__Play__", "Setting", "Exit"};
    const string settings[]={"Play", "__Setting__", "Exit"};
    const string exit[]={"Play", "Setting", "__Exit__"};

 int current== 0;//карент переменная от 0 до 2ух, индексация , если карент 0, то плай, первый массив {"__Play__", "Setting", "Exit"};

   while (true) {/// цикл чтобы бесконечно печатлся массив
    if(current==0){
        
        for(int i=0; i<SIZE; i++)
       cout<<play_[i]<<endl;
   }
}else if(current==1){
    for(int i=0; i<SIZE; i++);
    {}
}
       