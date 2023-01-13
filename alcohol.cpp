#include <iostream>

int main() {
	int age; int minAge = 18;
	std::string question = "What is your age?";
	std::string isAdult = "Here ya go champ, drink responsibly";
	std::string isNotAdult = "Listen here bucko, you're not pulling a fast one on me";
	std::string potato = "WHAT ARE YOU? o.o"; // potato for president!

	std::cout << question << std::endl;
	std::cin >> age;

	if (minAge > age) {
		std::cout << isNotAdult << std::endl;
	}
	else if (minAge <= age) {
		std::cout << isAdult << std::endl;
	}
	else {
		std::cout << potato << std::endl;
	}
}
