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
    
}