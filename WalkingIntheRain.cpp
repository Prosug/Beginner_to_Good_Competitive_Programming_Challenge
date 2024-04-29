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
    int n;cin>>n;
    vector<int> valores(n,0);
    for (int i = 0; i < n ; ++i)
    {
        cin>>valores[i];
    }
    int i=0;
    int res=min(valores[0],valores[n-1]);
    while(i<n-1){
        if(i+2<n){
            if(valores[i+1]>valores[i+2]){
                i++;
                res=min(res,valores[i]);
            }else{
                res=min(res,valores[i+2]);
                i+=2;
            }
        }
        else{
            i++;   
        }
    }
    cout<<res<<"\n";
    return 0;
}