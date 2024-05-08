#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)

/*
    Hello this is my code :). 
    I'm Topson/Desconocido/ElProsor 
    
    I'm learning competitive programming 
    
    long long day=26;

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
    Day: 277
    ***********************

*/

long long potencia(long long a,long long b,long long m){
  if(b==0){
    return 1;
  }
  return (((potencia((a*a)%m,b/2,m))*(b&1?a:1))%m);
}
long long calcular(string valor){
  long long c=0;
  long long res=0;
  for (int i = valor.size()-1; i>-1; --i)
  {
    int d=valor[i]-'0';
    if(d!=0){
        res=((res)%1000003+(potencia(2,c,1000003)))%1000003;
    }
    c++;
  }
  return res;
}


int main()
{

  #ifndef ONLINE_JUDGE
    freopen("lectura.txt", "r", stdin);
    freopen("salida.txt", "w", stdout);
  #endif
  map<char,string> val;
  val['>']="1000";
  val['<']="1001";
  val['+']="1010";
  val['-']="1011";
  val['.']="1100";
  val[',']="1101";
  val['[']="1110";
  val[']']="1111";
  string cadena;cin>>cadena;
  string nuevo="";
  for (int i = 0; i < cadena.size(); ++i)
  {
    nuevo=nuevo+val[cadena[i]];
  }

  cout<<calcular(nuevo)<<"\n";
  return 0;
}