#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)

int main(int argc, char const *argv[])
{
	
	#ifndef ONLINE_JUDGE
    freopen("lectura.txt", "r", stdin);
    freopen("salida.txt", "w", stdout);
	#endif
	int n,m;
	cin>>n>>m;
	set<int> vPos;
	for (int i = 0; i < n; ++i)
	{
		int valor;
		cin>>valor;
		vPos.insert(valor);
	}
	int sw=0;
	if((*(vPos.begin())*2>*(--vPos.end()))){
		vPos.insert(*(vPos.begin())*2);
	}
	
	for (int i = 0; i < m && sw==0; ++i)
	{
		int valor;
		cin>>valor;
		if(valor<=*(--vPos.end())){
			sw=1;
		}
	}
	if(sw==0){
		cout<<*(--vPos.end())<<"\n";
	}else{
		cout<<"-1\n";
	}

	return 0;
}
