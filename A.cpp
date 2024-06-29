#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
<<<<<<< HEAD

=======
 
>>>>>>> ee1eef48f430fbc835b2beb463f0a5ee89ac6c89
/*
    Hello this is my code :). 
    I'm Topson/Desconocido/ElProsor 
    
    I'm learning competitive programming 
    
    long long day=37
<<<<<<< HEAD

=======
 
>>>>>>> ee1eef48f430fbc835b2beb463f0a5ee89ac6c89
    date dayCodeAnt=localdate()-1;
    date dayCode=localdate();
    flag;
    if(dayCodeAnt!=dayCode){
<<<<<<< HEAD
        flag=0;
    }
    if(answer_code==accepted && flag==0){
        flag=1;
=======
        flag=1;
    }
    if(answer_code==accepted && flag){
        flag=0;
>>>>>>> ee1eef48f430fbc835b2beb463f0a5ee89ac6c89
        day++;
        dayCodeAnt++;
    }
    cout<<"Day: "<<day<<"\n";
<<<<<<< HEAD

    ***********************
    Day: 38
    ***********************

*/



void Pedazos(string &cadena,vector<string> &valores){
  stack<char> aux;
  aux.push(cadena[0]); int i=1; string par="(";
  while(i<cadena.size()){
    while(!aux.empty() && i<cadena.size()){
      if(cadena[i]==')'){
        aux.pop();
      }else{
        aux.push('(');
      }
      par=par+cadena[i];
      i++;
    }
    valores.push_back(par);
    if(i<cadena.size()){
      aux.push('(');
      par="(";
      i++;
    }
  }
}
long long NroEliminar(string &cadena){
  int sw=1; long long c=0; long long i=0;long long c2=0;
  for (i = 0; i < cadena.size() && sw; ++i)
  {
    if(cadena[i]==')'){
      c++;
    }else if(c!=0){
      sw=0;
    }else{
      c2++;
    }
  }
  c=c2-c;
  return c;
}
long long calcular(string &cadena){
  long long nroEl=NroEliminar(cadena);
  long long c_c=0;
  stack<long long>v;

  for (int i = 0; i < cadena.size(); ++i)
  {
    if(cadena[i]==')'){
      c_c++;
    }else{
      if(c_c!=0){
        v.push(c_c);
      }
      c_c=0;
    }
  }
  if(c_c!=0){
    v.push(c_c);
  }
  long long aux=v.top(); v.pop();
  aux=aux-nroEl;
  v.push(aux); long long res=1;
  long long tam=v.size();
  for (int i = 0; i < tam; ++i)
  {
    
    res=res*v.top();
    v.pop();
  }
  res=res+nroEl;
  cout<<res<<":res por cada bloque\n";
  return res;
}

int main(int argc, char const *argv[])
{

  #ifndef ONLINE_JUDGE
    freopen("lectura.txt", "r", stdin);
    freopen("salida.txt", "w", stdout);
  #endif
  int n;cin>>n;string cadena; cin>>cadena;
  vector<string> valores;
  Pedazos(cadena,valores);
  for (int i = 0; i < valores.size(); ++i)
  {
    cout<<valores[i]<<"---pedazos\n";
  }
  long long resultado=1;
  for (int i = 0; i < valores.size(); ++i)
  {
    resultado=resultado*calcular(valores[i]);
  }
  cout<<resultado<<'\n';
  
  return 0;
}
=======
 
    ***********************
    Day: 38
    ***********************
 
*/

int main()
{

  stack<string> v;
  int n;cin>>n;int c_c=0;
  for (int i = 0; i < n; ++i)
   {
       char val;cin>>val;
       string cad;
       cad.push_back(val);
       if(val=='('){
            v.push(cad);
            c_c=0;
       }else{
            c_c++;
            int res=1;
            string aux=v.top();
            v.pop();
            while((aux!="(")){
                int num=stoi(aux);
                res=res*num;
                aux=v.top();
                v.pop();
            }
            if(c_c>1){
                res++;
            }
            aux=to_string(res);
            v.push(aux);
       }
   } 
   long long resultado=1;
   while(!v.empty()){
        resultado=resultado*(stoi(v.top()));
            v.pop();
    }
    cout<<resultado<<'\n';
  return 0;
}
>>>>>>> ee1eef48f430fbc835b2beb463f0a5ee89ac6c89
