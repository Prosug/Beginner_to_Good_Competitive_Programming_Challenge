#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)

/*
    Hello this is my code :). 
    I'm Topson/Desconocido/ElProsor 
    
    I'm learning competitive programming 
    
    long long day=19;

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
    Day: 20
    ***********************

    https://codeforces.com/contest/706/problem/B
*/


int main(int argc, char const *argv[])
{

  #ifndef ONLINE_JUDGE
    freopen("lectura.txt", "r", stdin);
    freopen("salida.txt", "w", stdout);
  #endif
  int n; cin>>n;
  vector<long long> valores(n,0);
  vector<long long> pre(100000,0);
  for (int i = 0; i < n; ++i)
  {
    cin>>valores[i];
  }

  sort(valores.begin(),valores.end());
  int c=0;int punt=0;
  int i=valores[0];
  //cout<<valores[0]<<":i\n";
  while(i<=valores[n-1]){
    if(valores[punt]==i){
      if(punt+1<n && valores[punt]!=valores[punt+1]){
        c++;
        pre[i]=c;
      }else{
        c++;
      }
      punt++;
    }else{
      pre[i]=c;
      i++;
    }
  }
  long long q;cin>>q;
  for (int i = 0; i < q; ++i)
  {
    long long valor;cin>>valor;
    if(valor>valores[n-1]){
      cout<<n<<"\n";
    }else{
      cout<<pre[valor]<<"\n";
    }
  }

  return 0;
}