

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    //cout<<"Enter no of testcases:\n";
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        int N;
        int a;
        cin>>N;
        
        
        vector<int> v1;
        for(int i=0;i<N;i++)
        {
            cin>>a;
            v1.push_back(a);
        }
        
        unordered_map<int,int> umap;
        
        for(auto x:v1)
            umap[x]++;
        
        int Frequency = INT_MIN;
        int high_ele;
        for(auto itr = umap.begin(); itr!=umap.end(); itr++)
        {
           
            if(Frequency < itr->second)
            {
                Frequency = itr->second;
                high_ele = itr->first;
                
            }
        }
       
        if(N == 1 || Frequency == N)
        {
            cout<<0;
            
        }
        else if(Frequency >=2)
        {
            int remaining_element = N - Frequency;
            int temp = remaining_element - 1;
            int total = temp + 2;
            cout<<total;
        }
        else
        {
            cout<<-1;
        }
        cout<<"\n";
        
        
    }
    return 0;
}
