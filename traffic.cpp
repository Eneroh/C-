#include <iostream>

int main() {
	int speed = 30;
	char trafficLight;
	std::string question = "What's the traffic light color? (g, y, r) \n";
	std::string howFast = "How fast are you going? (0-30) \n";

	std::cout << question;
	std::cin >> trafficLight;
	std::cout << howFast;
	std::cin >> speed;

	if (trafficLight == 'g' && speed <= 30) {
		std::cout << "Go!\n";
	}
	if (speed > 30) {
		std::cout << "DRIVE RESPONSIBLY!\n";
	}
	else if (trafficLight == 'y' && speed <= 30) {
		std::cout << "Slow down!\n";
	}
  //if (trafficLight == 'y' && speed > 30) {
  //	std::cout << "MIGHT BE ABLE TO MAKEEEEEEEEEEEEE ITTTTTTTTTTTTTTTTTTTTTTTT?!\n";
	//}
	else if (trafficLight == 'r' && speed <= 30) {
		std::cout << "Stop your vehicle!\n";
	}
	//if (trafficLight == 'r' && speed > 30) {
	//	std::cout << "Safely come to a stop!\n";
	//}
	else {
		std::cout << "Invalid, please try again!\n";
	}
}

//Having srs issues trying to set up particular speed entries without dedicating a particular if value for speeding, meh
