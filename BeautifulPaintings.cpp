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
  map<int,int> v;
  for (int i = 0; i < n; ++i)
  {
    int valor;cin>>valor;
    v[valor]++;
  }
  int c=0;int res=0;
  while(c!=v.size()){
    c=0;
    for(auto x:v){
        if(x.second!=0){
            res++;
            v[x.first]=x.second-1;
        }else{
            c++;
        }
    }
    if(c!=v.size()){
        res--;
    }
  }
  cout<<res<<"\n";
  return 0;
}