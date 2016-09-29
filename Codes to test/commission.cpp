/*
Author: Karthik Palavalli
Descrption : To validate and compute the commission earned by the sales person given the sales of each product he/she sold.

*/

#include<bits/stdc++.h>
#include<cassert>

using namespace std;

int main()
{
	int numSales;
	cout<<"Enter the number of sold products"<<endl;
	cin>>numSales;
	assert(numSales>=0);
	float presentSaleValue,commission=0.0,totalSales;
	cout<<"Enter the sales value of each sell"<<endl;
	while(numSales--)
	{
		cin>>presentSaleValue;
		assert(presentSaleValue>=0);
		totalSales = totalSales + presentSaleValue;


	}
	cout<<totalSales<<endl;
	if(0<totalSales<=1000)
		commission= totalSales*0.1;
	else if(1000<totalSales<=1800)
		commission = 100 + (totalSales-1000)*0.15;
		
	else
		commission = 120 + (totalSales-1800)*0.20;
	cout<<"Commission Earned is : "<<commission<<endl;
	return 0;
}

		
