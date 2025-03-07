#include<stdio.h>
int bubble(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				int t=a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
}
	int main(){
		int a[]={7,4,71,57,32,78};
		int n=sizeof(a) / sizeof(a[0]);
		
		bubble(a,n);
		for(int i=0;i<n;i++){
			printf("%d\t",a[i]);
		}
	
	return 0;
}