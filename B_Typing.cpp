#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)

/*
    Hello this is my code :). 
    I'm Topson/Desconocido/ElProsor 
    
    I'm learning competitive programming 
    
    long long day=22;

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
    Day: 23
    ***********************

    DIV 2 LIVE......
*/


int main()
{

  #ifndef ONLINE_JUDGE
    freopen("lectura.txt", "r", stdin);
    freopen("salida.txt", "w", stdout);
  #endif
  string a,b; cin>>a>>b;
  int i_a=0;int i_b=0;
  vector<int> valores;
  while(i_a<a.size() && i_b<b.size()){
    if(a[i_a]==b[i_b]){
      valores.push_back(i_b+1);
      i_a++;
    }
    i_b++;
  }
  for (int i = 0; i < valores.size(); ++i)
  {

    if(i==valores.size()-1){
      cout<<valores[i]<<"\n";
    }else{
      cout<<valores[i]<<" ";
    }
  }

  return 0;
}