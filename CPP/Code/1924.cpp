#include <iostream>
using namespace std;

int JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC;
int MONTH, DATE,DAYS, Day_of_the_week;

int main()
{
	JAN = MAR = MAY = JUL = AUG = OCT = DEC = 31;
	APR = JUN = SEP = NOV = 30;
	FEB = 28;

	cin >> MONTH >> DATE;
	switch (MONTH)
	{
	case 1:
		DAYS = DATE;
		break;
	case 2 :
		DAYS = DATE + JAN;
		break;
	case 3:
		DAYS = DATE + JAN+FEB;
		break;
	case 4:
		DAYS = DATE + JAN + FEB + MAR;
		break;
	case 5:
		DAYS = DATE + JAN + FEB + MAR + APR;
		break;
	case 6:
		DAYS = DATE + JAN + FEB + MAR + APR + MAY;
		break;
	case 7:
		DAYS = DATE + JAN + FEB + MAR + APR + MAY+ JUN;
		break;
	case 8:
		DAYS = DATE + JAN + FEB + MAR + APR + MAY + JUN+ JUL;
		break;
	case 9 :
		DAYS = DATE + JAN + FEB + MAR + APR + MAY + JUN + JUL+ AUG;
		break;
	case 10:
		DAYS = DATE + JAN + FEB + MAR + APR + MAY + JUN + JUL + AUG + SEP;
		break;
	case 11:
		DAYS = DATE + JAN + FEB + MAR + APR + MAY + JUN +JUL+  AUG + SEP + OCT;
		break;
	case 12:
		DAYS = DATE + JAN + FEB + MAR + APR + MAY + JUN +JUL + AUG+SEP + OCT + NOV;
		break;
	}
	Day_of_the_week = DAYS % 7;
	if (Day_of_the_week == 0)
	{
		cout << "SUN";
	}

	switch (Day_of_the_week)
		{
		case 1:
			cout<< "MON";
			break;
		case 2:
			cout << "TUE";
			break;
		case 3: 
			cout << "WED";
			break;
		case 4 :
			cout << "THU";
			break;
		case 5 :
			cout << "FRI";
			break;
		case 6 :
			cout << "SAT";
			break;
		case 7 :
			cout << "SUN";
			break;
		}
}

/* 배열사용
#include <iostream>
#include <string>
using namespace std;
int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
string day[7] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };

int main()
{
	int x, y, sum, date;

	cin >> x >> y;
	
	sum = 0;

	for (int i = 0; i < x - 1; i++)
	{
		sum += month[i];
	}

	sum += y - 1;

	date = sum % 7;

	cout << day[date] << endl;

	return 0;
}
*/
