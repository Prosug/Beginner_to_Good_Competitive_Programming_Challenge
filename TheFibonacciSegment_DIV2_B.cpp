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

    https://codeforces.com/contest/365/problem/B

*/
int main()
{
    
    #ifndef ONLINE_JUDGE
     freopen("lectura.txt", "r", stdin);
     freopen("salida.txt", "w", stdout);
    #endif
    fast_io;
    int n;
    cin>>n;
    if(n==1){
        long long valor;cin>>valor;
        cout<<1<<"\n";
    }else{
        vector<long long> valores(n,0);
        for (int i = 0; i < n; ++i)
        {
            cin>>valores[i];
        }
        long long maximo=2;
        long long tem=2;
        for (int i = 2; i < n; ++i)
        {
            if(valores[i]==(valores[i-1]+valores[i-2])){
                tem++;
            }else{
                maximo=max(tem,maximo);
                tem=2;
            }
        }
        maximo=max(maximo,tem);
        cout<<maximo<<"\n";
    }
    
    return 0;
}