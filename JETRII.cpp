#include<iostream>
using namespace std;
int main()
{
float x,y;
char ch;
cout<<"Enter first number:";
cin>>x;
cout<<"Enter second number:";
cin>>y;
cout<<"Enter\n+ for add\n- for sub\n* for division\n/ for multiplication\n";
cin>>ch;
switch(ch)
{

case'+':
cout<<"add="<<(x+y);
break;
case'-':
cout<<"sub="<<(x-y);
break;
case'*':
cout<<"division="<<(x*y);
break;
case'/':
cout<<"multiplication="<<(x/y);
break;
default:
cout<<"invalid calcurator";
}
	
}

