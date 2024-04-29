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

    https://codeforces.com/contest/259/problem/B

*/
int mat[3][3];
int main(int argc, char const *argv[])
{
   
   #ifndef ONLINE_JUDGE
     freopen("lectura.txt", "r", stdin);
     freopen("salida.txt", "w", stdout);
    #endif
    memset(mat,0,sizeof(mat));
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cin>>mat[i][j];
        }
    }
    long long s=mat[1][0]+mat[2][0];
    long long s2=mat[0][2]+mat[1][2];
    long long s3=mat[0][1]+mat[2][1];
    int sw=0;
    for (long long i = 1; i < 1e6 &&sw==0; ++i)
    {
 
        long long rs=s+i;
        long long v2=rs-s2;
        long long v3=rs-s3;
        if((i+v2+v3)==rs){
            sw=1;
            mat[0][0]=i;
            mat[1][1]=v3;
            mat[2][2]=v2;
        }
    }
    
 
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<mat[i][2];
        cout<<"\n";
    }
 
    return 0;
}