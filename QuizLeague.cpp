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

    

*/
int main(int argc, char const *argv[])
{
  
    
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
    
    int n,m; cin>>n>>m;
    vector<int> valores(n,0);
    for (int i = 0; i < n; ++i)
    {
        cin>>valores[i];
    }
    int k=m-1;
    while(valores[k]!=1){
        //cout<<valores[k]<<"\n";
        k++;
        if(k==n){
            k=0;
        }
    }
    cout<<k+1<<"\n";
    
    return 0;
}