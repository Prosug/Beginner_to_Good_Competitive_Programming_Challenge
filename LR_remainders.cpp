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
        flag=0;
    }
    if(answer_code==accepted && flag==0){
        flag=1;
        day++;
        dayCodeAnt++;
    }
    cout<<"Day: "<<day<<"\n";

    ***********************
    Day: 38
    ***********************

*/


int main()
{

  #ifndef ONLINE_JUDGE
    freopen("lectura.txt", "r", stdin);
    freopen("salida.txt", "w", stdout);
  #endif
  int casos;cin>>casos;
  while(casos--){
    long long n,m;
    cin>>n>>m;
    vector<long long> v(n);
    for (int i = 0; i < n; ++i)cin>>v[i];
    string cad;cin>>cad;
    int pizq=0; int pder=n-1;
    vector<int> pos;
    for (int i = 0; i < cad.size(); ++i)
    {
        if(cad[i]=='L'){
            pos.push_back(pizq);
            pizq++;
        }else{
            pos.push_back(pder);
            pder--;
        }
    }
    reverse(pos.begin(),pos.end());
    long long par=v[pos[0]]%m;
    vector<long long> res;
    res.push_back(par);
    for (int i = 1; i < n; ++i)
    {   
        res.push_back((v[pos[i]]*par)%m);
        par=(v[pos[i]]*par)%m;
    }
    reverse(res.begin(),res.end());
    for (int i = 0; i < n; ++i)
    {
        cout<<res[i]<<' ';
    }
    cout<<"\n";
  }
  return 0;
}