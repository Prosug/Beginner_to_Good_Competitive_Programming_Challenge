#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
/*
    Hello this is my code :). 
    I'm Topson/Desconocido/ElProsor 
    
    I'm learning competitive programming 
    
    long long day=26;

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
    Day: 27
    ***********************


*/


int main(int argc, char const *argv[])
{

	#ifndef ONLINE_JUDGE
    freopen("lectura.txt", "r", stdin);
    freopen("salida.txt", "w", stdout);
	#endif
	fast_io;
	int n,m;cin>>n>>m;
	vector<set<int>>valores(n+1);
	for (int i = 0; i < m; ++i)
	{
		int a,b;cin>>a>>b;
		valores[a].insert(b);
		valores[b].insert(a);
	}
	int sw=1;
	queue<int> aux;
	int c=0;
	while(sw){
		sw=0;
		for (int i = 1; i <=valores.size(); ++i)
		{
			if(valores[i].size()==1){
				aux.push(i);
				sw=1;
			}
		}
		while(!aux.empty() && sw==1){
			int v=aux.front();
			aux.pop();
			int a=*(valores[v].begin());
			valores[a].erase(v);
			valores[v].clear();
		}
		if(sw){
			c++;
		}
	}
	cout<<c<<"\n";


	return 0;
}
