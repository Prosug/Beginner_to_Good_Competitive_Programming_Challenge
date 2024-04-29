#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
/*
    Hello this is my code :). 
    I'm Topson/Desconocido/ElProsor 
    
    I'm learning competitive programming 
    
    long long day=18;

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
    Day: 18
    ***********************

    https://codeforces.com/contest/1957/problem/B
*/

int sw=0;
int nroDig=0;
void  contandoUnos(long long valor){
	while(valor>0){
		int d=valor&1;
		nroDig++;
		if(d==0){
			sw=1;
		}
		valor=valor>>1;
	}
	
}
long long f_pow(long long base, long long exp){
	long long res=1;
	while(exp>0){
		int d=exp&1;
		if(d>0){
			res=res*base;
		}
		base=base*base;
		exp=exp>>1;
	}
	return res;
}
long long convertirDecimal(long long numeroUnos){
	long long res=0;
	for (int i = 0; i < numeroUnos; ++i)
	{
		res=res+f_pow(2,i);
	}
	return res;
}
int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
    freopen("lectura.txt", "r", stdin);
    freopen("salida.txt", "w", stdout);
	#endif
	
   	long long casos; cin>>casos;
   	while(casos--){
   		long long n,k;cin>>n>>k;
   		if(n==1){
   			cout<<k<<"\n";
   		}else{
   			sw=0;
   			nroDig=0;
   			contandoUnos(k);
   			if(sw==0){
   				cout<<k<<" "<<"0";
   			}else{
   				long long valor=convertirDecimal(nroDig-1);
   				cout<<valor<<" "<<k-valor;
   			}
   			for (int i = 0; i < n-2; ++i)
   			{
   				cout<<" 0";
   			}
   			cout<<"\n";
   		}
   	}
	return 0;
}
