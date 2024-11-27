#include<bits/stdc++.h>
using namespace std;
void insertion_sort(vector<int>&v,int sz)
{
    for(int i=0;i<sz;i++){
        int index=i-1;
        int val=v[i];
        while(index>=0&&v[index]>val){
            v[index+1]=v[index];
            index--;
        }
        v[index+1]=val;
    }
}
int main()
{
    int t;
    cin>>t;//Input test case
    while(t--){
        int a;
        cin>>a;
        vector<int>v(a+5);
        for(int i=1;i<=a;i++){
            int x;
            cin>>x;
            v[i-1]=x;
        }
        insertion_sort(v,a);
        for(int i=1;i<=a;i++){
            cout<<v[i-1]<<" ";
        }
        cout<<endl;
    }
}
