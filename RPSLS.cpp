//Rock Paper Scissors, Lizard, Spock
/*This program will implement a slightly more complex version of the Rock Paper Scissors
game in C++ code */

#include <iostream>
#include <stdlib.h> //required for srand and rand
#include <ctime> //required for time

int main () {

  //declare & initialize variables for player score
  // Seed the random number generator
  srand(time(0));

  int computer = rand() % 5 + 1;
  int user = 0; //variable for user's input

  //Prompt the user to select either Rock, Paper, or Scissors
  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";

  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";
  std::cout << "4) 🦎\n";
  std::cout << "5) 🖖\n";

  std::cout << "shoot! ";

  //Grab user's input using std::cin and store it in user
  std::cin >> user;

  //conditional logic
  /* 
  rock > scissors
  scissors > paper
  paper > rock
  lizard > spock
  spock > scissors
  scissors > lizard
  lizard > paper
  paper > spock
  spock > rock
  rock > lizard
  */
  
  //tie game condition
  if (user == computer) {
    std::cout << "Tie!\n";
    //all conditions where user wins
    } else if ((user == 1 && (computer == 3 || computer == 4)) || 
           (user == 2 && (computer == 1 || computer == 5)) || 
           (user == 3 && (computer == 2 || computer == 4)) ||
           (user == 4 && (computer == 2 || computer == 5)) || 
           (user == 5 && (computer == 1 || computer == 3))) {
      std::cout << "User wins!";
      //if it's not a tie and user didn't win then computer wins
    } else {
      std::cout << "Computer wins!";
    }
}
