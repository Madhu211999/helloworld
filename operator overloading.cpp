#include<iostream.h>
#include<stdio.h>
class complex
{
private:
int rp,ip;
public:
void input()
{
cout<<"Enter rp & ip:"<<endl;
cin>>rp>>ip;
}
void output()
{
if(ip<0)
cout<<rp<<ip<<"i"<<endl;
else
cout<<rp<<"+"<<ip<<"i"<<endl;
}
complex operator + (complex a,complex b)
{
complex c;
c.rp=a.rp+b.rp;
c.ip=a.ip+b.ip;
return c;
}
int main()
{
complex a,b,c;
a.input();
b.input();
c=a+b;
c.output();
return 0;
}
