#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &v)
{
    int n=v.size();
    int m=v[0].size();
    set<int> s1,s2;
	for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!v[i][j]){
                s1.insert(i);
                s2.insert(j);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(s1.count(i) || s2.count(j)){
                v[i][j]=0;
            }
        }
    }
    
}