#include<stdio.h>
#include<stdlib.h>
#include<queue>
using namespace std;
priority_queue<int,vector<int>,greater<int> >q;
int main(){
	int n,num,a,b,ans=0;scanf("%d",&n); 
	while(n--){
		scanf("%d",&num);
		q.push(num);
	}
	while(q.size()>=2){
		a=q.top();q.pop();
		b=q.top();q.pop();
		ans+=a+b;
		q.push(a+b);
	}
	printf("%d",ans);
}
