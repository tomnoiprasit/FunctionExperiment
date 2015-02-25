#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::getline;

string gradeResult(int gradeValue) {
	string sReturnValue{ "" };

	if (gradeValue > 90)
		sReturnValue = "A";
	else if (gradeValue > 80)
		sReturnValue = "B";
	else if (gradeValue > 70)
		sReturnValue = "C";
	else if (gradeValue > 60)
		sReturnValue = "D";
	else
		sReturnValue = "F";

	return sReturnValue;
}

int swap(int &a, int &b) {
	int retVal{ 0 };

	int temp;
	temp = a;
	a = b;
	b = temp;

	cout << "Inside " << std::endl;
	cout << "A: " << a 
		<< "B: " << b << std::endl;

	return retVal;
}

int main() {

	string sInput;
	
	cout << "Enter the mark: ";
	getline(std::cin, sInput);
	
	int anIntValue{ 0 };
	
	cout << "Your grade: ";
	cout << gradeResult(stoi(sInput)) << std::endl;

	int a{ 10 };
	int b{ 20 };
	cout << "Before" << std::endl;
	cout << "A: " << a
		<< "B: " << b << std::endl;
	swap(a, b);
	cout << "After" << std::endl;
	cout << "A: " << a
		<< "B: " << b << std::endl;

	system("pause");
	return 0;
}