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

    https://codeforces.com/contest/50/problem/A

*/
bool verificar(long long valor){
    int c=2;int d=0;
    while(c<valor && d==0){
        if(valor%c==0){
            d++;
        }
        c++;
    }
    if(d==0){
        return false;
    }
    return true;
}
int main()
{
    
    #ifndef ONLINE_JUDGE
     freopen("lectura.txt", "r", stdin);
     freopen("salida.txt", "w", stdout);
    #endif
    fast_io;
    int n;
    cin>>n;
    int a,b;a=4;b=4;
    while(a+b!=n || !verificar(b)){
        a+=1;
        if(!verificar(a)){
            a++;
        }
        b=n-a;
    }
    cout<<a<<" "<<b<<"\n";
 
    return 0;
}