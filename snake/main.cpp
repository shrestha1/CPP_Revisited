#include <iostream>
#include <memory>

#include "board.h"

int main(){
    std::pair <int, int> size(255, 255);
    std::unique_ptr<Board> board = std::make_unique<Board> (size);

    int x = board->getSize().first;
    int y = board->getSize().second;

    std::cout<<"X: "<<x<<", Y: "<<y<<std::endl;
    return 0;
}