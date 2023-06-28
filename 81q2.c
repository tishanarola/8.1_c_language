#include<stdio.h>
void main(){
	int n;
	printf("enter the size of array");
	scanf("%d",&n);
	int a[n];
	int i;
	int sum=0;
	 printf("enter the array elements ");
	 for(i=0;i<n;i++){
	 	printf("enter a[%d]",i);
	 	scanf("%d",a[i]);
	 }
	 for(i=0;i<n;i++){
	 	sum+=a[i];
	 }
	 printf("sum is %d",sum/n);
}
