#include <bits/stdc++.h>

using namespace std;
vector<int> g[200001];
int n;
void dfs(int s,vector<int> &v){
	if(s==n){
		for(auto i:v)
		cout<<i<<" ";
		exit(0);
	}
	for(auto u:g[s]){
		v.push_back(u);
		dfs(u,v);
		v.pop_back();
	}
}
int main() {
int t;
cin>>n;
int a[n-1];
for(int u=0;u<n-1;u++){
	cin>>a[u];
	g[a[u]].push_back(u+2);
}
vector<int> v;
v.push_back(1);
dfs(1,v);
cout<<"NO";
return 0;
}
