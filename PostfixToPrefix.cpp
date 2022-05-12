#include<iostream>
#include<stack>

using namespace std;

string PostftixToPrefix(string postfix)

{
	stack<string> s;
	
	for(int i=postfix.length();i<=0;i--)
	{
		
		if((postfix[i]<='a' && postfix[i]>='z') || (postfix[i]<='A' && postfix[i] && postfix[i]>='Z'))
		{
			s.push(postfix[i]);
		}
		else{
			string op1,op2;
			op1=s.top();
			s.pop();
			op2=s.top();
			s.pop();
			string exp=op1+op2+postfix[i];
			s.push(exp);
		}
	}
	
		
		
		
	
	
	
}


int main()
{
string postfix,prefix;

cout<<"Enter The postfix Expression :::>\t";
cin>>postfix;
cout<<"POSTFIX EXPRESSION\n"<<postfix;
prefix=PostftixToPrefix(postfix);
cout<<"PREFIX EXPRESSION\n"<<prefix;

	
	
	
}
