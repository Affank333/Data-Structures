#include<iostream>
#include<string>
using namespace std;
int answer=0;
string reverse;
// ############# PART-A #######################
////////  DO NOT CHANGE FUNCTION NAME AND PARAMTERS ///////

string  reverse_from_special_character(string str,char special, int index=0)
{
if(str[index]==special)
{
int num=index;
index=0;
int num1=num;
while(index<num)
{
	reverse+=str[num1-1];   //For reversing the values 
	num1--;
	index++;
}
return reverse;
}
 return reverse_from_special_character(str,special,++index);
    
}



////////  DO NOT CHANGE FUNCTION NAME AND PARAMTERS ///////
// ############# PART-B #######################


    //UNCOMMENT WHEN YOU DONE WITH PART A
int count_specific_number(string str, int num, int index=0)
{
	
 if(str[index]=='\0')
{
 	return 0;	
}
	 answer=count_specific_number(str,num,++index);
	   if((int)str[index]-48==num)
	   {
	   	answer++;
	   }
	   return answer;
}
int main(){
        // SAMPLE
  
    cout<<"Output:"<<reverse_from_special_character("abcdef.sdssd",'.',0)<<endl;   
cout<<"Output:"<<count_specific_number("11112211119999912220000",9,0)<<endl;
   return 0;
}
