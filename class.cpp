#include<iostream>
#include<string>

class Person {
	public:
	std::string name;
	int age;
	float height;
	
Person(std::string n, int a, float h) : name(n), age(a),height(h) {}

	void introduce() {
		std::cout <<"Hello, my name is "<< name <<","<< std::endl;
	}

};

int main() {
	Person Diya("Diya Thakrar",25,5.5f);
	Diya.introduce();
	
return 0;

}
