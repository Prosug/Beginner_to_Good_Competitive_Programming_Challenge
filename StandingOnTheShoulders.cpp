#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)

/*
    Hello this is my code :). 
    I'm Topson/Desconocido/ElProsor 
    
    I'm learning competitive programming 
    
    long long day=22;

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
    Day: 23
    ***********************

    DIV 2 LIVE......
*/


int main()
{

  #ifndef ONLINE_JUDGE
    freopen("lectura.txt", "r", stdin);
    freopen("salida.txt", "w", stdout);
  #endif
  long long n;cin>>n;
  vector<pair<long long,long long>> valores(n);
  long long acumulada=0;
  for (int i = 0; i < n; ++i)
  {
    cin>>valores[i].first;
    acumulada=acumulada+valores[i].first;
    cin>>valores[i].second;
  }
  long long res=0;
  for (int i = 0; i < n; ++i)
  {
    res=max(res,(acumulada-valores[i].first)+valores[i].second);
  }
  cout<<res<<"\n";

  return 0;
}