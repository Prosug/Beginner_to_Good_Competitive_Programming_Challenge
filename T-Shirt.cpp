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

    https://codeforces.com/contest/46/problem/B
*/
int Verificando(vector<pair<string,int>> &valores,string talla){
  for (int i = 0; i < valores.size(); ++i)
  {
    if(valores[i].first == talla){
      return i;
    }
  }
  return -1;
}
bool Pregunta(vector<pair<string,int>> &valores,int pd){
  if(valores[pd].second>0){
    return true;
  }
  return false;
}

int main(int argc, char const *argv[])
{

  #ifndef ONLINE_JUDGE
  freopen("lectura.txt", "r", stdin);
  freopen("salida.txt", "w", stdout);
  #endif
  int a,b,c,d,e;cin>>a>>b>>c>>d>>e;
  vector<pair<string,int>> valores;
  pair<string,int> v1={"S",a};
  pair<string,int> v2={"M",b};
  pair<string,int> v3={"L",c};
  pair<string,int> v4={"XL",d};
  pair<string,int> v5={"XXL",e};
  valores.push_back(v1);valores.push_back(v2);valores.push_back(v3);
  valores.push_back(v4);
  valores.push_back(v5);
  int k;cin>>k;
  for (int i = 0; i < k; ++i)
  {
    string talla;cin>>talla;
    int posV=Verificando(valores,talla);
    if(valores[posV].second > 0){
      cout<<talla<<"\n";
      valores[posV].second--;
    }
    else{
      int pd=posV;
      int pi=posV;
      int c=1;
      int sw=0;
      while(sw==0){
        if(c%2==0){
          pi--;
          if(pi>=0){
            sw=Pregunta(valores,pi);
          } 
        }else{
          pd++;
          if(pd<valores.size()){
            sw=Pregunta(valores,pd);
          }
        }
        c++;
      }
      c--;
      if(c%2==0){
        cout<<valores[pi].first<<"\n";
        valores[pi].second--;
      }else{
        cout<<valores[pd].first<<"\n";
        valores[pd].second--;
      }
    }
  }
  return 0;
}