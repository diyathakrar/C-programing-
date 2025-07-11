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
	Person diya("Diya thakrar",5,5.5f);
	diya.introduce();
	
return 0;

}
