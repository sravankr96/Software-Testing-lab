/*
Author : Karthik Palavalli
Title :
Description :	Input three values and check if a triangle can be formed with those three values representing the side lengths.
		If yes, what triangle is formed : Scalene, Isosceles or Equilateral.
To Do : 
*/

#include<bits/stdc++.h>
#include<cassert>

using namespace std;

void checkTriangleType(vector<int> sidesList)
{
	sort(sidesList.begin(),sidesList.end());
	assert(sidesList[0] + sidesList[1] > sidesList[2]);
	if(sidesList[0] == sidesList[1])
	{
		if(sidesList[1] == sidesList[2])
			cout<<"Equilateral Triangle"<<endl;
		else
			cout<<"Isosceles Triangle"<<endl;
	}
	else if(sidesList[1] == sidesList[2])
		cout<<"Isosceles Triangle"<<endl;
	else
		cout<<"Scalene Triangle"<<endl;
}

int main()
{
	int a,b,c;
	cout<<"Enter the values of the three sides"<<endl;
	cin>>a>>b>>c;
	assert(("Side length illegal or out of range\n",(a>0 && b>0 && c>0 && a<=200 && b<=200 && c<=200)));
	vector<int> sidesList;
	sidesList.push_back(a);
	sidesList.push_back(b);
	sidesList.push_back(c);
	checkTriangleType(sidesList);
	return 0;
}

	
