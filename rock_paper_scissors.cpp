/* This program will execute rock, paper, scissors randomly. */

#include <iostream>
#include <stdlib.h>

int main() {

  // Live long and prosper

  srand (time(NULL));

  int computer = rand() % 3 + 1;

  int user = 0;

  std::cout << "=================================\n\n";
  std::cout << "Rock! Paper! Scissors! Shoot!\n\n";
  std::cout << "=================================\n";

  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";

  std::cout << "Enter number (1-3) to shoot 🔥 : ";  
  std::cin >> user;

  // Build logic rock, paper, scissors! 

  if (computer == 3 && user == 3) {
    std::cout << "\nUser: ✌️\n";
    std::cout << "Computer: ✌️\n\n";
    std::cout << ">>> Draw!\n";
  } else if (computer == 2 && user == 2) {
    std::cout << "\nUser: ✋\n";
    std::cout << "Computer: ✋\n\n";
    std::cout << ">>> Draw!\n";
  } else if (computer == 1 && user == 1) {
    std::cout << "\nUser: ✊\n";
    std::cout << "Computer: ✊\n\n";
    std::cout << ">>> Draw!\n";
  } else if (computer == 3 && user == 2) {
    std::cout << "\nUser: ✋\n";
    std::cout << "Computer: ✌️\n\n";
    std::cout << ">>> Computer is winner!\n";
  } else if (computer == 3 && user == 1) {
    std::cout << "\nUser: ✊\n";
    std::cout << "Computer: ✌️\n\n";
    std::cout << ">>> User is winner!\n";
  } else if (computer == 2 && user == 3) {
    std::cout << "\nUser: ✌️\n";
    std::cout << "Computer: ✋\n\n";
    std::cout << ">>> User is winner!\n";
  } else if (computer == 1 && user == 3) {
    std::cout << "\nUser: ✌️\n";
    std::cout << "Computer: ✊\n\n";
    std::cout << ">>> Computer is winner!\n";
  } else if (computer == 1 && user == 2) {
    std::cout << "\nUser: ✋\n";
    std::cout << "Computer: ✊\n\n";
    std::cout << ">>> User is winner!\n";
  } else if (computer == 2 && user == 1) {
    std::cout << "\nUser: ✊\n";
    std::cout << "Computer: ✋\n\n";
    std::cout << ">>> Computer is winner!\n";
  }

return 0;

}