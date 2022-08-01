#pragma once
#include <iostream>

class Snake
{
    private:
        std::pair<int, int> location;
        unsigned int size = 2;
        const int units = 5;
        void setCoord(std::pair<int, int> coord);

    public:
        Snake();
        
        std::pair<int, int> getCoord();
        unsigned int getSize();
        
        
        void setSize(unsigned int size);
        
        void moveRight();
        void moveUp();
        void moveLeft();
        void moveDown();
        

};