#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)

/*
    Hello this is my code :). 
    I'm Topson/Desconocido/ElProsor 
    
    I'm learning competitive programming 
    
    long long day=27;

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
    Day: 28
    ***********************

*/
int DetNumero(string a){
  
  int sw=1;
  char ant=a[0];int c=0;
  for (int i = 1; i < a.size(); i++)
  {
    if(a[i]!='-' && a[i]==ant){
      
      ant=a[i];
      c++;
      
    }
  }
  if(c==5){
    return 0;
  }
  ant=a[0]; c=0;
  for (int i = 1; i < a.size(); i++)
  {
    if(a[i]!='-' && ant>a[i]){
      ant=a[i];
      c++;
    }
  }
  if(c==5){
    return 1;
  }
  return 2;

}

int main()
{

  #ifndef ONLINE_JUDGE
    freopen("lectura.txt", "r", stdin);
    freopen("salida.txt", "w", stdout);
  #endif
  
  int n;cin>>n;
  vector<pair<int,string>> taxi;
  vector<pair<int,string>> pizza;
  vector<pair<int,string>> chicha;
  map<string,int> nombres;
  vector<string> nombreDos;
  int j=0;
  while(n--){
    int c;cin>>c;
    string nombre;cin>>nombre;
    nombres[nombre]=j;
    nombreDos.push_back(nombre);
    int t,p,chi;t=p=chi=0;
    while(c--){
      string numero;cin>>numero;
      int v=DetNumero(numero);
      if(v==0){
        t++;
      }else if(v==1){
        p++;
      }else{
        chi++;
      }
      
    }
    j++;
    pair<int,string> ta;
    ta.first=t;ta.second=nombre;
    pair<int,string> pi;
    pi.first=p;pi.second=nombre;
    pair<int,string> ch;
    ch.first=chi;ch.second=nombre;
    taxi.push_back(ta);
    pizza.push_back(pi);
    chicha.push_back(ch);
    sort(taxi.begin(),taxi.end());
    sort(pizza.begin(),pizza.end());
    sort(chicha.begin(),chicha.end());
    //cout<<taxi[0].first<<"\n";
    
  }

  vector<int> res;
  int contador=taxi.size()-1;
    cout<<"If you want to call a taxi, you should call: ";
    int sw=0;
    while(contador>-1 && sw==0){
      res.push_back(nombres[taxi[contador].second]);
      if(taxi[contador].first==taxi[contador-1].first){
        contador--;
      }else{
        sw=1;
      }
    }
  sort(res.begin(),res.end());
  for (int i = 0; i < res.size(); ++i)
  {
    cout<<nombreDos[res[i]];
    if(i<res.size()-1){
      cout<<", ";
    }else{
      cout<<'.';
    }
  }
  cout<<"\n";
  res.clear();
  contador=pizza.size()-1;
    cout<<"If you want to order a pizza, you should call: ";
    sw=0;
    while(contador>-1 && sw==0){
      res.push_back(nombres[pizza[contador].second]);
      if(pizza[contador].first==pizza[contador-1].first){
        contador--;
      }else{
        sw=1;
      }
    }
  sort(res.begin(),res.end());
  for (int i = 0; i < res.size(); ++i)
  {
    cout<<nombreDos[res[i]];
    if(i<res.size()-1){
      cout<<", ";
    }else{
      cout<<'.';
    }
  }
  cout<<"\n";
  res.clear();
  contador=chicha.size()-1;
    cout<<"If you want to go to a cafe with a wonderful girl, you should call: ";
    sw=0;
    while(contador>-1 && sw==0){
      res.push_back(nombres[chicha[contador].second]);
      if(chicha[contador].first==chicha[contador-1].first){
        contador--;
      }else{
        sw=1;
      }
    }
  sort(res.begin(),res.end());
  for (int i = 0; i < res.size(); ++i)
  {
    cout<<nombreDos[res[i]];
    if(i<res.size()-1){
      cout<<", ";
    }else{
      cout<<'.';
    }
  }
  return 0;
}