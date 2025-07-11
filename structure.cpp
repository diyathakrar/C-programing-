#include <iostream>
#include <string>

struct Person {
	std::string name;
	int age;
	float height;
};

int main(){
	Person diya = {"Diya Thakrar",20,5.5f};
	std::cout <<"Name:"<<diya.name <<"\nAge:"<< diya.age<<"\nHeight:"<<diya.height<< std::endl;
	
	return 0;
}
