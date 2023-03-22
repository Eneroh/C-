#include <iostream>

int main() {
// ! && ||
  bool isGameOVer = false;
  bool isNotGameOver = !isGameOver;
  
  std::cout << isGameOver << std::endl;
  std::cout << isNotGameOver << std::endl;
  
  int health = 0;
  int lives = 0;
  isGameOver = health <=0 && lives <=0;
  
  std::cout << isGameOver << std::endl;
}
