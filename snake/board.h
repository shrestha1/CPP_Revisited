#pragma once

#include<utility>

class Board
{
private:
    /* data */
    std::pair<int,int> Size;
    
public:
    Board(std::pair<int, int> size):Size(size){};
    
    std::pair<int,int> getSize();
    void setSize(std::pair<int,int> size);
    void generate();
};
