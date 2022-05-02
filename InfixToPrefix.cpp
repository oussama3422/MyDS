#include<iostream>
#include<algorithm>
#include<stack>

using namespace std;

//:::::::::::::::::::::::::::::Function Precendce return  :::::::::::::::::::::://
int precednce(char c)
{
	if(c=='^')
	{
		return 3;
	}
	else if(c=='*' || c=='/')
	{
		return 2;
	}
	else if(c=='+' || c=='-')
    {
     return 1;	
	} 
    else{
      return -1;
	}
}

//::::::::::::::::::::::::::::Function Operand return True || False :::::::::::::::::::::://
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
//::::::::::::::::::::::::::;Function Opreator return True || False :::::::::::::::::::::://
bool isOpertor(char c)
{
	if(c=='+'|| c=='-' || c=='*' || c=='^' || c=='/')
	{
		return true;
	}
	else
	{
		return false;
	}
}
string InfixToPrefix(stack<char> s,string infix)
{
	string prefix;
	
	reverse(infix.begin(),infix.end());
	for(int i=0;i<infix.length();i++)
	{
		if(infix[i]=='(')
		{
			infix[i]=')';
		}
		else if(infix[i]==')')
		{
			infix[i]='(';
		}
	}
	for(int i=0;i<infix.length();i++)
	{
		if(isOperand(infix[i]))
		{
//			prefix=infix[i]++;
			prefix+=infix[i];
		}
		else if(infix[i]=='(')
		{
			s.push(infix[i]);
		}
		else if(infix[i]==')')
		{
			while((s.top()!='(') && (!s.empty()))
			{
//				char temp=s.top();
				prefix+=s.top();
				s.pop();
			}
			if(s.top()=='(')
			{
				s.pop();
			}
			
		}
		else if(isOpertor(infix[i]))
		{
		  if(s.empty())
		  {
		  	s.push(infix[i]);
		  }
		  else{
		  if(precednce(infix[i])>precednce(s.top()))   
		  {
		  	s.push(infix[i]);
		  }
		  else if((precednce(infix[i])==precednce(s.top())) && infix[i]=='^')
		  {
		  	while((precednce(infix[i])==precednce(s.top())) && (infix[i]=='^'))
		  	{
		  		prefix+=s.top();
		  		s.pop();
			}
			s.push(infix[i]);
		  }
		  else if((precednce(infix[i])==precednce(s.top())))
		  {
		    s.push(infix[i]);
		  }
		  else 
		  {
		    while((!s.empty() && (precednce(infix[i])< precednce(s.top()))))
		  	{
		  		prefix+=s.top();
		  		s.pop();
			}
			s.push(infix[i]);	
		  }
	}
		  
		}
		
	}
	
	while(!s.empty())
	{
		prefix+=s.top();
		s.pop();
	}
	reverse(prefix.begin(),prefix.end());
	
	return prefix;
	
}






int main()
{
	string infix,prefix;
	cout<<"ENTER A INFIX EXPRESSION : "<<endl;
	cin>>infix;
	stack <char> s;
	cout<<"INFIX EXPRESSION : "<<infix<<endl;
	
	prefix=InfixToPrefix(s,infix);
	
	cout<<"\nPREFIX EXPRESSION : "<<prefix;
	
	
	return 0;
}
