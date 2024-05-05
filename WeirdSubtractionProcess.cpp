#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)

/*
    Hello this is my code :). 
    I'm Topson/Desconocido/ElProsor 
    
    I'm learning competitive programming 
    
    long long day=22;

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
    Day: 23
    ***********************

    DIV 2 LIVE......
*/

long long F_pow(long long base,long long exp){
  long long res=1;
  while(exp>0){
    int d=exp&1;
    if(d>0){
      res=base*res;
    }
    base=base*base;
    exp=exp>>1;
  }
  return res;
}
int main()
{

  #ifndef ONLINE_JUDGE
    freopen("lectura.txt", "r", stdin);
    freopen("salida.txt", "w", stdout);
  #endif
  long long a,b;cin>>a>>b;int sw=0;
  while(a!=0 && b!=0 && sw==0 && (b*2<=a || a*2<=b)){
    long long i=0;
    int sw=0;
    while(i<65 && b*(F_pow(2,i))<=a){
      i++; 
    }
    i--;
    if(b*(F_pow(2,i))<=a){
      a=a-(b*(F_pow(2,i)));
    }
    i=0;
    while(i<65 && a*(F_pow(2,i))<=b){
      i++;
    }
    i--;
    if(a*(F_pow(2,i))<=b && i!=0){
      b=b-a*(F_pow(2,i)); 
    }else{
      sw=1;
    }
    //cout<<a<<" "<<b<<"\n";
  }
  cout<<a<<" "<<b<<"\n";
  return 0;
}