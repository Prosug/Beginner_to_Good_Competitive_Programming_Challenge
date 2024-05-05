#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
/*
    Hello this is my code :). 
    I'm Topson/Desconocido/ElProsor 
    
    I'm learning competitive programming 
    
    long long day=23;

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
    Day: 24
    ***********************

    https://codeforces.com/contest/1957/problem/B
*/


int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
    freopen("lectura.txt", "r", stdin);
    freopen("salida.txt", "w", stdout);
	#endif
	fast_io;
	int d,sum;cin>>d>>sum;
	vector<pair<int,int>> valores(d);
	int sumMa=0;
	for (int i = 0; i < d; ++i)
	{
		cin>>valores[i].first; 
		cin>>valores[i].second;
		sumMa=sumMa+valores[i].second;
	}
	int ok=1; vector<int> respuesta;
	if(sumMa<sum){
		ok=0;
	}else{
		int parcial=0; int dif=sumMa-sum;
	   	for (int i = 0; i < d; ++i)
	   	{
			int aux=valores[i].second-valores[i].first;
			//cout<<aux<<":aux\n";
			if(dif>=aux){
				respuesta.push_back(valores[i].first);
				dif=dif-aux;
			}else if( dif !=0 &&  dif<aux){
				respuesta.push_back(valores[i].second-dif);
				dif=0;
			}else{
				respuesta.push_back(valores[i].second);
			}
	   	}
	   	if(dif!=0){
	   		ok=0;
	   	}

	}
	if(ok){
		cout<<"YES\n";
		
		for (int i = 0; i < respuesta.size(); ++i)
		{
		
			if(i==respuesta.size()-1){
				cout<<respuesta[i]<<"\n";
			}else{
				cout<<respuesta[i]<<" ";
			}
			
		}
	
	}else{
		cout<<"NO\n";
	}
	
	return 0;
}
