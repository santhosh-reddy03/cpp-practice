#include <iostream>

int main(){
    char ar[5];
    int arr[5]={1, 2,4, 5, 2};
    int* p = nullptr;
    char* c;
    int x = 6;
    char m = 'a';
    c = &m;
    *c = 'b';
    p = &x;
    char d = *c;
    int& another = x;
    std::cout<<d<<"\n";
    //pointer points to memory of object 
    // where as reference operator point to same object with another name
    // another now represnting the same thing that x represents
    // & when used before vars gives the address of the variable
        
}