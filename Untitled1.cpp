#include<iostream>
using namespace std;
void reverse(char* st, char* e)
{if(st > e)
    {return ;}
  else
  {char temp = *st;
    *st = *e;
    *e= temp;
    reverse(st+1,e-1);}
}
void reverse_words(char* a, char* b,char* c){
if(*c=='\0')
  { reverse(b,c-1);
    b = c+1;
    reverse(a,c-1);
    return ;} 
  if(*c==' ')
  {  reverse(b,c-1);
    b =c+1;}
    reverse_words(a,b,c+1);
}
int main()
{	char s[]="cat is running";
	reverse_words(s,s,s);
	cout<<s<<endl;
	return 0;
}
