#include<iostream>

using namespace std;

int main() {
	int x,y,temp;
	cout << "Enter Value of X:";
	cin >> x;
	cout << "Enter Value of Y:";
	cin >> y;
	temp = x;
	x = y;
	y = temp;
	cout << "After swap,X ="<< x <<",Y ="<< y << endl;
	
	return 0; 
	}
