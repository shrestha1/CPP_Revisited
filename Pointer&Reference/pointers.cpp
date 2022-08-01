#include <iostream>
using namespace std;

int main(){
    char* buffer = new char[8];
    memset(buffer, 0 ,8);
    char** pbf = &buffer;
    return 0;
}