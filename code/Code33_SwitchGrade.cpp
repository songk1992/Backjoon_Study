#include <iostream>

using namespace std;

void main(void)
{
	int score;
	char grade;
	
	cin >> score;

	switch (score / 10)
	{
	case 10:
	case 9: grade = 'A'; break;
	case 8: grade = 'B'; break;
	case 7: grade = 'C'; break;
	case 6: grade = 'D'; break;
	default : grade = 'F'; break;
	}
	cout << grade;
}
