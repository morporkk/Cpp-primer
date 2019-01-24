#include <iostream>
#include<string>
#include <vector>

// example of do while, request 2 strings and compare 

int main() {


	std::string rsp;
	do {	
		std::cout<<"Input strings: "<<std::endl;
		std::string s1, s2;
		std::cin >> s1 >> s2;
		std::cout << ((s1 == s2) ? "eual" : (s1 < s2) ? "s1<s2" : "s1>s2");
		std::cout << std::endl;

		std::cout << "Again? (y/n)" << std::endl;
		std::cin >> rsp;
	} while (!rsp.empty() && tolower(rsp[0]) == 'y');
}
