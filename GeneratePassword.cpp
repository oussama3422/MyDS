#include<iostream>
#include<fstream>
#include<string>
#include<ctime>
using namespace std;


int main()
{
	
	char caracters[]="abcdefjhijklmnopqrstuvwxyzABCDEFJHIGKRSTUVWXYZ0123456789 ";
	string  password;
	
	int length;
	int randomNumber;
	
	fstream output_file;
	output_file.open("Passwordfile.txt");
	
	cout<<"Enter the Number of digit for you're password ::>\t";
	cin>>length;
//	srand(time());
	
	for(int i=0;i<=length;i++)
	{
		randomNumber=rand(time(""))%63+1;
		
		output_file<<caracters[random]
	}
	
	cout<<"Done";
	cout<<"The password "<<randomNumber;
	
	
	
	
}
