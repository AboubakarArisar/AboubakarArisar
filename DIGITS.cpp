#include <iostream>
using namespace std;
int main()
{
int sum,a,b,c,d;
int num;
cout<<"Enter the number-->";
cin>>num;
sum=0;
a=num%10/1;
sum+=a;
a=num%100/10;
sum+=a;
a=num%1000/100;
sum+=a;
a=num%10000/1000;
sum+=a;
a=num%100000/10000;
sum+=a;
cout<<"Sum of the digits is "<<sum<<endl;
sum=0;
b=num%10/1;
if(b%2==0)
sum+=b;
b=num%100/10;
if(b%2==0)
sum+=b;
b=num%1000/100;
if(b%2==0)
sum+=b;
b=num%10000/1000;
if(b%2==0)
sum+=b;
b=num%100000/10000;
if(b%2==0)
sum+=b;
cout<<"Sum of the Even digits is "<<sum<<endl;
sum=0;

c=num%10/1;
if(!(c%2==0))
sum+=c;
c=num%100/10;
if(!(c%2==0))
sum+=c;
c=num%1000/100;
if(!(c%2==0))
sum+=c;
c=num%10000/1000;
if(!(c%2==0))
sum+=c;
c=num%100000/10000;
if(!(c%2==0))
sum+=c;
cout<<"Sum of the odd digits is "<<sum<<endl;
return 0;
}
