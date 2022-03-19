#include<iostream>
#include<Windows.h>
using namespace std;
main()
{
	char ch;
	cout<<"enter a letter :";
	cin>> ch;
	system("cls");
	switch(ch)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
			cout<<ch<<" is a vowel"<<endl;
			cout<<"_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_";
			break;
		default:
			cout<<ch<<" letter is not vowel"<<endl;
			cout<<"_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_";
		break;
	}
}
