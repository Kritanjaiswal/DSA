#include<iostream>
#include<vector>
using namespace std;
int main(){
   vector<int> v;
   v.push_back(1);
   v.push_back(1);
   v.push_back(0);
   v.push_back(1);
   v.push_back(0);
   v.push_back(1);
   v.push_back(1);
   v.push_back(0);
   int n=v.size();
   int i=0,j=n-1;
   for(int k=0; k<n; k++){
    cout<<v[k]<<" ";
   }
   cout<<endl;
   while(i<j){
    if(v[i]==1 && v[j]==0){
        swap(v[i],v[j]);
        i++;
        j--;
    }
    else if(v[j]==1) j--;
    else if(v[i]==0) i++;
   }
   for(int k=0; k<n; k++){
    cout<<v[k]<<" ";
   }
}