#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)

/*
    Hello this is my code :). 
    I'm Topson/Desconocido/ElProsor 
    
    I'm learning competitive programming 
    
    long long day=27;

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
    Day: 28
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
    vector<int> res;
    string a;cin>>a;
    int sw=0;int largo=0;
    int c=0;
    for (int i = 0; i < a.size()-1; ++i)
    {
      if(a[i]=='1' && a[i]!=a[i+1] && sw==0){
        res.push_back(0);
      }else if(a[i]=='0'){
        c++;     
        if(a[i]!=a[i+1]){
          c++;
          sw=1;
        }    
      }else if(sw){
        if(a[i]==a[i+1]){
          c++;
        }else{
          res.push_back(c);
          largo=max(largo,c);
          sw=0;
          c=0;
        }
      }

    }
    if(sw==1 && a[a.size()-1]!='0'){
      largo=max(largo,c);
      res.push_back(c);
    }else{
      res.push_back(0);
    }
  
    int ans=0;sw=0;
    for (int i = 0; i < res.size(); ++i)
    {
      if(res[i]==largo && largo!=0){
        if(sw){
          ans+=2;
        }else{
          ans+=1;
          sw=1;
        }
      }else if(res[i]!=0){
        ans+=2;
      }else{
        ans+=1;
      }
    }
    cout<<ans<<"\n";
  }
  return 0;
}