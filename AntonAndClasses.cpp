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
  long long menor=1e10;long long m1=0;
  for (int i = 0; i < n; ++i)
  {
    long long a,b;cin>>a>>b;
    m1=max(m1,a);
    menor=min(menor,b);
  }
  //cout<<menor<<":menor\n";
  long long m;cin>>m;
  long long maximo=0;long long maximo2Dos=0;
  for (int i = 0; i < m; ++i)
  {
    long long a,b;cin>>a>>b;
    if(a>=menor){
      maximo=max(maximo,(a-menor));
    }
    if(b<=m1){
      maximo2Dos=max(maximo2Dos,(m1-b));
    }
  }
  cout<<max(maximo,maximo2Dos)<<"\n";
  return 0;
}