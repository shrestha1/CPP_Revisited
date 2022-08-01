# include <iostream>

int main(){
    int a = 5;
    std::cout<< "Before value of a was "<< a <<std::endl;
    int& ref = a;
    std::cout<<"Reference of was assigned to some int& ref.\nAnd the value of ref was changed."<<std::endl;
    ref = 2;
    std::cout<< "The value of ref was assigned as "<<ref <<std::endl;
    
    std::cout<< "This changed the value of a as "<<a <<std::endl;
    return 0;
}