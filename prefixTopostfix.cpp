#include<iostream>
#include<stack>
#include<algorithm>

using namespace std;



bool isOperand(char c)
{
	if((c>='a' && c<='z') || (c>='A' && c<='Z'))
	{
		return true;
	}
	else
	{
		return false;
	}
}

string PosftixToPrefix(string prefix)
{
	stack<string> s;
	
	for(int i=prefix.length();i>=0;i--)
	{
        if(isOperand(prefix[i]))	
		{
		  	string op(1,prefix[i]);
		  	s.push(op);
		}
		else if(){
			string op1=s.top();
			s.pop();
			string op2=s.top();
			s.pop();
			string exp= prefix[i] + op2 + op1 ;
//		    s.push(prefix[i] + op2 + op1);
			s.push(exp);
		}	
	}
	return s.top();
	
	
}


int main()
{
	string postfix;
//	stack<string> s;
	cout<<"Enter a Postfix Expression :> ";
	cin>>postfix;
	cout<<"POSTFIX EXPRESSION ::> \t"<<postfix<<"\n";
	string prefix=PosftixToPrefix(postfix);
	cout<<"PREFIX EXPRESSION ::> \t"<<prefix;
	
	
	return 0;
	
	
}
