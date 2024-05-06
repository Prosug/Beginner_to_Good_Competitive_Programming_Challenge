#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
/*
    Hello this is my code :). 
    I'm Topson/Desconocido/ElProsor 
    
    I'm learning competitive programming 
    
    long long day=24;

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
    Day: 25
    ***********************


*/
double calDisPU(long long a,long long b,long long x,long long y){
	return sqrt(pow(x-a,2)+pow(y-b,2));
}

int main(int argc, char const *argv[])
{
	//f=p[i]/a+sqrt((c-p[i])*(c-p[i])+d*d)/b;
	#ifndef ONLINE_JUDGE
    freopen("lectura.txt", "r", stdin);
    freopen("salida.txt", "w", stdout);
	#endif
	fast_io;
	int n,k; cin>>n>>k;
	vector<int>v(n,0);
	for (int i = 0; i < n; ++i)cin>>v[i];
	sort(v.begin(),v.end());
	int c=0;int res=0;int sw=0;
	while(c!=n){
		sw=0;
		c=1;
		for (int i = 0; i < n-1; ++i)
		{
			if(v[i]==v[i+1]){
				c++;
			}else{
				sw=1;
				c=1;
				if(v[i]<k){
					v[i]+=1; 
				}
			}
		}
		if(sw==1){
			if(v[n-1]<k){
				v[n-1]+=1;
			}
		}else if(v[n-1]!=k){
			if(v[n-1]<k){
				v[n-1]+=1;
			}
			c=0;
		}
		
		res++;
	}
	if(res!=0){
		res--;
	}
	
	cout<<res<<"\n";
	return 0;
}
