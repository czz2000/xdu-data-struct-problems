#include<bits/stdc++.h>
using namespace std;
double exp()
{
   char a[20];
   scanf("%s",a);//注意scanf取入字符串遇到‘\0’停止 
   switch(a[0]){
   case '+':return exp()+exp();
   case '-':return exp()-exp();
   case '*':return exp()*exp();
   case '/':return exp()/exp();
   default:return atof(a);
   
   }
 
}
int main()
{
    double ans;
	ans=exp();
	printf("%.1lf",ans);
	return 0;
}

