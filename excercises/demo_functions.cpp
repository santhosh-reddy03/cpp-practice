#include <iostream>
// #include <string>

int sum_func(int num1, int num2){
    return num1 + num2;
}

void print(auto variable) {
    std::cout<<variable<<"\n";
}

int main() {
    int a = 10;
    int b = 20;
    print("enter first number");
    // std::cout<<"\n";
    std::cin>>a;
    // std::cout<<"enter second number\n";
    print("enter second number");
    std::cin>>b;
    int out = sum_func(a, b);
    std::cout<<"sum of two numbers = ";
    print(out);
}