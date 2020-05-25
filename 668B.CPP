#include <bits/stdc++.h>
using namespace std;

int main() {
int n;
cin>>n;
int c=0,i=1;
while(c!=n){
	int rev=0,co=0;
	int f=i;
	while(f!=0){
		rev=rev*10+(f%10);
		f=f/10;
		co++;
	}
	if(co%2==0&&(rev==i)){
		c++;
	}
	i++;
}
cout<<i-1;
return 0;
}
