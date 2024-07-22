#include<iostream>
using namespace std;
int main()
{
    int *pa, *pb, *psum;
pa= new int;
pb= new int;
psum= new int;
cout<<"enter two numbers";
cin>>*pa>>*pb;
*psum=*pa+*pb;
cout<<"the sum="<<*psum;
delete pa;
delete pb;
delete psum;
return 0;
}