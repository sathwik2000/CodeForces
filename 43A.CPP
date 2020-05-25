#include <bits/stdc++.h>
using namespace std;

int main() {
int n;
cin>>n;
unordered_map<string,int> ha;
while(n--){
	string s;
	cin>>s;
	ha[s]++;
}
string ans;
int max=0;
for(auto it=ha.begin();it!=ha.end();it++){
	if(it->second>max){
		max=it->second;
		ans=it->first;
	}
}
cout<<ans;
return 0;
}
