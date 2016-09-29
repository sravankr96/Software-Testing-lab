//Next Date program
/*

The progarm accepts input in the format of day, month and year separate integers
The code validates the input date
Outputs the next date

The program is designed to work for all the possible dates (Date from  0AC till the possible int range dates)

*/



#include <bits/stdc++.h>

using namespace std;

int main(){
	int day, month, year, nxtDateDay, nxtDateMonth, nxtDateYear;
	
	cout<<"Enter the day month and year of the date\n";
	cin>>day>>month>>year;
	
	
	
	
}


# Validating the day
def validate_day():

    # Validating with the months that have 31 days
    if month in {1,3,5,7,8,10,12}:
        if day<1 or day>31:
            return 0
        else:
            if day is 31:
                next_day = 1
            else:
                next_day+=1
            return 1

    # Validating with the months that have 30 days
    elif month in {4,6,9,11}:
        if day<1 or day>30:
            return 0
        else:
            if day is 30:
                next_day = 1
            else:
                next_day+=1
            return 1

    # Validating the days of february month WRT leapyear
    elif month is 2:
        if year%4 is 0 or year%100 is 0:
            if day<1 or day>29:
                return 0
            else:
                if day is 29:
                    next_day = 1
                else:
                    next_day+=1
                return 1
        else:
            if day<1 or day>28:
                return 0
            else:
                if day is 31:
                    next_day = 1
                    next_month +=1
                else:
                    next_day+=1
                return 1

def validate_month():
    if month<1 or month>12:
        return 0
    else:
        return 1

def validate_year():
    if year<1860 or year>2016:
        return 0
    else:
        return 1


if validate_year() is 1 and validate_month() is 1 and validate_day() is 1:
    print(next_date())
else:
    print("INVALID DATE")


