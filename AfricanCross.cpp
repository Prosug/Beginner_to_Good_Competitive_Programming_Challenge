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
*/
char mat[100][100];
int n,m;
bool recCol(int fila, int col){
	for (int i = 0; i < n; ++i)
	{
		if(i!=fila){
			if(mat[fila][col]!=mat[i][col]){
				continue;
			}else{
				return false;
			}
		}
	}
	return true;
}
bool recFila(int fila, int col){
	for (int i = 0; i < m; ++i)
	{
		if(i!=col){
			if(mat[fila][col]!=mat[fila][i]){
				continue;
			}else{
				return false;
			}
		}
	}
	return true;
}
int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
    freopen("lectura.txt", "r", stdin);
    freopen("salida.txt", "w", stdout);
	#endif
	fast_io;
	memset(mat,'.',sizeof(mat));
	cin>>n>>m;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j <m; ++j)
		{
			cin>>mat[i][j];
		}
	}
	string res="";
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if(recCol(i,j) && recFila(i,j)){
				res=res+mat[i][j];
			}
		}
	}
	cout<<res<<"\n";
	return 0;
}
