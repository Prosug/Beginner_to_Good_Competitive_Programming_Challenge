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
  string a,b;
  cin>>a>>b;
  map<char,int> me;
  map<char,int> need;
  for (int i = 0; i < a.size(); ++i) me[a[i]]++;
  for (int i = 0; i < b.size(); ++i)need[b[i]]++;
  int ok=1;
  int res=0;
  for(auto x:need){
    if(me.count(x.first)){
        if(me[x.first]>=x.second){
            res=res+x.second;
        }else{
            res=res+me[x.first];
        }
    }else{
        ok=0;
    }
  }
  if(ok){
    cout<<res<<"\n";
  }else{
    cout<<-1<<"\n";
  }
  return 0;
}