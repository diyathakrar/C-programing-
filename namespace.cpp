#include <iostream>

namespace Math {
	int add(int a, int b){
		return a + b;
	}
}

int main () {
	std::cout <<"Sum:"<<Math::add(5,8)<<std::endl;
	
	using namespace Math;
	std::cout <<"Sum:"<<add(5,5)<< std::endl;
	
	return 0;
	
}
