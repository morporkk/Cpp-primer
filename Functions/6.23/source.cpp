#include <iostream>
#include <string>
#include <vector>

// different ways to pass arrays as arguments to functions
// also remebmer that compiler read (const int*),(const int[]),(const int[10]) all as const int*

void print (const int *bg,const int *ed)
{
	while (bg != ed)
		std::cout << *bg++ << std::endl;
}

void print(const char *p)
{
	if (p)
		while (*p) std::cout << *p++;
	std::cout << std::endl;
}

void print(const int arr[], size_t size)
{
	for (size_t i = 0; i != size; ++i) {
		std::cout << arr[i] << std::endl;
	}
}

void print(int(&ar)[2])   // must have size []
{
	for (auto i : ar)
		std::cout << i << std::endl;
}

int main() {

	int i = 0, j[2] = { 0, 1 };
	char ch[5] = "OJHA";

	print(ch);
	print(std::begin(j), std::end(j));
	print(j, std::end(j) - std::begin(j));
	print(j);



}
