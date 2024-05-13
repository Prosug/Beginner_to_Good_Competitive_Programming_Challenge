#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)

/*
    Hello this is my code :). 
    I'm Topson/Desconocido/ElProsor 
    
    I'm learning competitive programming 
    
    long long day=31

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
    Day: 32
    ***********************

*/


int main()
{

  #ifndef ONLINE_JUDGE
    freopen("lectura.txt", "r", stdin);
    freopen("salida.txt", "w", stdout);
  #endif
  int n;cin>>n;
  vector<pair<int,int>> v(n);
  map<int,int> home;map<int,int>away;
  for (int i = 0; i < n; ++i)
  {
    int a,b;cin>>a>>b;
    pair<int,int> aux;
    aux.first=a; aux.second=b;
    v[i]=aux;
    home[a]++;away[b]++;
  }
  for (int i = 0; i < n; ++i)
  {
      cout<<(n-1)+home[v[i].second]<<' '<<(n-1)-home[v[i].second]<<"\n";
     
  }
  return 0;
}