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

    https://codeforces.com/contest/155/problem/B

*/
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("lectura.txt", "r", stdin);
    freopen("salida.txt", "w", stdout);
    #endif
    fast_io;
    int n;cin>>n;
    vector<int> ceros;
    vector<pair<int,int>>valores;
    for (int i = 0; i < n; ++i)
    {   
        int a,b;cin>>a>>b;
        if(b==0){
            ceros.push_back(a);
        }else{
            pair<int,int> aux;
            aux.first=b;aux.second=a;
            valores.push_back(aux);
        }
    }
    sort(valores.begin(),valores.end());
    reverse(valores.begin(),valores.end());
    sort(ceros.begin(),ceros.end());
    reverse(ceros.begin(),ceros.end());
    int res=0;int j=0;int cer=1;
    for (int i = 0; i < valores.size(); ++i)
    {
        cer=valores[i].first;
        res=res+valores[i].second;
        int aux=0;
        while(j<ceros.size() && aux<cer-1){
            res=res+ceros[j];
            j++;
            aux++;
        }
    }
    if(cer>0 && j<ceros.size()){
        res=res+ceros[j];
    }
    cout<<res<<"\n";
    return 0;
}