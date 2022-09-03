#include<iostream>
using namespace std;

void perpostion (string p, string q, string type)
{
	if(type=="implication")
	{
		cout<<"The implication is ="<<p<<"-->"<<q<<endl;
		if(p=="p" && q=="q")
		{
			cout<<"The converse is="<<q<<"-->"<<p<<endl;
			cout<<"The inverse is="<<"-"<<p<<"-->-"<<q<<endl;
			cout<<"The contrapositive is="<<"-"<<q<<"-->-"<<p<<endl;
		}
		else if(p=="-p"&&q=="q")
		{
			cout<<"The converse is="<<q<<"-->"<<p<<endl;
			cout<<"The inverse is="<<p<<"-->-"<<q<<endl;
			cout<<"The contrapositive is="<<"-"<<q<<"-->"<<p<<endl;		
		}
		else if(p=="p"&&q=="-q")
		{
			cout<<"THE converse is="<<q<<"-->"<<p<<endl;
			cout<<"The inverse is="<<"-"<<p<<"-->"<<q<<endl;
			cout<<"The contrapositive is="<<q<<"-->-"<<p<<endl;	
	    }
		else if(p=="-p" && q=="-q")
		{
			cout<<"The converse is ="<<q<<"-->"<<p<<endl;
			cout<<"The inverse is="<<p<<"-->"<<q<<endl;
			cout<<"The contrapositive is="<<q<<"-->"<<p<<endl;		
		}
	}
	else if(type=="converse")
	{
		cout<<"The converse="<<p<<"-->"<<q<<endl;
		if(p=="p" && q=="q")
		{
			cout<<"The implication is="<<q<<"-->"<<p<<endl;
			cout<<"The inverse is="<<"-"<<q<<"-->-"<<p<<endl;
			cout<<"The contrapositive is="<<"-"<<p<<"-->-"<<q<<endl;
		}
		else if(p=="-p"&&q=="q")
		{
			cout<<"The implication is="<<q<<"-->"<<p<<endl;
			cout<<"The inverse is="<<q<<"-->-"<<p<<endl;
			cout<<"The contrapositive is="<<"-"<<p<<"-->"<<q<<endl;		
		}
		else if(p=="p"&&q=="-q")
		{
			cout<<"THE implication is="<<q<<"-->"<<p<<endl;
			cout<<"The inverse is="<<"-"<<q<<"-->"<<p<<endl;
			cout<<"The contrapositive is="<<p<<"-->-"<<q<<endl;	
	    }
		else if(p=="-p" && q=="-q")
		{
			cout<<"The implication is ="<<q<<"-->"<<p<<endl;
			cout<<"The inverse is="<<q<<"-->"<<p<<endl;
			cout<<"The contrapositive is="<<p<<"-->"<<q<<endl;		
		}
	}
	else if(type=="inverse")
	{
		cout<<"The inverse="<<p<<"-->"<<q<<endl;
		if(p=="p" && q=="q")
		{
			cout<<"The converse is="<<q<<"-->"<<p<<endl;
			cout<<"The implication is="<<"-"<<p<<"-->-"<<q<<endl;
			cout<<"The contrapositive is="<<"-"<<q<<"-->-"<<p<<endl;
		}
			else if(p=="-p" && q=="-q")
		{
			cout<<"The converse is ="<<q<<"-->"<<p<<endl;
			cout<<"The implication is="<<p<<"-->"<<q<<endl;
			cout<<"The contrapositive is="<<q<<"-->"<<p<<endl;		
		
	}
	
		else if(p=="p"&&q=="-q")
		{
			cout<<"THE converse is="<<q<<"-->"<<p<<endl;
			cout<<"The implication is="<<"-"<<p<<"-->"<<q<<endl;
			cout<<"The contrapositive is="<<q<<"-->-"<<p<<endl;	
	    }
	    	else if(p=="-p"&&q=="q")
		{
			cout<<"The converse is="<<q<<"-->"<<p<<endl;
			cout<<"The implication is="<<p<<"-->-"<<q<<endl;
			cout<<"The contrapositive is="<<"-"<<q<<"-->"<<p<<endl;		
		}
	
}
	else if(type=="contrapositive")
	{
		cout<<"The contrapositive="<<p<<"-->"<<q<<endl;
		if(p=="p" && q=="q")
		{
			cout<<"The inverse is="<<q<<"-->"<<p<<endl;
			cout<<"The converse is="<<"-"<<p<<"-->-"<<q<<endl;
			cout<<"The implication is="<<"-"<<q<<"-->-"<<p<<endl;
		}
		
			else if(p=="-p" && q=="-q")
		{
			cout<<"The inverse is ="<<q<<"-->"<<p<<endl;
			cout<<"The converse is="<<p<<"-->"<<q<<endl;
			cout<<"The implication is="<<q<<"-->"<<p<<endl;		
		}
		else if(p=="-p"&&q=="q")
		{
			cout<<"The inverse is="<<q<<"-->"<<p<<endl;
			cout<<"The converse is="<<p<<"-->-"<<q<<endl;
			cout<<"The implication is="<<"-"<<q<<"-->"<<p<<endl;		
		}
		else if(p=="p"&&q=="-q")
		{
			cout<<"THE innverse is="<<q<<"-->"<<p<<endl;
			cout<<"The converse is="<<"-"<<p<<"-->"<<q<<endl;
			cout<<"The implication is="<<q<<"-->-"<<p<<endl;	
	    }
	
  }
  else
  {
  	cout<<"Enter the correct entry";
  }
  
}

int main()
{
	string p,q,type;
	cout<<"Enter the type of the preposition=";
	cin>>type;
	cout<<"Enter the preposition e.g(use '-' for negation ";
	cin>>p>>q;	
	perpostion(p,q,type);
	return 0;
}
