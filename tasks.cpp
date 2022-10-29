#include <iostream>
using namespace std;
int main()
{
int a,b=0,g=0,d=0,f=0,e=0;
for(int i=1;i<=5 && !(a<0 || a>=5); i++)
{
	cout<<"Enter the number-->";
	cin>>a;
	switch (a)
	{
	
	case 1:
	b++;
	break;
	     	
	case 2:
	g++;
	break;
	case 3:
	d++;
	break;
	   case 4:
	   	f++;
	   	break;
	    case 5:
 		e++;
	    break;
}}
cout<<"1 is used "<<b<<" times.\n";
cout<<"2 is used "<<g<<" times.\n";
cout<<"3 is used "<<d<<" times.\n";
cout<<"4 is used "<<f<<" times.\n";
cout<<"5 is used "<<e<<" times.\n";
return 0;
}

