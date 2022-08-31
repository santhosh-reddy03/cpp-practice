#include <string>
#include <iostream>

int main(){
    std::string name = "tony";
    std::cout<<name<<"\n";
    // string is a class template and has several memeber fucntions 
    char a = name[1];
    char b = name.at(0);
    // to take string input we need to get line fucntion of the std library which take std::cin and var as parameters
    
    // string class has a fuction called c_str() which return pointer to first and last empty charecter of string
    // which can be used to passed to fucntion that accepts char* as input
    
    // string class has substr to create substrings take two params index and length

    // to find substr we use find() function which return a obj of type std::string::size_type which is position of
    // char where the sub string starts , if not found return some thing of type std::string::npos

    std::string state = "what are learning in hello world";
    std::string temp = "hello";
    std::string::size_type num = state.find(temp);
    if (num != std::string::npos) {
        std::cout<<"this is the position "<<num<<"\n";
    }

    // auto key specifier helps in auto deduction of the type of the variable, it deduces based on initializer type
    auto ch = 'a';
}