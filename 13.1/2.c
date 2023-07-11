#include<stdio.h>
int main(){
	FILE *p1,*p2;
	char letter;
	p1=fopen("read.txt","r");
	   if(p1==NULL){
	   	 printf("File cannot create..."); 
	   }else{
	   	 printf("File create....");
	   }
	
	p2=fopen("write.txt","w");
	   if(p2==NULL){
	   	 printf("File cannot create...");
	   }else{
	   	 printf("File create...");
	   }
	
  letter=fgetc(p1);
	while(letter!=EOF){
		fputc(letter,p2);
		letter=fgetc(p1);
	}
	return 0;
}
