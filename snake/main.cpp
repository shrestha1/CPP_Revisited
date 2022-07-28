#include <iostream>
#include <memory>

#include "board.h"

std::unique_ptr<Board> createBoard(std::pair<int, int> size){
    return std::make_unique<Board>(size);
}

int main(){
    std::pair <int, int> size(255, 255);
    std::unique_ptr<Board> board = createBoard(size);

    int x = board->getSize().first;
    int y = board->getSize().second;

    std::cout<<"X: "<<x<<", Y: "<<y<<std::endl;
    std::cout<<board.get()<<std::endl; //memory of board
    return 0;
}