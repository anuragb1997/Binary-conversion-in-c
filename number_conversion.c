#include <stdio.h>
	void binary(int n){
		int a[100];
		int i=0;
		while(n>0){
		a[i]=n%2;
		n=n/2;
		i++;}
	for(int j=i-1;j>=0;j--){
		printf("%d",a[j]);}
	}
void generate(int n){
	for(int i=0;i<=n;i++){
		binary(i);}
	}
int main(void){
	int n;
	printf("Enter a number");
	scanf("%d",&n);
	generate(n);
	return 0;
}
