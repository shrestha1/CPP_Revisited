#include <iostream>
using namespace std;

class Entity{
    private:
        std::string m_name;
        int m_age;
    
    public:
        Entity(const std::string& name)
            :m_name(name), m_age(-1){}

        explicit Entity(int age)
            :m_name("UnKnown"), m_age(age){}
};


int main(){
    Entity a = std::string("Ram");
    Entity b = Entity(8);
    return 0;
}