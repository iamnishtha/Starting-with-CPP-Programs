#include <iostream>
#include <string>

int main(){
    std::string s="Hello";
    bool a=true;
    int x,y,z;
    std::cin>>x>>y>>z; //using commas doesn't generate an error but it only inputs the first one
    std::cout<<x<<y<<z<<std::endl; //using commas dosen't generate error but it only prints the first variable
    std::cout<<a << std::endl;
    std::cout<<(10>5)<< std::endl;
    std::cout<<"The size of the string is "<< s.length()<<std::endl;
    std::cout<<(25>65)?"true":"false";
}
