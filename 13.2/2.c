#include<stdio.h>
main(){
	int i;
	FILE *p;
	int n;
	p=fopen("data","w");
	if(p==NULL){
		printf("File cannot create...");
	}else{
		printf("File create...");
		for(i=1;i<=50;i++){
			if(i%15==0){
				fprintf(p,"%d\n",i);
			}
		}
	}
}
