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

    https://codeforces.com/contest/155/problem/A

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
    vector<long long> valores(n,0);
    for (int i = 0; i < n; ++i)
    {
        cin>>valores[i];
    }
    int minimo=valores[0];
    int maximo=valores[0];
    int incr=0;
    for (int i = 1; i < n; ++i)
    {
        if(valores[i]>maximo){
            incr++;
            maximo=valores[i];
        }else if(valores[i]<minimo){
            incr++;
            minimo=valores[i];
        }
    }
    cout<<incr<<"\n";
    return 0;
}