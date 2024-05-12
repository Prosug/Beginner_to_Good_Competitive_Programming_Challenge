#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)

/*
    Hello this is my code :). 
    I'm Topson/Desconocido/ElProsor 
    
    I'm learning competitive programming 
    
    long long day=30

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
    Day: 31
    ***********************

*/


int main()
{

  #ifndef ONLINE_JUDGE
    freopen("lectura.txt", "r", stdin);
    freopen("salida.txt", "w", stdout);
  #endif
  int n,m; cin>>n>>m;
  vector<long long> v(n);
  for (int i = 0; i < n; ++i) cin>>v[i];
  int j=0;
  for (int i = 0; i < m; ++i)
  {
    long long valor;cin>>valor;
    if(j<v.size() && valor>=v[j]){
      j++;
      n--;
    }
  }
  cout<<n<<"\n";
  return 0;
}