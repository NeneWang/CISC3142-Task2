#include <iostream>

int main(){
    int total = 0, value = 0;
    std::cout<<"Please enter different numbers separated by spaces.";

    while(std::cin >> value){
        
        total += value;
        std::cout<<"Current Total:"<<total<<std::endl;
    }
    
}