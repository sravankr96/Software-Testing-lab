//Next Date program
/*

The progarm accepts input in the format of day, month and year separate integers
The code validates the input date
Outputs the next date

The program is designed to work for all the possible dates (Date from  0AC till the possible int range dates)

*/



#include <bits/stdc++.h>

using namespace std;


int day, month, year, next_day, next_month, next_year, prev_day, prev_month, prev_year;


// Validating the day
int validate_day(){
	
	next_day = prev_day = day;
	next_month = prev_month = month;
	next_year = prev_year = year;
    

    // Validating with the months that have 31 days
    if( month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        if( day<1 || day>31)
            return 0;
        else{
            if(day == 31){
                next_day = 1;
                next_month = month+1;
            }
            else
                next_day = day+1; 
            
            return 1;
    	}
	}

    // Validating with the months that have 30 days
    else if( month == 4 || month == 6 || month == 9 || month ==11){
        if( day<1 || day>30)
            return 0;
        else{
            if( day == 30){
                next_day = 1;
                next_month = month+1;
            }
			else
                next_day = day+1;
            return 1;
		}
	}
    
	// Validating the days of february month WRT leapyear
    else if( month == 2){
        if( year%4 == 0 || year%100 == 0){
            if( day<1 || day>29)
                return 0;
            else{
                if( day == 29){
                    next_day = 1;
                    next_month = month+1;
                }
                else
                    next_day = day+1;
                return 1;
            }
        }
        
        else{
            if( day<1 || day>28)
                return 0;
            else{
                if(day == 28){
                    next_day = 1;
                    next_month = month+1;
                }
                else
                    next_day = day+1;
                return 1;
			}
		}
	}
}

int validate_month(){
    
	if(month<1 || month>12)
        return 0;
    else{
        if(next_month > 12){
        	next_month = 1;
        	next_year = year+1;
        }
		return 1;
    }
}

int next_date(){
	
	cout<<"NEXT DATE : "<<next_day<<"/"<<next_month<<"/"<<next_year<<endl;
	return 0;
	
}

int prev_date(){
	if(day==1){
		if(month == 1 || month == 2 || month == 4 || month == 6 || month == 8 || month == 9 || month == 11){
			if(month==1){
				prev_year = year-1;
				prev_day = 31;
				prev_month = 12;
			}
			else{
				prev_day = 31;
				prev_month = month-1;
			}
		}
		
		else if(month == 3 || month == 5 || month == 7  || month == 10){
			if(month == 3){
				if(year%4==0 || year%100==0 ){
					prev_month = month-1;
					prev_day = 29;
				}
				else{
					prev_day = 28;
					prev_month = month-1;
				}
			}
			else{
				prev_day = 30;
				prev_month = month-1;
			}
				
		}
	}
	
	else
		prev_day = day-1;
	
	cout<<"PREV DATE : "<<prev_day<<"/"<<prev_month<<"/"<<prev_year<<endl;
	return 0;
}

int main(){
	
	while(1){
		cout<<"Enter the day month and year of the date\n";
		cin>>day>>month>>year;
		
		if(validate_day() && validate_month()){
			next_date();
			prev_date();
		}
		else{
			cout<<"INVALID DATE\n"<<endl;
		
		}
	}
	return 0;
}


