//Q Link:-
//https://www.codechef.com/JUNE20B/problems/XYSTR


#include <bits/stdc++.h>
using namespace std;

int main()
{
	// your code goes here

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int t; //no of test cases
	cin>>t;

	string students;    //string to store combination of students



//	int count[100];  //To store no of combinations for each test case

	for( int i=0; i<t; i++)
	{
	    cin>> students;
	    int count=0;
	    int j=0;
	    while(j<students.size()-1)
	    {
	        if(students[j]!=students[j+1])
	        {
	            count++;
	            j++;
	        }
	        j++;


	    }
	    cout<<count<<endl;
	}

	return 0;
}
