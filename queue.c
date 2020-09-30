#include<stdio.h>
#define MAX=100
int q[MAX];
int f=r=0,n=0;
void enqu()
{
	int val;
	printf("\nEnter the value to Enqueue:");
	scanf("%d",&val);
	if(r==n){
		printf("\nqueue full\n");
	}
	q[r++]=val;
}
int deq()
{
	if(f==r){
		
		printf("\nqueue full\n");
	}
	printf("\nDeleted element val:%d\n",(q[f++]);
}
void display(){
	int i;
	i=f;
	while(i!=r){
		printf("%d",q[i++]);
	}
}
void main(){
	int ch;
	printf("\nEnter the value of n:");
	scanf("%d",&n);
	printf("\nChoose an option to perform:\n1. Enqueue\n2.Dequeue\n3.Display\n");
	scanf("%d",&ch);
	if(ch==1) 
		enqu();
	else if(ch==2)
		dequ();
	else if(ch==3)
		display();
	else printf("\nInvalid option\n");
	
}
