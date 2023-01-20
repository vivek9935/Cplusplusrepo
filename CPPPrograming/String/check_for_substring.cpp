// C++ program to check if a string is
// substring of other.
#include<iostream>
#include <string>
using namespace std;
char lowerCase(char ch)
{   
	if(ch>='a'&&ch<='z')
	return ch;
	else if(ch>='A'&&ch<='Z')
	{
		char temp=ch-'A'+'a';
		return temp;
	}
	else
	{
		return ch;
	}
}
int isSubstring(string s1, string s2)
{
	int M = s1.length();
	int N = s2.length();

	/* A loop to slide pat[] one by one */
	for (int i = 0; i <= N - M; i++) {
		int j;

		/* For current index i, check for
pattern match */
		for (j = 0; j < M; j++)
			if (lowerCase(s2[i + j]) != lowerCase(s1[j]))
				break;

		if (j == M)
			return i;
	}

	return -1;
}

/* Driver code */
int main()
{
	string s1 ;
	string s2;
	cout<<"Enter the paragraph "<<endl;
	cin>>s2;
	cout<<"Enter the word you want to search"<<endl;
	cin>>s1;
	


	int res = isSubstring(s1, s2);
	if (res == -1)
		cout << "Not present";
	else
		cout << "Present at index " << res<<endl;
	return 0;
}
