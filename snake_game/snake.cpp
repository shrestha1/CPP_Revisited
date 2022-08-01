#include "snake.hpp"


Snake::Snake(){
    std::pair <int, int> Coord(0,0);
    setCoord(Coord);
    Coord = getCoord();
    std::cout << Coord.first <<" "<< Coord.second<<std::endl; 
}
std::pair<int, int> Snake::getCoord(){
    return location;
}

unsigned int Snake::getSize(){
    return size;
}

void Snake::setCoord(std::pair<int, int> coord){
    this->location = coord;
}

void Snake::setSize(unsigned int size){
    this->size = size;
}

void Snake::moveRight(){
    
}

void Snake::moveUp(){
    
}

void Snake::moveLeft(){
    std::pair<int, int> temp = getCoord();
    //move in one dimension x
    temp.first -= units;
    temp.second -= units;
    setCoord(temp);

}

void Snake::moveDown(){
    
}

int main(){
    Snake snake;
    return 0;
}