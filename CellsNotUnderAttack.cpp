#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)

/*
    Hello this is my code :). 
    I'm Topson/Desconocido/ElProsor 
    
    I'm learning competitive programming 
    
    long long day=33

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
    Day: 34
    ***********************

*/


int main()
{

  #ifndef ONLINE_JUDGE
    freopen("lectura.txt", "r", stdin);
    freopen("salida.txt", "w", stdout);
  #endif
  long long n,m;cin>>n>>m;
  set<long long> fila,col;
  long long res=n*n;
  for (int i = 0; i < m; ++i)
  {
    long long x,y;cin>>x>>y;
    if(fila.count(x) && col.count(y)){
        cout<<res<<' ';
        continue;
    }
    else if(!fila.count(x) && !col.count(y)){
        res=res-((n+n)-1-fila.size()-col.size());
    }else if(!fila.count(x)){
        res=res-(n-col.size());
    }else{
        res=res-(n-fila.size());
    }
    cout<<res<<' ';
    fila.insert(x);col.insert(y);
  }
  return 0;
}