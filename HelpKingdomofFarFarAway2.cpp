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
  string cadena;cin>>cadena;
  int p=cadena.find('.');int sw=0;
  if(p==-1){
    p=cadena.size();
  }
  string res="";int c=0;
  int i=p-1;
  while(i>-1){
    if(i==0 && cadena[i]=='-'){
      sw=1;
      i--;
    }else{
      if(c==3){
        res=","+res;
        c=0;
      }else{
        res=cadena[i]+res;
        c++;
        i--;
      }
    }
  }
 
    if(cadena.find('.')==-1){
      res=""+res+".00";
    }else if(cadena.size()-cadena.find('.')>2){
      int aux=cadena.find('.');
      res=res+cadena[aux]+cadena[aux+1]+cadena[aux+2];
    }else if(cadena.size()-cadena.find('.')==2){
      res=res+cadena.substr(cadena.find('.'),cadena.size())+"0";
    }
    if(sw){
      res="($"+res+")";
    }else{
      res="$"+res;
    }
    cout<<res<<"\n";
    
  return 0;
}