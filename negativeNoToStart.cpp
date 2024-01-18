#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(-3);
    v.push_back(-2);
    v.push_back(-1);
    v.push_back(5);
    v.push_back(-7);
    v.push_back(8);
    v.push_back(5);
    v.push_back(4);
    v.push_back(9);
    int n=v.size();
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int i=0,j=n-1;
    while(i<=j){
        if(v[i]>0 && v[j]<0){
        swap(v[i],v[j]);
        i++;
        j--;
    }
    else if(v[i]<0) i++;
    else if(v[j]>0) j--;
    }
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
}