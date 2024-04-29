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

    https://codeforces.com/contest/242/problem/B

*/
int main(int argc, char const *argv[])
{
   
   #ifndef ONLINE_JUDGE
     freopen("lectura.txt", "r", stdin);
     freopen("salida.txt", "w", stdout);
    #endif
    long long n;cin>>n;
 
   
    vector<pair<pair<long long,long long>,int>>valores(n);
    for (int i = 0; i < n; ++i)
    {
        cin>>valores[i].first.first;
        cin>>valores[i].first.second;
        valores[i].second=i+1;
    }
    sort(valores.begin(),valores.end());
    long long res=valores[0].second;
    long long vMin=valores[0].first.first; 
    long long vMax=valores[0].first.second; 
    for (int i = 1; i < n && res!=-1; ++i)
    {
        //cout<<valores[i].first.first<<" "<<valores[i].first.second<<"\n";
        if(vMin==valores[i].first.first && vMax<valores[i].first.second){
            vMax=valores[i].first.second;
            res=valores[i].second;
        }else if(vMin<=valores[i].first.first && vMax>= valores[i].first.second){
            continue;
        }else{
            res=-1;
        }
    }
    cout<<res<<"\n";
    
    return 0;
}