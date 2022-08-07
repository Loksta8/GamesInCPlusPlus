#ifndef ROCKPAPERSCISSORS_HPP
#define ROCKPAPERSCISSORS_HPP
#include <iostream>

//Create RockPaperScissors class
//
class RockPaperScissors {
        private:
                int mRock;
                int mPaper;
                int mScissors;
                int mRandRPS;
        public:
                RockPaperScissors(int);
                ~RockPaperScissors();
                int Play(int);
                void GetChoice();
                void Welcome();
};

#endif
