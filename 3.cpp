#include<iostream>
#include<cstdlib>
#include<ctime>
#define count 30
using namespace std;
static int m=0;//分数 
static int n=0; // 错误的题目数量 
int op,c;
int sum,summ;
int Add(int a,int b) //加法 
{
int answer1;
sum=a+b;
cout<<a<<"+"<<b<<"="; 
cin>>answer1;
if(answer1==sum)
return 1;
else return 0;
} 
int Sub(int a,int b) //减法 
{
int answer2,sum,t;
 if(a<b)
   {
    t=a;
    a=b;
    b=t;
   }
sum=a-b;
cout<<a<<"-"<<b<<"="; 
cin>>answer2;
if(sum==answer2)

return 1;

else return 0;
} 

int Mul(int a,int b) //乘法 
{
int answer3;
   sum=a*b;
cout<<a<<"x"<<b<<"="; 
cin>>answer3;
if(answer3==sum)
return 1;
else return 0;
}

int chufa(int a,int b) //除法 
{
int answera,answerb;
sum=a/b;//商 
summ=a%b;//余数 
if(b!=0){
	cout<<a<<"÷"<<b<<"="; 
cin>>answera;
cin>>answerb;
   if(sum==answera&&summ==answerb)
return 1;
else return 0;
}
}

void Print(int flag,int a,int b,int op) //输出结果 
{
if(flag==1)
{

cout<<"回答正确，小朋友真棒"<<endl; 
m+=10;
}
else
{

cout<<"小朋友回答错误了哦!"<<endl;
if(op==0){
				
				 cout<<"正确答案为："<<a<<"+"<<b<<"="<<a+b<<endl;
				
			}else if(op==1){
				 
				
				cout<<"正确答案为："<<a<<"-"<<b<<"="<<a-b<<endl;
			
			}else if(op==2){
				
				 cout<<"正确答案为："<<a<<"x"<<b<<"="<<a*b<<endl;
				
				
			}else if(op==3){
			
				cout<<"正确答案为："<<a<<"÷"<<b<<"="<<a/b<<"余数为："<<a%b<<endl;
			
			}
n++;
}
}
int main()
{

int a,b,j,answer,c1,c2,c3,c4,c5;
//int operate[4]={0,1,2,3};
cout<<"友情提醒，除法运算时，请分别输出商和余数为多少，以空格间隔"<<endl; 

for(int i=1;i<=count;i++){
	a=rand()%100; //生成100以内的随机数 
	b=rand()%100;
	c=rand()%100;
	c1=a+b;
	c2=a-b;
	c3=a*b;
	c4=a%b;
//	if((c1>0&&c1<=100)||(c2>0&&c2<=100)||(c3>0&&c3<=100)||(c5>0&&c5<=100)){
		srand(time(NULL)); //播撒随机数种子 
		op=rand()%4;
		int flag;
		if(op==0&&c1<=100){
				 cout<<"第"<<i<<"题:";
				 flag=Add(a,b);
				 Print(flag,a,b,op);
				
				 i++;
			}else if(op==1&&c2>=0&&c2<=100){
				 cout<<"第"<<i<<"题:";
				flag=Sub(a,b);	Print(flag,a,b,op);
			
				i++;
			}else if(op==2&&c3<=100){
				 cout<<"第"<<i<<"题:";
				 flag=Mul(a,b);	Print(flag,a,b,op);
				
				 i++;
				
			}else if(op==3&&c4<=100){
				 cout<<"第"<<i<<"题:";
				flag=chufa(a,b);	Print(flag,a,b,op);
				
				i++;
			}
		i--;
	
		/*switch(op){
			case(0):answer=Add(a,b);Print(answer);
				case(1):answer=Sub(a,b);Print(answer);
					case(2):answer=Mul(a,b);Print(answer);
						case(3):answer=chufa(a,b);Print(answer);*/
		}



cout<<"分数为"<<m<<"错题数目"<<n<<endl; 

}



