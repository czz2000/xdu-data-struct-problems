#include<stdio.h>
#include<stdlib.h>
typedef struct Lnode{
	Lnode *next;
	int ID;
	int code;
}Lnode,*LinkList;

void creat_list(int n,int m,LinkList &a,LinkList &r){
	Lnode *p=a,*q;
	p->ID=1;
	int num;
	scanf("%d",&num);
	p->code=num ;
	for(int i=2;i<=n;i++){
		scanf("%d",&num);
		q=(Lnode*)malloc(sizeof(Lnode));
		q->ID=i;
		q->code=num; 
		p->next=q;
		p=p->next;
		if(i==n){
			q->next=a;
			r=q;
		}
	}
}

void out(LinkList &a,int &m,LinkList &r){
	Lnode *q=a,*p=r;
	if(a->next!=a){
	for(int i=1;i<m;i++){
		p=p->next;
		q=q->next;
		r=r->next;
	}
	
	printf("%d ",q->ID);
	m=q->code;
	p->next=q->next;
	free(q); 
	 
	out(p->next,m,r);
}
	else printf("%d ",a->ID);
}

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	LinkList a,r;
	a=(LinkList)malloc(sizeof(Lnode));
	r=(LinkList)malloc(sizeof(Lnode));
	creat_list(n,m,a,r);
	out(a,m,r);
	return 0;
} 
