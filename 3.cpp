#include<iostream>
#include<cstdlib>
#include<ctime>
#define count 30
using namespace std;
static int m=0;//���� 
static int n=0; // �������Ŀ���� 
int op,c;
int sum,summ;
int Add(int a,int b) //�ӷ� 
{
int answer1;
sum=a+b;
cout<<a<<"+"<<b<<"="; 
cin>>answer1;
if(answer1==sum)
return 1;
else return 0;
} 
int Sub(int a,int b) //���� 
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

int Mul(int a,int b) //�˷� 
{
int answer3;
   sum=a*b;
cout<<a<<"x"<<b<<"="; 
cin>>answer3;
if(answer3==sum)
return 1;
else return 0;
}

int chufa(int a,int b) //���� 
{
int answera,answerb;
sum=a/b;//�� 
summ=a%b;//���� 
if(b!=0){
	cout<<a<<"��"<<b<<"="; 
cin>>answera;
cin>>answerb;
   if(sum==answera&&summ==answerb)
return 1;
else return 0;
}
}

void Print(int flag,int a,int b,int op) //������ 
{
if(flag==1)
{

cout<<"�ش���ȷ��С�������"<<endl; 
m+=10;
}
else
{

cout<<"С���ѻش������Ŷ!"<<endl;
if(op==0){
				
				 cout<<"��ȷ��Ϊ��"<<a<<"+"<<b<<"="<<a+b<<endl;
				
			}else if(op==1){
				 
				
				cout<<"��ȷ��Ϊ��"<<a<<"-"<<b<<"="<<a-b<<endl;
			
			}else if(op==2){
				
				 cout<<"��ȷ��Ϊ��"<<a<<"x"<<b<<"="<<a*b<<endl;
				
				
			}else if(op==3){
			
				cout<<"��ȷ��Ϊ��"<<a<<"��"<<b<<"="<<a/b<<"����Ϊ��"<<a%b<<endl;
			
			}
n++;
}
}
int main()
{

int a,b,j,answer,c1,c2,c3,c4,c5;
//int operate[4]={0,1,2,3};
cout<<"�������ѣ���������ʱ����ֱ�����̺�����Ϊ���٣��Կո���"<<endl; 

for(int i=1;i<=count;i++){
	a=rand()%100; //����100���ڵ������ 
	b=rand()%100;
	c=rand()%100;
	c1=a+b;
	c2=a-b;
	c3=a*b;
	c4=a%b;
//	if((c1>0&&c1<=100)||(c2>0&&c2<=100)||(c3>0&&c3<=100)||(c5>0&&c5<=100)){
		srand(time(NULL)); //������������� 
		op=rand()%4;
		int flag;
		if(op==0&&c1<=100){
				 cout<<"��"<<i<<"��:";
				 flag=Add(a,b);
				 Print(flag,a,b,op);
				
				 i++;
			}else if(op==1&&c2>=0&&c2<=100){
				 cout<<"��"<<i<<"��:";
				flag=Sub(a,b);	Print(flag,a,b,op);
			
				i++;
			}else if(op==2&&c3<=100){
				 cout<<"��"<<i<<"��:";
				 flag=Mul(a,b);	Print(flag,a,b,op);
				
				 i++;
				
			}else if(op==3&&c4<=100){
				 cout<<"��"<<i<<"��:";
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



cout<<"����Ϊ"<<m<<"������Ŀ"<<n<<endl; 

}



