#include <iostream>
#include <memory>

using namespace std;

class Entity{
    private:
        std::string m_name;

    public:
        Entity(){
            std::cout<<"Object has been created"<<endl;
        }

        ~Entity(){
            std::cout<<"Object has been deleted"<<endl;
        }

        Entity(const std::string& name):m_name(name){}

        void Print(){
            std::cout<<this->m_name<<endl;
        }
};

// bad practice of returning pointer 
// int* CreateArray(){
//     int array[50];
//     return array;
// }

int main(){
    {
        //heap based memory allocation 
        //doesnot deletes/ frees the memory location
        // Entity* a = new Entity();

        //heap based memory allocation
        //deletes the memory location dynamically
        //smart pointers
        // std::unique_ptr<Entity> entity(new Entity("Shrestha"));
        std::unique_ptr<Entity> entity = std::make_unique<Entity>("Shrestha"); //preferred way to make unique pointer
        entity->Print();


    }
    return 0;
}