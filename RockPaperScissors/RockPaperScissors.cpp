#include <iostream>
#include "RockPaperScissors.hpp"
//Constructor
RockPaperScissors::RockPaperScissors(int aRandRPS) : mRock(0), mPaper(1), mScissors(2), mRandRPS(aRandRPS){
}
//Destructor
RockPaperScissors::~RockPaperScissors(){
}
//The Secret Random Number of the Computer Choice
int RockPaperScissors::Play(int aNew){
        mRandRPS = aNew;
        return mRandRPS;// Look there it goes
}
// a non used function to display the computers pick if one chooses for
// debugging purposes. Or you can just use the Play function and vs the
// computer to find out what it picked :)
void RockPaperScissors::GetChoice(){
        std:: cout << mRandRPS;
}
//The ASCII art in all its glory
void RockPaperScissors::Welcome(){
std::cout << R"(
 ____  ____  ____  _  _    ____  ____  ____  ____  ____    ____  ____  _  ____  ____  ____  ____  ____
/  __\/  _ \/   _\/ |/ /  /  __\/  _ \/  __\/  __//  __\  / ___\/   _\/ \/ ___\/ ___\/  _ \/  __\/ ___\
|  \/|| / \||  /  |   /   |  \/|| / \||  \/||  \  |  \/|  |    \|  /  | ||    \|    \| / \||  \/||    \
|    /| \_/||  \_ |   \   |  __/| |-|||  __/|  /_ |    /  \___ ||  \_ | |\___ |\___ || \_/||    /\___ |
\_/\_\\____/\____/\_|\_\  \_/   \_/ \|\_/   \____\\_/\_\  \____/\____/\_/\____/\____/\____/\_/\_\\____/
)" << '\n';

}
