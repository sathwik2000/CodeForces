#include <bits/stdc++.h>

using namespace std;
map<string,vector<string>> g;
int n,ma=0;
void dfs(string s,int si){
	if(si>ma)
	ma=si;
	for(auto i:g[s]){
		dfs(i,si+1);
	}
}
int main() {
int t;
cin>>n;

for(int u=0;u<n;u++){
	string s,s1,k;
	cin>>s>>s1>>k;
	transform(s.begin(), s.end(), s.begin(),
    [](unsigned char c){ return std::tolower(c); });
		transform(k.begin(), k.end(), k.begin(),
	    [](unsigned char c){ return std::tolower(c); });
	g[k].push_back(s);
}
vector<int> v;
ma=0;
dfs("polycarp",1);
cout<<ma;
return 0;
}
