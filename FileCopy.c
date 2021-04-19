#include <sys/types.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <sys/wait.h>
#include<string.h>

int main(void){

   FILE *file1, *file2;
   char ch,file[25];
   char des_file[25];
   int num;
   printf("Enter the name of file that you want to read:");
   scanf("%s",file);
 
   file1= fopen(file,"r");
   if(file1==NULL){
      printf("File can not be opened !!");
      exit(0);   
   }
 
   
     printf("Enter the name of destination file:");
     scanf("%s",des_file);
  
     file2 = fopen(des_file,"w");
      if(file2==NULL){
      printf("File can not be opened !!");
      exit(0);   
      
   }
   
   
   while((ch=fgetc(file1))!=EOF ){
       fputc(ch,file2);
   
   }
   fclose(file2);
   fclose(file1);
   exit(0);
   
    return 0;

}


