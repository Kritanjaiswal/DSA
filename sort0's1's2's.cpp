#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    int n=v.size();
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int ones=0,twos=0,noo=0;
    for(int i=0; i<n; i++){
        if(v[i]==0) noo++;
        else if(v[i]==1) ones++;
        else twos++;
    }
    for(int i=0; i<n; i++){
        if(i<noo) v[i]=0;
        else if(i<(noo+twos)) v[i]=1;
        else v[i]=2;
    }
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
}