#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)

/*
    Hello this is my code :). 
    I'm Topson/Desconocido/ElProsor 
    
    I'm learning competitive programming 
    
    long long day=31

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
    Day: 32
    ***********************

*/


int main()
{

  #ifndef ONLINE_JUDGE
    freopen("lectura.txt", "r", stdin);
    freopen("salida.txt", "w", stdout);
  #endif
  int n;cin>>n;
  while(n--){
    int n,m,k;cin>>n>>m>>k;
    int x,y;cin>>x>>y; int ok=1;
    for (int i = 0; i < k; ++i)
    {
        int a,b;cin>>a>>b;
        if((abs(x-a)+abs(y-b))%2==0){
            ok=0;
        }
    }
    if(ok){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
  }
  return 0;
}