#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)

/*
    Hello this is my code :). 
    I'm Topson/Desconocido/ElProsor 
    
    I'm learning competitive programming 
    
    long long day=29

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
    Day: 30
    ***********************

*/


int main()
{

  #ifndef ONLINE_JUDGE
    freopen("lectura.txt", "r", stdin);
    freopen("salida.txt", "w", stdout);
  #endif
  int n;cin>>n; int s,t;cin>>s>>t; int res=-1;
  vector<int> v(n,0);
  for (int i = 0; i < n; ++i)
  {
    cin>>v[i];      
  }
  int sw=0;
  for (int i = 0; i < n && sw==0; ++i)
  {
      if(s==t){
        res=i;
        sw=1;
        continue;
      }
      s=v[s-1];
  }
  cout<<res<<"\n";
  return 0;
}