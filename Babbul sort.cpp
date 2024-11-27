#include<bits/stdc++.h>
using namespace std;
void bubbol_sort(vector<int>&v)
{
    for(int i=0;i<v.size()-1;i++){
        for(int j=0;j<v.size()-i-1;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }
}
int main()   // Time Complexity:O(N*N)
             // Space Complexity:O(1)
{
    int a;
    cin>>a;
    vector<int>v;
    for(int i=1;i<=a;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    bubbol_sort(v);
    for(auto u:v){
        cout<<u<<" ";
    }
}
