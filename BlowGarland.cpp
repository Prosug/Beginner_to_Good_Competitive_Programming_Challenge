#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)

/*
    Hello this is my code :). 
    I'm Topson/Desconocido/ElProsor 
    
    I'm learning competitive programming 
    
    long long day=20;

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
    Day: 20
    ***********************

    CodeForce: ladder: B
*/

int main(int argc, char const *argv[])
{

    #ifndef ONLINE_JUDGE
      freopen("lectura.txt", "r", stdin);
      freopen("salida.txt", "w", stdout);
    #endif
    int rr,rg,rb,ry;rr=rg=rb=ry=0;
    string  cadena;cin>>cadena;
    for (int i = 0; i < cadena.size()-4; ++i)
    {
      if(cadena[i]!='!' && cadena[i+4]=='!'){
        cadena[i+4]=cadena[i];
        if(cadena[i]=='R'){
          rr++;
        }
        if(cadena[i]=='G'){
          rg++;
        }
        if(cadena[i]=='B'){
          rb++;
        }
        if(cadena[i]=='Y'){
          ry++;
        }
      }
    }
    for (int i = cadena.size()-1; i>3; i--)
    {
      if(cadena[i]!='!' && cadena[i-4]=='!'){
        cadena[i-4]=cadena[i];
        if(cadena[i]=='R'){
          rr++;
        }
        if(cadena[i]=='G'){
          rg++;
        }
        if(cadena[i]=='B'){
          rb++;
        }
        if(cadena[i]=='Y'){
          ry++;
        }
      }
    }
    //cout<<cadena<<": previo\n";
    for (int i = 0; i < cadena.size()-3; ++i)
    {
        int v1,v2,v3,v4;v1=v2=v3=v4=1;
        int pos=0;
        for (int j = i; j < i+4; j++)
        {
            if(cadena[j]=='R'){
              v1=0;
            }
            if(cadena[j]=='G'){
              v2=0;
            }
            if(cadena[j]=='B'){
              v3=0;
            }
            if(cadena[j]=='Y'){
              v4=0;
            }
            if(cadena[j]=='!'){
              pos=j;
            }
        }
        if(v1==1){
          cadena[pos]='R';
        }
        if(v2==1){
          cadena[pos]='G';
        }
        if(v3==1){
          cadena[pos]='B';
        }
        if(v4==1){
          cadena[pos]='Y';
        }
        rr+=v1;rb+=v3;ry+=v4;rg+=v2;
       
    }
    
    //cout<<v1<<" "<<v2<<" "<<v3<<" "<<v4<<"\n";
    cout<<rr<<" "<<rb<<" "<<ry<<" "<<rg<<"\n";
    return 0;
}