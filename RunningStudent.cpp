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
	double n,vb,ve; cin>>n>>vb>>ve;
	vector<double> valores(n,0);
	for (int i = 0; i < n; ++i)
	{
		cin>>valores[i];
	}
	double x,y;cin>>x>>y; 
	double minimo=1e18;long long res=0;

	double distanciaMin=1e18;
	for (int i = 1; i < n; ++i)
	{
		
		double partiempo=abs(calDisPU(valores[i],0,x,y)/ve)+(valores[i]/vb);
		//cout<<partiempo<<":par---- "<<i+1<<"\n";
		if(partiempo<minimo){
			minimo=partiempo;
			res=i+1;
			distanciaMin=calDisPU(valores[i],0,x,y);
		}else if(partiempo==minimo){
			long long a=calDisPU(valores[i],0,x,y);
			if(a<distanciaMin){
				res=i+1;
				distanciaMin=a;
			}
			//cout<<(calcularDistancia(valores[i],0,xaux,y))+valores[i]<<":dis i\n";	
		}
		//cout<<distanciaMin<<":distanciaMin\n";
	}
	cout<<res<<"\n";
	
	return 0;
}
