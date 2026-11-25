#include<iostream>
#include<string>
using namespace std;
void findAndReplace(string &sentence, string oldString, string newString)
{
	size_t pos=sentence.find(oldString);
	while(pos!=string::npos)
	{
		sentence.replace(pos,oldString.length(),newString);
		pos=sentence.find(oldString,pos + newString.length());
	}
}
int main()
{
	string sentence, oldString, newString;
	cout<<"Enter a sentence : ";
	getline(cin,sentence);
	cout<<"Enter the string to find : ";
	getline(cin,oldString);
	cout<<"Enter the replacement string :";
	getline(cin,newString);
	findAndReplace(sentence,oldString,newString);
	cout<<"Modified sentence : "<<sentence ;
	return 0;
}
