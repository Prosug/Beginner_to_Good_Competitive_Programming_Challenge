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

	#ifndef ONLINE_JUDGE
    freopen("lectura.txt", "r", stdin);
    freopen("salida.txt", "w", stdout);
	#endif
	fast_io;
	int n;cin>>n; int p1,p2;p1=p2=0;
	for (int i = 0; i < n; ++i)
	{
		int valor;cin>>valor;
		if(valor==1){
			p1=i+1;
		}
		if(valor==n){
			p2=i+1;
		}
	}
	int res=0;
	
	if(p1>p2){
		if((n-p1+1)>=p2){
			res=n-p2;
		}else{
			res=p1-1;
		}
	}else{
		if((n-p2+1)>=p1){
			res=n-p1;
		}else{
			res=p2-1;
		}
	}
	cout<<res<<"\n";
	return 0;
}
