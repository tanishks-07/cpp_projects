# include <iostream>
using namespace std;
int main()
{
float si,p,r;
int t;
cin>>p>>r>>t;// si= simple intrest, p= principle amount, r= rate , t= time
p=750000;
r=10.2;
t=5;
si=(p*r*t)/100;
cout<<"the simple intrest is"<<si<<endl;
return 0;
}