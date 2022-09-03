#include<iostream>
#include<string>
using namespace std;


// ############# PART-A #######################
////////  DO NOT CHANGE FUNCTION NAME AND PARAMTERS ///////

string  reverse_from_special_character(string str,char special, int index=0)
{
	string rev;
if(str[index]==special)
{
int num=index;
index=0;
int value=num;
for(int i=0;i<num;i++)
{
	rev+=str[value-1];    
	value--;
}
return rev;
}
return reverse_from_special_character(str,special,index+1);
}


////////  DO NOT CHANGE FUNCTION NAME AND PARAMTERS ///////
// ############# PART-B #######################


    //UNCOMMENT WHEN YOU DONE WITH PART A
int count_specific_number(string str, int num, int index=0)	
{
 if(str[index]==0)
{
 	return 0;	
}
int result=0;
	 result=count_specific_number(str,num,++index);
	   if((int)str[index]-48==num)
	   {
	   	result++;
	   }
	   return result;
}
int main()
{
    cout<<"Output:"<<reverse_from_special_character(".abcdef.sdssd",'.',0)<<endl;   
cout<<"Output:"<<count_specific_number("11112211119999912220000",9,0)<<endl;
   return 0;
}
