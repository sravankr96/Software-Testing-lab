//Triangle Program
/*

The progarm accepts input in the format of three integers a,b,c
For the given input the code decides the following
1. Validate the input
2. If it is possible to form the triangle
3. If possible what is the type of the triangle

The constraints are fixed to accept the universal input (all 32 bit float values)
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    float a,b,c;
    cin>>a>>b>>c;
    if(a<0 || b<0 || c<0){
        cout<<"Triangle sides cannot be of negative size";
        exit(0);
    }
    if(a>b && a>c)
        if(a >= b+c){
            cout<<"The entered values does not form a triangle\n";
            exit(0);
        }
    else if(b>c && b>a)
        if(b >= a+c){
            cout<<"The entered values does not form a triangle\n";
            exit(0);
        }
    else if(c>b && c>a)
        if(c >= a+b){
            cout<<"The entered values does not form a triangle\n";
            exit(0);
        }
    if(a==b && b==c){
        cout<<"Equilateral Triangle\n";
    }
    else if(a==b || b==c || c==a){
        cout<<"Isoscles Triangle\n";
    }
    else{
        cout<<"Scalene Triangle\n";
    }
    
    return 0;
}

