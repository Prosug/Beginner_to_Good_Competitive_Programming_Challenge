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

    https://codeforces.com/contest/362/problem/B

*/
int main()
{
     #ifndef ONLINE_JUDGE
     freopen("lectura.txt", "r", stdin);
     freopen("salida.txt", "w", stdout);
    #endif
    fast_io;
    long long n;cin>>n;
    long long m;cin>>m;
    int ok=1;
    if(m==0){
        ok=1;
    }else{
        vector<long long>valores(m,0);
        for (int i = 0; i < m; ++i)
        {
            cin>>valores[i];
        }
        sort(valores.begin(),valores.end());
 
        if( valores[0]==1 || valores[m-1]==n){
            ok=0;
        }
        for (int i = 0; i < m-1 && ok==1; ++i)
        {
            if((valores[i+1]-valores[i])>=2 || (i+2<m && (valores[i+2]-valores[i+1]>=2)) || valores[i]+2==n){
                continue;
            }else{
                ok=0;
            }
        }
    }
    if(ok){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    return 0;
}