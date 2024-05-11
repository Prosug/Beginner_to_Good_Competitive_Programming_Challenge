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
			int ok=0;
			int a,b,c,d;cin>>a>>b>>c>>d;
			int a1=min(a,b);
			int b1=max(a,b);
			int c1=min(c,d);
			int d1=max(c,d);
			if(c1>a1 && d1>b1 && b1>c1){
				ok=1;
			}else if(c1<a1 && d1>a1 && d1<b1){
				ok=1;
			}

			if(!ok){
				cout<<"NO\n";
			}else{
				cout<<"YES\n";
				
			}
		}
		return 0;
	}
