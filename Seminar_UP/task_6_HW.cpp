#include <iostream>
using namespace std;

int main()
{
  	//task 6 - HW from Week04
	cout << "Insert an 8-digit number: ";
	unsigned int date;
	cin >> date;
	int year, month, day;
	if (date >9999999 && date <= 99999999)
	{
		year = date % 10000;
		date /= 10000;
		month = date % 100;
		date /= 100;
		day = date;

		if ((year >= 1000 && year <= 9999) && day>0)
		{
		      if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day <= 31)
		      {
			cout << day << "/" << month << "/" << year << " is valid date.";
		      }
		      else if ((month == 4 || month == 6 || month == 9 || month == 11) && day <= 30)
		      {
			cout << day << "/" << month << "/" << year << " is valid date.";
		      }
		      else if (month == 2)
		      {
				if ((year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)) && day <= 29)
				{
				  cout << day << "/" << month << "/" << year << " is valid date.";
				}
				else if (day <= 28)
				{
				  cout << day << "/" << month << "/" << year << " is valid date.";
				}
				else cout << day << "/" << month << "/" << year << " is invalid date.";
		      }
		      else cout << day << "/" << month << "/" << year << " is invalid date.";
		}
		else cout << day << "/" << month << "/" << year << " is invalid date.";
	}else cout << " The number has more or less than 8-digits. Invalid number :(";
	
	return 0;
}
