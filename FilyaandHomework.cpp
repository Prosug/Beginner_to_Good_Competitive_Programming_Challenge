#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)

/*
    Hello this is my code :). 
    I'm Topson/Desconocido/ElProsor 
    
    I'm learning competitive programming 
    
    long long day=34

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
    Day: 35
    ***********************

*/


int main()
{

  #ifndef ONLINE_JUDGE
    freopen("lectura.txt", "r", stdin);
    freopen("salida.txt", "w", stdout);
  #endif
  int n;cin>>n;
  set<long long> v;
  vector<long long> aux;
  for (int i = 0; i < n; ++i)
  {
    long long valor;cin>>valor;
    if(!v.count(valor)){
        aux.push_back(valor);
    }
    v.insert(valor);
  }
  sort(aux.begin(),aux.end());
  if(v.size()==3 && abs(aux[0]-aux[1])==abs(aux[1]-aux[2])){
    cout<<"YES\n";
  }else if(v.size()<3){
    cout<<"YES\n";
  }
  else{
    cout<<"NO\n";
  }
  return 0;
}