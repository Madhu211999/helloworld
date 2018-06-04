#include<iostream.h>
#include<stdio.h>
void swap(int * x,int * y);
int main()
{
int a,b;
cout<<"Enter a & b:"<<endl;
cin>>a>>b;
swap(&a,&b);
cout<<a<<"\t"<<b<<endl;
return 0;
void swap(int * x,int * y)
{
int c;
c=*x;
*x=*y;
*y=c;
}
