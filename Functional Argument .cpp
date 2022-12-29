#include<iostream>
using namespace std;
void both_No();
int argument_no();
void return_no(int i);
int both(int b);
int main()
{
    cout<<"First case "<<endl;
    cout<<"No Argument And No return "<<endl;
    both_No();
    cout<<"second case"<<endl;
    cout<<"OnlY  Return Value "<<endl;
    int c;
    c=argument_no();
    if(c%2==0)
    cout<<"Even number. : "<<c<<endl;
    else 
    cout<<"Odd number.  : "<<c<<endl;
    cout<<"Three case"<<endl;
    cout<<"OLY Argument  "<<endl;
    int i;
    cout<<"Enter your number.   : ";
    cin>>i;
    return_no(i);  
    cout<<"Four case"<<endl;
    cout<<"Argument AND Return BOTH  "<<endl;
    int d,b;
    d= both(b);
    if(d==0)
    cout<<"Even number.  : "<<endl;
    else 
    cout<<"Odd number.   : "<<endl;   
}
void both_No()
{ 
  int a;
  cout <<"Enter your number.  : ";
  cin>>a;
  if (a%2==0)
  cout<<"Even number. : "<<a<<endl;
  else 
  cout<<"Odd number.  : "<<a<<endl;
}
int argument_no()
{
 int b;
 cout<<"Enter your number. " ;
 cin>>b;
 return b;
}
void return_no(int i)
{
 if(i%2==0)
 cout<<"Even number.  :"<<i<<endl;
else 
 cout<<"Odd number.  : "<<i<<endl;
}
int both(int b)
{
 cout<<"Enter your number.   : ";
  cin>>b;
  return (b%2);
}