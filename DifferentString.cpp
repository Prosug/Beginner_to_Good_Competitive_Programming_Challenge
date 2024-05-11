#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
/*************************************************
    Hello this is my code :). 
    I'm Topson/Desconocido/ElProsor 
    
    I'm learning competitive programming 
    
    long long day=28;

    date dayCodeAnt=localdate()-1;
    date dayCode=localdate();
    flag;
    if(dayCodeAnt!=dayCode){
        flag=0;
    }
    if(answer_code==accepted && flag==0){
        flag=1;
        day++;
        dayCodeAnt++;
    }
    cout<<"Day: "<<day<<"\n";

    ***********************
    Day: 29
    ***********************

    https://codeforces.com/contest/1957/problem/B
****************************************************/


int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
    freopen("lectura.txt", "r", stdin);
    freopen("salida.txt", "w", stdout);
	#endif
	int t;cin>>t;
	while(t--){
		string a;cin>>a;
		int c=0;
		for (int i = 0; i < a.size()-1; ++i)
		{
			if(a[i]!=a[i+1]){
				char aux=a[i];
				a[i]=a[i+1];
				a[i+1]=aux;
			}else{
				c++;
			}
		}
		if(c==a.size()-1){
			cout<<"NO\n";
		}else{
			cout<<"YES\n";
			cout<<a<<"\n";
		}
	}
	return 0;
}
