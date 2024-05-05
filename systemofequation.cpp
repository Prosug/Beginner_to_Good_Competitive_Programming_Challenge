#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)

/*
    Hello this is my code :). 
    I'm Topson/Desconocido/ElProsor 
    
    I'm learning competitive programming 
    
    long long day=21;

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
    Day: 22
    ***********************

  
*/


int main(int argc, char const *argv[])
{

  #ifndef ONLINE_JUDGE
    freopen("lectura.txt", "r", stdin);
    freopen("salida.txt", "w", stdout);
  #endif
  int n,m;
  cin>>n>>m;
  int b=0;int res=0;
  while((b*b)<=m && b<=n){
    int r1=n-b;
    int r2=m-(b*b);
    if((r2*r2)==r1){
      res++;
    }
    b++;
  }
  cout<<res<<"\n";


  return 0;
}