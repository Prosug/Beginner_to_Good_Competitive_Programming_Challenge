#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
 
/*
    Hello this is my code :). 
    I'm Topson/Desconocido/ElProsor 
    
    I'm learning competitive programming 
    
    long long day=37
 
    date dayCodeAnt=localdate()-1;
    date dayCode=localdate();
    flag;
    if(dayCodeAnt!=dayCode){
        flag=1;
    }
    if(answer_code==accepted && flag){
        flag=0;
        day++;
        dayCodeAnt++;
    }
    cout<<"Day: "<<day<<"\n";
 
    ***********************
    Day: 38
    ***********************
 
*/
bool verificar(long long num){
    bool res=true;
    int c=0;
    while(num>0){
        int d=num%10;
        num=num/10;
        c=c+d;
    }
    if(c!=10){
        res=false;
    }
    return res;
}


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("lectura.txt", "r", stdin);
    freopen("salida.txt", "w", stdout);
  #endif
    int k;cin>>k;
    vector<long long> v;
    long long c=1;
    while(v.size()!=k){
        long long valor=(9*c)+1;
        if(verificar(valor)){
            v.push_back(valor);
        }
        c++;
    }
    cout<<v[k-1]<<'\n';
  return 0;
}