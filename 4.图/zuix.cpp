#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int G[201][201];
int f[201],n,m;
struct pp{
	int x;
	int y;
	int value;
}a[201];
int getf(int u){
	if(f[u]==u)return u;
	else return getf(f[u]);
}
int merge(int u,int v){
	int t1=getf(u);
	int t2=getf(v);
	if(t1!=t2){
		f[t2]=t1;
	}
}
bool cmp(pp a, pp b){
	return a.value<b.value;
} 
int main(){
	scanf("%d%d",&n,&m);
     for(int i=0;i<m;i++){
     	scanf("%d%d%d",&a[i].x,&a[i].y,&a[i].value);
	 }sort(a,a+m,cmp);
	 for(int i=1;i<=n;i++)f[i]=i;
	 int cnt=0;
	 for(int i=0;i<m;i++){
	 	if(cnt==n-1)break;
	 	if(getf(a[i].x)!=getf(a[i].y)){
	 		    merge(a[i].x,a[i].y);
	 		    if(a[i].x<a[i].y) 
	 		    printf("%d %d %d\n",a[i].x,a[i].y,a[i].value);
	 		    else
	 		    	 		    printf("%d %d %d\n",a[i].y,a[i].x,a[i].value);
	 		    cnt++;
		 } 
	 }
	return 0;
} 
