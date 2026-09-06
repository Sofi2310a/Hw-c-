#include <iostream>
using namespace std;


int main()
{
	int mark;
	cout << "Write your mark: ";
	cin >> mark
		;
	if (mark < 0 || mark > 100) {
		cout << "Wrong mark!";
		return 1;
	}
	int range;
	if(mark >= 90) {
		range = 1;
	}
	else if(mark >= 82) 
	{
		range = 2;
	}
	else if(mark >= 75)
	{
		range = 3;
	}
	else if(mark >= 69) 
	{ 
		range = 4; 
	}
	else if (mark >= 60)
	{
		range = 5;
	}
	else if (mark >= 35)
	{
		range = 6;
	}
	else
	{
		range = 7;
	}

	switch (range) {
	case 1:
		cout << "ECTS Grade: A" << endl;
		cout << "Result: Excellent";
		break;
	case 2:
		cout << "ECTS Grade: B" << endl;
		cout << "Result: Very Good";
		break;
	case 3:
		cout << "ECTS Grade: C" << endl;
		cout << "Result: Good";
		break;
	case 4:
		cout << "ECTS Grade: D" << endl;
		cout << "Result: Satisfactory";
		break;
	case 5:
		cout << "ECTS Grade: E" << endl;
		cout << "Result: Sufficient";
		break;
	case 6:
		cout << "ECTS Grade: FX" << endl;
		cout << "Result: Unsatisfactory, but retake is possible";
		break;
	case 7:
		cout << "ECTS Grade: F" << endl;
		cout << "Result: Unsatisfactory";
		break;
	}
	return 0;
}