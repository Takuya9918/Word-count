#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{

int character=0, word = 0;
FILE *fp;
char input_file_name[20];
char parameter[3],ch;
scanf("%s %s,parameter,input_file_name");
fp = fopen(input_file_name,"r");
if(fp == NULL){
    character = word = 0;
}
else {
    while ((ch=fgetc(fp))!=EOF){
        if(ch == ' '|| ch == ',')
        word++;
        else character++;
    }
    word++;
}
fclose(fp);
if(parameter[1] == 'w')printf("µ¥´ÊÊý£¬%d",word);
if(parameter[1] == 'c')printf("×Ö·ûÊý£¬%d",character);
system("pause");
return 0;
}
