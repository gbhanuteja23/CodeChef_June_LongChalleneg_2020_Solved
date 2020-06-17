//Q Link:-
//https://www.codechef.com/JUNE20B/problems/PRICECON     (Division 2 )

#include <bits/stdc++.h>
using namespace std;

struct chef
{
    int n;             //no of items
    int k;            //ceiled price value

    int p[10000];  //array to store prices of itmes

    int lost_revenue[10000];  //array to store lostprice for each items

};

int main()
{
    // your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;   //no of test cases

    struct chef c[100];  //To create test case no of objects

    cin>>t;

    for(int i=0; i<t; i++)
    {
        cin>>c[i].n;
        cin>>c[i].k;
        int m=0;

        while(m<c[i].n)
        {
            cin>>c[i].p[m];
            m++;
        }

    }

    for(int j=0; j<t; j++)
    {
        int l=0;

        while(l<c[j].n)
        {
            if(c[j].p[l]>c[j].k)
            {
                c[j].lost_revenue[l]= c[j].p[l]-c[j].k;
            }
            l++;
        }
    }

    int r=0;
    int sum=0;

    for( int b=0; b<t; b++)
    {
        while(r<c[b].n)
        {
            sum= sum + c[b].lost_revenue[r];
            r++;
        }
        cout<<sum<<"\n";
        sum=0;
        r=0;
    }



	return 0;
}

