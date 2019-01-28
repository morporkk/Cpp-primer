// using ref. to return additional info from function, we will find first occurnce of wanted char in string, and return it, but also using
// reference we will change argument from calling funcion to indicate how many occurnces of that char happened

#include <iostream>

// c is not ref type, cos it can by temp variable in main)
std::string::size_type find_char(const std::string &s, char c, std::string::size_type &occurs)
{
	auto ret = s.size();
	occurs = 0;
	for (decltype(ret) i = 0; i != s.size(); ++i)
	{
		if (s[i] == c) {
			if (ret == s.size())
				ret = i;
			++occurs;
		}
	}
	return ret;
}


int main() {
   /* 
   
   *\
	

}
