#include <iostream>
int main() {
	int user_number, number, good =1,x;
	char yes;
	number = time(0) % 101;
	x = time(0);
	for (int i = 1;good;++i) {
		std::cout << "Guess my number from 1 to 100.\n";
		std::cin >> user_number;
		if (user_number < number) { std::cout << "your number is less than guess number\n"; }
		else if (user_number > number) { std::cout << "your number is greater than guess number\n"; }
		else {
			std::cout << "your find my number - "<< number << "\n";
			std::cout << "number of attemps - " << i <<"\n";
			std::cout << "Do you want to continue the game? If so, enter 'y'; if not, enter 'x'.\n";
			std::cin >> yes;
			if (yes == 'x') { 
				good = 0; 
				std::cout << "thank for the game";
			}
			else if (yes == 'y') { i = 0; 
			if (number == x % 101) { number  = x / 235 % 100;}
			else  { 
				if (number == x / 235 % 100){number = x / 765 % 100;}
				else { std::cout << "you find 3 my numbers\n thank for the game";good = 0; }
			}
			}
		}
	}
	return 0;
}