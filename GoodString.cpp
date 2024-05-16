#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)

/*
    Hello this is my code :). 
    I'm Topson/Desconocido/ElProsor 
    
    I'm learning competitive programming 
    
    long long day=34

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
    Day: 35
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
    int tam;cin>>tam;
    string cadena;
    cin>>cadena;
    if(cadena[0]=='>' || cadena[tam-1]=='<'){
        cout<<0<<"\n";
    }else{
        int r1=0;int r2=1; int aux=tam-1;
        while(cadena[r1]==cadena[r1+1] && r1<cadena.size()){
            r1++;
        }
        while(cadena[aux]==cadena[aux-1] && aux>-1){
            r2++;
            aux--;
        }
        r1++;
    
        //cout<<r1<<" "<<r2<<": valores\n";
        cout<<min(r1,r2)<<"\n";
    }
  }
  return 0;
}