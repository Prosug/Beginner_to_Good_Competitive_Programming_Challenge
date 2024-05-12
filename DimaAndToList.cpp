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
      int n,k;cin>>n>>k;
      vector<long long> v(n);
      for (int i = 0; i < n ; ++i)cin>>v[i];
     
      long long res=0;long long minimmo=1e10;
      for (int i = 0; i <k; ++i)
      {
          long long c=i;long long par=0;
          while(c<n){
            par=par+v[c];
            c+=k;
          }
          if(par<minimmo){
            res=i;
            minimmo=par;
          }
          
      }
      cout<<res+1<<"\n";
  return 0;
}