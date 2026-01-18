#include <iostream>
#include <vector>
#include <cmath>


int main(){
    int board_squares;
    int starting_square;
    int magic_number;

    std::cin >> board_squares >> starting_square >> magic_number; 
    std::vector<int> numbers_insquare(board_squares);
    for(int i = 0; i < board_squares; i++){
        std::cin >> numbers_insquare[i];
    }

    int indx = starting_square - 1;
    int cycle = indx;
    int amount_of_moves = 0;

    while(1){
        if(numbers_insquare[indx] == magic_number){
            std::cout << "magic" << "\n" << amount_of_moves;
            break;
        }
        else if(indx < 0){
            std::cout << "left" << "\n" << amount_of_moves;
            break;
        }
        else if(indx > board_squares - 1){
            std::cout << "right" << "\n" << amount_of_moves;
            break;
        }
        else if((numbers_insquare[indx] != magic_number) && (numbers_insquare[indx] < 0)){
            indx = indx - std::abs(numbers_insquare[indx]);
            amount_of_moves++;
        }
        else if(numbers_insquare[indx] != magic_number){
            indx = indx + std::abs(numbers_insquare[indx]);
            amount_of_moves++;
        }
        
    }        
return 0;
}