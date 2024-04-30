#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)

/*
    Hello this is my code :). 
    I'm Topson/Desconocido/ElProsor 
    
    I'm learning competitive programming 
    
    long long day=19;

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
    Day: 19
    ***********************

    https://codeforces.com/contest/579/problem/A
*/
int difBits(long long a,long long b, int n){
  int c=0;
  int res=0;
  while( c<n){
    int da=a&1;
    int db=b&1;
    if(da!=db){
      res++;
    }
    a=a>>1;
    b=b>>1;
    c++;
  }
  return res;
}

int main(int argc, char const *argv[])
{

  #ifndef ONLINE_JUDGE
    freopen("lectura.txt", "r", stdin);
    freopen("salida.txt", "w", stdout);
  #endif
  long long n;cin>>n;
  vector<long long> valores(n,0);
  for (int i = 0; i < n; ++i)
  {
    cin>>valores[i];
  }
  long long res=abs(valores[0]);
  for (int i = 1; i < n; ++i)
  {
    if(valores[i]>valores[i-1]){
      res=res+(valores[i]-valores[i-1]);
    }else{
      if(valores[i]>=0){
        res=res+(valores[i-1]-valores[i]);
      }else{
        res=res+(abs(valores[i])+valores[i-1]);
      }
    }
  }
  cout<<res<<"\n";
  return 0;
}