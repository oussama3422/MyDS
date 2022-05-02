#include<iostream>
#include<stack>

using namespace std;



bool isOperand(char c)
{
	if((c>='a' && c<='z') || (c>='Z' && c<='Z'))
	{
		return true;
	}
	else
	{
		return false;
	}
}

string PrefixToInfix(string prefix)
{
	stack<string> s;
	
	for(int i=prefix.length()-1;i>=0;i--)
	{
        if(isOperand(prefix[i]))	
		{
		  	string op(1,prefix[i]);
		  	s.push(op);
		}
		else{
			string op1=s.top();
			s.pop();
			string op2=s.top();
			s.pop();
			string exp="(" + op1 + prefix[i] + op2 + ")";
		    s.push(exp);
		}	
	}
	return s.top();
	
	
}


int main()
{
	string infix,prefix;
	stack<string> s;
	cout<<"Enter a Prefix Expression :> ";
	cin>>prefix;
	cout<<"PREFIX EXPRESSION ::> \t"<<prefix<<"\n";
	infix=PrefixToInfix(prefix);
	cout<<"INFIX EXPRESSION ::> "<<infix;
	
	
	return 0;
	
	
}
