#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(int argc, char* args[])
{
 char str[1024]="";
 for (int i = 1; i < argc; i++)
 {
  strcat(str,args[i]);
  strcat(str, " ");
 }
 int len = strlen(str);
 char *even =calloc(len / 2+2,sizeof(char));
 char* odd = calloc(len / 2+1, sizeof(char));
 for (int i = 0; str[i] != 0; i++)
 {
  if (i % 2) {
   odd[i / 2] = str[i];
  }
  else even[i / 2] = str[i];
 }

 printf("%s \n ",odd);
 printf("%s \n ",even);
 free(even);
 free(odd);
}