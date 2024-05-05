#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)

/*
    Hello this is my code :). 
    I'm Topson/Desconocido/ElProsor 
    
    I'm learning competitive programming 
    
    long long day=20;

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
    Day: 21 
    ***********************

    DIV 3 LIVE......
*/


int main(int argc, char const *argv[])
{

  #ifndef ONLINE_JUDGE
    freopen("lectura.txt", "r", stdin);
    freopen("salida.txt", "w", stdout);
  #endif
  int n; cin>>n;
  while(n--){
    int valor;cin>>valor;
    int maximo=0;int v=1;
    int res=0;
    while(v<valor){
      int aux=__gcd(valor,v)+v;
      if(aux>maximo){
        maximo=aux;
        res=v;
      }
      v++;
    }
    cout<<res<<"\n";
    
  }

  return 0;
}