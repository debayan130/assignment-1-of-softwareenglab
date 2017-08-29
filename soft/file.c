/*
Author: Debayan De
Name of Assignment:-Write a program to read last n characters from the file
CS791

*/
#include<stdio.h>
 
int main() {
 
   FILE *fp;
   char ch;
   int num;
   long length;
 
   printf("Enter the value of num : ");
   scanf("%d", &num);
 
   fp = fopen("a.txt", "r");		//open the file
   if (fp == NULL) {
      puts("cannot open this file");
      exit(1);
   }
 
   fseek(fp, 0, SEEK_END);	//set fp to end of file
   length = ftell(fp);
   fseek(fp, (length - num-2), SEEK_SET);//2 because of EOF
 
   do {
      ch = fgetc(fp);
      putchar(ch);
   } while (ch != EOF);
 
   fclose(fp);
   return(0);
}
