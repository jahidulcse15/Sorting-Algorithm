#include<bits/stdc++.h>
using namespace std;
void selection_sort(vector<int>&v,int sz)
{
    for(int i=1;i<=sz;i++){
        int index=i;
        for(int j=i+1;j<=sz;j++){
            if(v[j]<v[index]){
                index=j;
            }
        }
        swap(v[i],v[index]);
    }
}
int main()
{
    int t;
    cin>>t;//Input test case
    while(t--){
        int a;
        cin>>a;//Input array size
        vector<int>v(a+2);
        for(int i=1;i<=a;i++){
            int x;
            cin>>x;
            v[i]=x;
        }
        selection_sort(v,a);
        for(int i=1;i<=a;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}
