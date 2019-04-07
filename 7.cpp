#ifndef EXPRESS_H
#define EXPRESS_H

#endif // EXPRESS_H
#include<random>
#include<ctime>
#include<iostream>
using namespace std;
std::mt19937 gen(time(0));
int runtimes=1;
int caltwo(int x,int y,char symbol)
{
    int res;
    switch (symbol) {
    case '+':
        res=x+y;
        break;
    case '-':
        res=x-y;
        break;
    case '*':
        res=x*y;
        break;
    case '/':
        if(y==0)
           res==10000;
        else
            res=x/y;
        //if((double)res!=(double)x/y)
        //    return 10000;
        break;
    default:
        break;
    }
    return res;
}
int calexp(int x,int y,int z,char symbol1,char symbol2)
{
    int res;
    switch (symbol2) {
    case '+':
    case '-':
        res=caltwo(caltwo(x,y,symbol1),z,symbol2);
        break;
    case '*':
    case '/':
        if(symbol1=='+'||symbol1=='-')
            res=caltwo(x,caltwo(y,z,symbol2),symbol1);
        else
            res=caltwo(caltwo(x,y,symbol1),z,symbol2);
        break;
    default:
        break;
    }
}
void express(int count)
{
    int x,y,z;
    x=gen()%100;
    y=gen()%100;
    z=gen()%100;
    string symbol="+-*/";
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
        {
            int anwser;
            int res=calexp(x,y,z,symbol[i],symbol[j]);
            if(res>=0&&res<=100)
            {

                cout<<"第"<<runtimes<<"题："<<x<<symbol[i]<<y<<symbol[j]<<z<<"="<<endl;
               cin>>anwser;
               if(anwser==res)
               {
                 cout<<"回答正确"<<endl;
               }
               else
                {
                	cout<<"答案错误"<<endl;
                 cout<<"正确答案为："<<res<<endl;
                }  
                runtimes++;
            }
            if(runtimes>count)
                return;
        }
    express(count);
}

int main()
{ int s=30;
cout<<"请开始做题"<<endl; 
//cin>>s;
    express(s);
}

