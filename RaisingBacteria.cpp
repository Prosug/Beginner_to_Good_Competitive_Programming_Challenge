#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)

/*
    Hello this is my code :). 
    I'm Topson/Desconocido/ElProsor 
    
    I'm learning competitive programming 
    
    long long day=18;

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
    Day: 18
    ***********************

    https://codeforces.com/contest/579/problem/A
*/
long long f_pow(long long base,long long exp){
  long long res=1;
  while(exp>0){
    int d=exp&1;
    if(d>0){
      res=res*base;
    }
    base=base*base;
    exp=exp>>1;
  }
  return res;
}

int main(int argc, char const *argv[])
{

  #ifndef ONLINE_JUDGE
    freopen("lectura.txt", "r", stdin);
    freopen("salida.txt", "w", stdout);
  #endif
    long long valor;
    cin>>valor;
  
    long long c=0;
    while(valor>0){
      c++;
      int i=0;
      while(f_pow(2,i)<=valor){
        i++;
      }
      valor=valor-f_pow(2,i-1);
    }
    cout<<c<<"\n";
  
    return 0;
}