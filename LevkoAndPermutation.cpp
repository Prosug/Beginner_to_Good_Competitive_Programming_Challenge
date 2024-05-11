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
  long long n,k;cin>>n>>k;
  if(n-1>=k){
    cout<<n-k;
    for (int i = 1; i <=(n-k)-1; ++i)
    {
        cout<<' '<<i;
    }
    for (int i =(n-k)+1; i <=n; ++i)
    {
        cout<<' '<<i;
    }
    cout<<"\n";
  }else{
    cout<<"-1\n";
  }

  return 0;
}