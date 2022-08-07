/*
 @Author: Logan
 @Date: 8/6/2022
 @Purpose: To code a quick game of Rock, Paper Scissors for fun. Doesn't have all the necessary checks if the user enters something other than what is stated.
 0 is Rock, 1 is Paper, and 2 is Scissors. Made this quick a few years back during some downtime at work just for fun lol.
 @C++11 Language  compiled on Raspberry Pi.
 @ Command to compile: g++ -std=c++11 main.cpp RockPaperScissors.hpp RockPaperScissors.cpp -o RockPaperScissors
 */

#include <random>
#include <iostream>
#include <algorithm>
#include "RockPaperScissors.hpp"

int main() {
  /* initialize random seed: */
  std::random_device dev;
  std::mt19937 rng(dev());
  std::uniform_int_distribution<std::mt19937::result_type> dist(0,2);
  unsigned int iSecret = dist(rng);

  int computerPick, humanPick, hScore, cScore;
  hScore = 0;
  cScore = 0;
  bool win, secondStart = false;
  iSecret = dist(rng);//Creating Secret Computers Choice, is it Rock? Maybe Paper? It has to be Scissors Right?
  RockPaperScissors Game(iSecret);
  Game.Welcome(); //ASCII Art Welcome Screen For Rock Paper Scissors
  do{
      iSecret = dist(rng);// Computer Picked a new Choice from Earlier! NO FAIR!
      RockPaperScissors Game(iSecret); //Instantiating the class and if you look close enough you can see the secret
      computerPick = Game.Play(iSecret);// Look there it is again! The computer knows what it's doing!
      std::cout << std::endl;
      std::cout << "Please choose Rock(0), Paper(1), Scissors(2)" << std::endl;
      std::cout << "If you enter anything else unexpected program behavior may occur. " << std::endl;
      std::cin >> humanPick; // Store users choice

        switch(computerPick){//Go through the cases of the game logic, hopefully I didn't miss anything.
          case 0 : //Rock
            if(humanPick == computerPick){
                    std::cout << "DRAW" << std::endl;
            }
            if(humanPick == 1){
                win = 1;
                std::cout << "YOU WIN" << std::endl;
                std::cout << "PAPER BEATS ROCK" << std::endl;
                hScore+=1;
                if(cScore == 0){
                }
                else{
                        cScore-=1;
                }
            }
            if (humanPick == 2){
                win = 0;
                std::cout << "YOU LOSE" << std::endl;
                std::cout << "ROCK BEATS SCISSORS" << std::endl;
                cScore+=1;
                if(hScore == 0){                }
                else{
                    hScore-=1;
                }
            }
            std::cout << "Computer Picked ROCK" << std::endl;
            break;
          case 1 : //Paper
            if(humanPick == computerPick){
                    std::cout << "DRAW" << std::endl;
            }
            if(humanPick == 0){
                win = 0;
                std::cout << "YOU LOSE" << std::endl;
                std::cout << "PAPER BEATS ROCK" << std::endl;
                cScore+=1;
                if(hScore == 0){                }
                else{
                    hScore-=1;
                }
            }
            if (humanPick == 2){
                win = 1;
                std::cout << "YOU WIN" << std::endl;
                std::cout << "SCISSORS BEATS PAPER" << std::endl;
                hScore+=1;
                if(cScore == 0){
                }
                else{
                        cScore-=1;
                }
            }
            std::cout << "Computer Picked PAPER" << std::endl;
            break;
          case 2: //Scissors
            if(humanPick == computerPick){
                    std::cout << "DRAW" << std::endl;
            }
            if(humanPick == 0){
                win = 1;
                std::cout << "YOU WIN!" << std::endl;
                std::cout << "ROCK BEATS SCISSORS!" << std::endl;
                hScore+=1;
                if(cScore == 0){                }
                else{
                        cScore-=1;
                }
            }
            if (humanPick == 1){
                win = 0;
                std::cout << "YOU LOSE" << std::endl;
                std::cout << "SCISSORS BEATS PAPER" << std::endl;
                cScore+=1;
                if(hScore == 0){                }
                else{
                    hScore-=1;
                }
            }
            std::cout << "Computer Picked SCISSORS" << std::endl;
            break;
          default :
            std::cout << "Computer INVALID PICK" << std::endl;// In case the computer goes off the deep end
        }
        //Keep score of how many wins happen. Score will be subtracted from the
        //player that looses. Can you beat the computer? I bet you can!
      std::cout << "The Score is: Human = " << hScore << "    Computer = " << cScore << std::endl;
      std::cout << std::endl;
      std::cout << "Play Again? Enter 3." << std::endl;
      std::cout << "To exit, Enter anything else and hit Enter. Thank you for Playing! " << std::endl;
      std::cin >> humanPick;
  }
  while(humanPick == 3);//Allow the player to keep playing non stop or exit game
        std:: cout << "Game Over" << std::endl;
        return 0;
}
