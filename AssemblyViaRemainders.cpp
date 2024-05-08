#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)

/*
    Hello this is my code :). 
    I'm Topson/Desconocido/ElProsor 
    
    I'm learning competitive programming 
    
    long long day=25;

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
    Day: 26
    ***********************

*/


int main()
{

  #ifndef ONLINE_JUDGE
    freopen("lectura.txt", "r", stdin);
    freopen("salida.txt", "w", stdout);
  #endif
  int n;cin>>n;

  for (int i = 0; i < n; ++i)
    {
      int m;cin>>m;
      vector<int> valores(m-1);
      vector<long long> respuesta;
      for (int i = 0; i < m-1; ++i)
      {
        cin>>valores[i];
      }
      for (int i = 0; i < m-1; ++i)
      {
        if(i==0){
            respuesta.push_back(10000);
        }
        respuesta.push_back(valores[i]+respuesta[i]);
      }
      for (int i = 0; i < respuesta.size(); ++i)
      {
        if(i==respuesta.size()-1){
          cout<<respuesta[i]<<"\n";
        }else{
          cout<<respuesta[i]<<" ";
        }
      }
    
    }  
  return 0;
}