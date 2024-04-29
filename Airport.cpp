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

    https://codeforces.com/contest/218/problem/B

*/
int maximoValor(vector<int> &valores, int n){
    int i=0;int nroPas=n;
    int res=0;
    int ceros=0;int sw=0;
    while(nroPas>0){
        res=res+valores[i];
        valores[i]--;
        nroPas--;
        sort(valores.begin(),valores.end());
        reverse(valores.begin(),valores.end());
    }
    return res;
}
int minimoValor(vector<int> valores, int n){
    int i=0;int nroPas=n;
    int res=0;
    while(nroPas>0){
        res=res+valores[i];
        valores[i]--;
        nroPas--;
        if(valores[i]>0){
            continue;
        }else{
            i++;
        }
        if(i==valores.size()){
            i=0;
        }
    }
    return res;
}
int main(int argc, char const *argv[])
{
    
    #ifndef ONLINE_JUDGE
    freopen("lectura.txt", "r", stdin);
    freopen("salida.txt", "w", stdout);
    #endif
    fast_io;
    int n,m;
    cin>>n>>m;
    vector<int> valores(m,0);
 
    for (int i = 0; i < m; ++i)
    {
        cin>>valores[i];
        
    }
 
    sort(valores.begin(),valores.end());
    int minimoV=minimoValor(valores,n);
    reverse(valores.begin(),valores.end());
    int maximoV=maximoValor(valores,n);
    cout<<maximoV<<" "<<minimoV<<"\n";
    return 0;
}