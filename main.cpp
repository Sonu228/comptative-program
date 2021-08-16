#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int llc(int arr[],int n)
{
    vector<int>v;
    stack<int>s;
    for(int i=n-1;i>=0;i--)
    {
        if(s.empty())
        { 
            v.push_back(-1);
            s.push(arr[i]); 
            
        }
      
            else{
            while((!s.empty()) && (s.top()<=arr[i]))
            {
                s.pop();
            }
            if((!s.empty())){
            v.push_back(s.top());
            s.push(arr[i]);
            }
            else{
                v.push_back(-1);
                s.push(arr[i]);
            }
            }
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    cout<<v[i];
}



int main()
{
    int n=8;
    int arr[]= {7,2,2,4,9,11,6,5};
    llc(arr,n);

  
  
}

