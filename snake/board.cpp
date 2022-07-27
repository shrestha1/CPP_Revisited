#include "board.h"

std::pair<int, int> Board::getSize(){
    return this->Size;
}

void Board::setSize(std::pair<int, int> size){
    this->Size = size;
}

void Board::generate(){
    int x = this->Size.first; 
    int y = this->Size.second;

}