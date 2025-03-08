/*
#include<stdio.h>
int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	int m=1;
	for(int i=1;i<=k;i++)
	{
		m=m*n;
	}
	printf("%d",m);
	return 0;
	
}
*/
/*
#include<stdio.h>
int m;
int alu(int n){
int main(){
	int n;
	scanf("%d",&n);
	int m=alu(n);
	printf("%d",m);
	return 0;
}*/

//strlen 实现
/*
#include<stdio.h>
int op(char a[]){
	if(a[0]=='\0') return 0;
	else return 1+op(&a[1]);
}
int main(){
	char a[30];
	scanf("%s",a);
	int m=op(a);
	printf("%d",m);
	return 0;
}
*/
/*
#include<stdio.h>
void op(int n){
	if(n/10==0) {
	printf("%d ",n);
	return;
}
else {printf("%d ",n%10);
op(n/10);

return;
}}
int main(){
	int n;
	scanf("%d",&n);
	op(n);
	return 0;
}



*/





























