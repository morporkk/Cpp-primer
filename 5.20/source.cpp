#include <iostream>
#include<string>
#include <vector>

// read sequence of strings until same word occurs twice using while loop and break statement

int main() {

	std::string word, tran;

	while (std::cin >> word) {
		if (word == tran) {		
			std::cout << "Found duplicate!" << std::endl;
			break;
		}
		else {
			tran = word;
			std::cout << "no duplicates!" << std::endl;
		}
	}
}
