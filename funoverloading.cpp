#include<iostream.h>
#include<stdio.h>
int sum(int,int);
float sum(float,float,float);
int main()
{
int a,b;
float x,y,z;
cout<<"Enter a & b:"<<endl;
cin>>a>>b;
cout<<"Enter x,y,&z:"<<endl;
cin>>x>>y>>z;
cout<<"sum of two ints:"<<sum(a,b)<<endl;
cout<<"sum  of three floats:"<<sum(x,y,z)<<endl;
return 0;
int sum(int a,int b)
{
return(a+b);
}
float sum(float x,float y,float z)
{
return (x+y+z);
}
