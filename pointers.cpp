#include<iostream>
using namespace std;
int main()
{
int *ptr1=new int;
int *ptr2=new int;
*ptr2=24;
*ptr1=20;
ptr1=ptr2;
delete ptr1;
system("pause");
return 0;	
}

