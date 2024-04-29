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
string suerte="abcd";
void fomarEnt(string &resultado, int valor){
    for (int i = 0; i < valor; ++i)
    {
        resultado=resultado+suerte;
    }
}
void fomarRes(string &resultado,int valor){
    resultado=resultado+suerte.substr(0,valor);
}
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
     freopen("lectura.txt", "r", stdin);
     freopen("salida.txt", "w", stdout);
    #endif
    fast_io;
    long long n;cin>>n;
    string resultado="";
    long long ent=n/4;
    long long res=n%4;
    fomarEnt(resultado,ent);
    fomarRes(resultado,res);
    cout<<resultado<<"\n";
	return 0;
}