#include <iostream>

int main() {
 bool hasKey = true;
 bool isDoorLocked = true;
 int movementPoints = 1;
 int result = (hasKey || isDoorLocked) && movementPoints > 0;
  
 std::cout << result << std::endl;
}
