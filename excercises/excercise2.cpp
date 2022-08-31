#include <iostream>
#include <string>

int main(){
    double arr[5] = {10.04, 12.3, 12.34, 10.32, 20.5};
    arr[0] = 9.0;
    arr[4] = 10.1;
    for(int i=0; i<5; i++){
        std::cout<<arr[i]<<"\n";
    }

    double val = 10.2;
    double* point = &val;
    std::cout<<"this is prinitng from deref of double pointer: "<<*point<<"\n";

    double mydouble = 23.2321;
    double& myref = mydouble;
    myref = 1000.2123;
    std::cout<<myref<<" my ref value \n"<<mydouble<<" my double \n";

    std::string s1 = "hello";
    std::string s2 = " dummy";
    std::string s3 = s1+s2;
    std::cout<<"s3 "<<s3<<"\n";

    std::string firstname;
    std::string lastname;
    std::string fullname;
    std::getline(std::cin, firstname);
    std::getline(std::cin, lastname);
    fullname = firstname + lastname;
    std::cout<<"full nmae is "<<fullname<<"\n";

    std::string name = "John Doe";
    std::string fname = name.substr(0, 4);
    std::string lname = name.substr(5, 3);
    std::cout<<"fname : "<<fname<<"lname:  "<<lname<<"\n";


    std::string check = "hello C++ world";
    char c = 'C';
    auto num = check.find(c);
    if (num != std::string::npos){
        std::cout<<"C found at: "<<num<<"\n";
    }

}