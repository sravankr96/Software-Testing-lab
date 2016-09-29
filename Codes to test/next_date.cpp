#include<bits/stdc++.h>
#include<cassert>

using namespace std;

bool leapYear = false;
int thirtyDayMonths[] = {4,6,9,11};
int thirtyOneDayMonths[] = {1,3,5,7,8,10,12}; 


void generateNextDate(int day, int month, int year)
{
	if(day == 30)
	{
		if(find(begin(thirtyDayMonths),end(thirtyDayMonths),day)!=end(thirtyDayMonths))
		{
			day = 1;
			month = month+1;
		}
		else
			day = day+1;
	}
	else if(day == 31)
	{
		day = 1;
		if(month == 12)
		{
			year = year+1;
			month = 1;
		}
		else
			month = month+1;
	}
	if(month == 2)
	{
		if(day == 29 && leapYear == true)
		{
			day = 1;
			month = month+1;
		}
		else if(day <29 && leapYear == true)
			day = day+1;
		else
		{
			if(day == 28 && leapYear == false)
			{
				day =1 ;
				month = month + 1;
			}
			else
				day = day +1;
		}
	}
	cout<<day<<"/"<<month<<"/"<<year<<endl;
}
		
int main()
{
	string presentDate;
	cout<<"Enter the present date in the format dd/mm/yyyy or dd-mm-yyyy"<<endl;
	cin>>presentDate;
	int year = stoi(presentDate.substr(6,4),NULL);
	int month = stoi(presentDate.substr(3,2),NULL);
	int day = stoi(presentDate.substr(0,2),NULL);
	assert(year>=1);
	assert(month>=1 && month<=12);
	if(month == 2)
	{
		if(year%4==0)
		{
			if(year%100 == 0)
			{
				if(year%400 == 0)
				{
					leapYear = true;
					assert(day>=1 && day<=29);
				}
			}
			else
			{
				leapYear = true;
				assert(day>=1 && day<=29);	
			}
		}
		else if(leapYear == false)
			assert(day>=1 && day<=28);
	}
	else if(find(begin(thirtyDayMonths),end(thirtyDayMonths),month)!=end(thirtyDayMonths))
		assert(day>=1 && day<=30);
	else
		assert(day>=1 && day<=31);
	generateNextDate(day,month,year);
	return 0;
}
