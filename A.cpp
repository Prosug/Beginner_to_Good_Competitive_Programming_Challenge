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
        flag=1;
    }
    if(answer_code==accepted && flag){
        flag=0;
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