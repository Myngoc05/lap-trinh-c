#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#define MAX 100
typedef int elementtype;
typedef struct{
	elementtype element[MAX];
	int topidx;// luu chi so cua top
}stack;

//prototype
void makenullstack (stack* );
int emptystack(stack );
int fullstack(stack );
void push(elementtype ,stack* );
elementtype top(stack );
void pop(stack*);
void input(stack*);
void ouput(stack);

//khoi tao ngan xep//
void makenullstack(stack* st){
	st->topidx=MAX;
}
//kt ngan xep rong//
int emptystack(stack st){
	return st.topidx==MAX;
}
//kt ngan xep day//
int fullstack(stack st){
	return st.topidx==0;
}

//them pt vao top cua ngan xep
void push (elementtype x, stack* st){
	if(fullstack(*st))
		printf("\nloi! ngan xep day\n");
	else {
		st->topidx--;
		st->element[st->topidx]=x;
	}
}
// hien thi top
elementtype top(stack st){
	if(emptystack(st))
		printf("\nloi! ngan xep rong");
	else
		return (st.element[st.topidx]);
}
//xoa ptu tai top ngan xep;
void pop(stack* st){
	if(emptystack(*st))
		printf("\nloi! ngan xep rong");
	else {
		st->topidx++;
	}	
}
// nhap pt vao ngan xep
void input(stack* st){
	int n; elementtype x;
	printf("nhap so phan tu cua ngan xep: "); scanf("%d",&n);
	for(int i=0; i<n; i++){
		printf("phan tu thu %d: ",i+1);
		scanf("%d",&x);
		push(x,st);
	}	
}
void ouput(stack st){
	if(emptystack(st))
		printf("\nngan xep rong");
	else{
		/*printf("hien thi ngan xep: ");
		for(int i=st.topidx; i<MAX;i++)
			printf("%d ",st.element[i]);*/
		while(st.topidx!=MAX){
			printf("%d ",top(st));
			pop(&st);
	}
}
}
void chuyennhiphan(stack* st){
	makenullstack(st);
	int n; elementtype x;
	printf("nhap n: "); scanf("%d",&n);
	printf("he nhi phan cua n la: ");
	for(int i=0; n>0; i++){
		x=n%2;
		n=n/2;
		push(x,st);
	
}}
int main(){
	stack st;
//	chuyennhiphan(&st);
// CHUYEN N THANH HE SO 2 
	makenullstack(&st);
	int n; elementtype x;
	printf("nhap n: "); scanf("%d",&n);
	printf("he nhi phan cua n la: ");
	for(int i=0; n>0; i++){
		x=n%2;
		n=n/2;
		push(x,&st);}
	ouput(st);
// kiem chung cac phep toan tren ngan xep
	stack a;
	makenullstack(&a);
	printf("\nkiem tra stack rong: %d ",emptystack(a)); 

	printf("\n1)them phan tu vao stack: "); 
	printf("\n- nhap so phan tu ban muon them: ");scanf("%d",&n);
	for(int i=0; i<n;i++){
		x=rand() % 50+1;
		printf("\n  phan tu %d: %d",i,x);
		push(x,&a);
	}
	printf("\n kiem tra stack day: %d",fullstack(a));
	printf("\nnhap so phan tu muon xoa: ");scanf("%d",&n);
	int i=0,dem=0;
	while(i<n && !emptystack(a)){
		if(!emptystack(a)){
		dem++;
		pop(&a);}
		i++;
		
	}
	printf("\nso phan tu da xoa duoc: %d",dem);
	printf("\nkiem tra stack rong: %d ",emptystack(a)); 

// them phan tu vao stack a:

	return 0;
}
