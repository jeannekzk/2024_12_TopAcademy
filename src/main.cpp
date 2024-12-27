#include <iostream>
#define SIZE 3
int printMenu (const std::string arr[SIZE]);
using namespace std;



int main(){

    const string play_[]={"__Play__", "Setting", "Exit"};
    const string settings_[]={"Play", "__Setting__", "Exit"};
    const string exit_[]={"Play", "Setting", "__Exit__"};

 int current= 0;//карент переменная от 0 до 2ух, индексация , если карент 0, то плай, первый массив {"__Play__", "Setting", "Exit"};
 int cur=2;
 while (true){
    if(current==0){
        printMenu(play_);
    }else if(current==1){
        printMenu(settings_);
    }else{
        printMenu(exit_);
    }
 }

 return 0;
}
    return 0;
    }
 int printMenum(constt string arr[SIZE]){
    for(int i=0; i<SIZE; i++){
        cout<<arr[i]<<endl;
void printMenum(constt string arr[SIZE]){
    for(int i=0; i<SIZE; i++){
        cout<<arr[i]<<endl;
        
    }
 }


}