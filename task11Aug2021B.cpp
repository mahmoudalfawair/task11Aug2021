#include <iostream>
using namespace std;
int counter1=0;
int main()
{
int input;
cout << "Enter any number : " ;
cin >> input;
int a1;
int a2;
int counter =0;
int tempInput = input;
for(; tempInput > 0; tempInput = tempInput /10)
{
    counter++;
}
for(int i =1; i <= counter ;i++)
{ 
if(i==1)
a2 =input%10;
 if(i == counter)
for(;input >0;input =input /10)
{
    if(input >0 && input < 10)
    a1=input %10;
}
}

cout << "\nThe first number is : " << a2;
cout << "\nThe last number is : " << a1; 
return 0;
}
/* 
for(int i =0; input >10;input =input /10 )


*/