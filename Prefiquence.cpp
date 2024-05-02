#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)

/*
    Hello this is my code :). 
    I'm Topson/Desconocido/ElProsor 
    
    I'm learning competitive programming 
    
    long long day=20;

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
    Day: 21 
    ***********************

    DIV 3 LIVE......
*/


int main(int argc, char const *argv[])
{

  #ifndef ONLINE_JUDGE
    freopen("lectura.txt", "r", stdin);
    freopen("salida.txt", "w", stdout);
  #endif
  int casos;cin>>casos;
  while(casos--){
    int t1,t2;cin>>t1>>t2;
    string a,b;cin>>a>>b;
    int ca,cb; ca=cb=0; int k=0;
    while(ca<a.size() && cb<b.size()  ){
      if(a[ca]==b[cb]){
        k++;
        cb++;ca++;
      }else{
        cb++;
      }
    }
    cout<<k<<"\n";
  }
  


  return 0;
}