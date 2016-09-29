//Commision program
/*

The Program assumes the Input in the format of integer amount
The commision constraints are set as follows
0    to   1000     => 10%
1001 to   1800     => 15%
1800 and  above    => 20%

The Output is the amount of commision calculated for the input amount

The constraints are fixed to accept the universal input (all 32 bit float values)

*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	float amount, commision;
	cout<<"Enter the commision amount\n";
	cin>>amount;
	
	commision = 0;
	
	if(amount < 0){
		cout<<"Invalid amount\n";
		return 0;
	}
	if(amount <= 1000)
		commision = amount*0.1;

	else{
		if(amount <= 1800)
			commision = (amount-1000)*0.15 + 100;
		
		else
			commision = (amount-1800)*0.2 + 220;
		
	}
	
	cout<<"Commision : "<<commision<<endl;
	return 0;
}
