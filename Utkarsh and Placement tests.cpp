

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testcases;
    //cout<<"Enter no of test cases:\n";
    cin>>testcases;
    while(testcases--)
    {
        char pref[3];
        //cout<<"\nEnter elements in preference:";
        for(int i=0;i<3;i++)
        {
            cin>>pref[i];
        }
        char com[2];
        //cout<<"\nEnter company:";
        for(int j=0;j<2;j++)
        {
            cin>>com[j];
        }
        
        int preference = INT_MAX;
        char high_preference;
        for(int k=0;k<2;k++)
        {
            for(int j=0;j<3;j++)
            {
                if(com[k] == pref[j])
                {
                    preference = min(preference,j);
                    high_preference = pref[preference];
                    break;
                }
            }
        }
        //cout<<"\nFinal result:";
        cout<<high_preference;
        cout<<"\n";
    }

    return 0;
}
