#include<iostream>

using namespace std;

//using references
void increments(int& a){
    a++;
}


//using pointers
void increment(int* a){
    (*a)++;
}
int main(){
    int num = 0;
    for(int i =0; i<5; i++ ){
        increments(num);
        cout<<num<<endl;
    }
    
    return 0;
}