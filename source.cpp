#include <iostream>

int main(){
    // this is a comment
    /* more comment
     more comments multiline comment */
    std::cout<<"hello world\n"<<"second line \n";
    bool b = true;
    // we can also assign the below way
    bool c {true};
    std::cout<<c<<"\n";
    //char literals should be enclosed in single quotes
    char thischar = 'a';
    std::cout<<"this is char :"<<thischar<<"\n";
    //sizeof operator gives the bytes of an object
    std::cout<<"enter a char , num and double value";
    int num;
    double d;
    std::cin>>thischar>>num>>d;
    std::cout<<"you entered: \n"<<thischar<<"\n"<<num<<"\n"<<d<<"\n";
}