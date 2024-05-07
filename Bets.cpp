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
  int n,m;cin>>n>>m; int res=0;
  vector<int> seciones(101,0);
  vector<int> apuesta(101,0);
  for (int i = 0; i < m; ++i)
  {
    int l,r,t,c;cin>>l>>r>>t>>c;
    for (int j = l; j <=r; ++j)
    {
      if(t<seciones[j]|| seciones[j]==0){
        res=res-apuesta[j]; res=res+c;
        apuesta[j]=c; seciones[j]=t;
      }
    }
  }
  cout<<res<<"\n";
  return 0;
}