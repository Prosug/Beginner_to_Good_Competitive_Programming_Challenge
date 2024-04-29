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
char valores[10][10];
int n,m; int c=0;
bool preguntar(int i,int j){
    bool res=false;
    if(i-1>-1){
        res=valores[i-1][j]=='P';
    }
    if(i+1<n && !res){
        res=valores[i+1][j]=='P';
    }
    if(j-1>-1 && !res){
        res=valores[i][j-1]=='P';
    }
    if(j+1<m && !res){
        res=valores[i][j+1]=='P';
    }
    return res;
}

void recorrido(){
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if(valores[i][j]=='W' &&preguntar(i,j) ){
                c++;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
     freopen("lectura.txt", "r", stdin);
     freopen("salida.txt", "w", stdout);
    #endif
    fast_io;
    cin>>n>>m;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin>>valores[i][j];
        }
    }
    recorrido();
    cout<<c<<"\n";

	return 0;
}