#include <stdio.h>
void DecimalToRoman(long long int num);
int main(){
    printf("Enter the number in decimal System to convert it in Roman System\n");
    long long int number;
    scanf("%lld",&number);
    DecimalToRoman(number);
    return 0;
}
void DecimalToRoman(long long int num){
    int reminder,counter,length=0;
    char str[100]={'\0'};
    for(counter=1;counter<=num/1000;counter++){
      str[length++]='M';
}
reminder = num%1000;

for(counter=reminder/900;counter==1;counter++){
       str[length++]='C';
       str[length++]='M';
}
reminder = reminder%900;

for(counter=reminder/500;counter==1;counter++){
       str[length++]='D';
}
reminder = reminder%500;

for(counter=reminder/400;counter==1;counter++){
    str[length++]='C';
    str[length++]='D';
}
reminder = reminder%400;

for(counter=1;counter<=reminder/100;counter++){
    str[length++]='C';
}
reminder = reminder%100;

for(counter=reminder/90;counter==1;counter++){
    str[length++]='X';
    str[length++]='C';
}
reminder = reminder%90;

for(counter=reminder/50;counter==1;counter++){
    str[length++]='L';
}
reminder = reminder%50;

for(counter=reminder/40;counter==1;counter++){
    str[length++]='X';
    str[length++]='L';
}
reminder = reminder%40;

for(counter=reminder/10;counter>=1;counter--){
    str[length++]='X';
}
reminder = reminder%10;

for(counter=reminder/9;counter==1;counter++){
    str[length++]='I';
    str[length++]='X';
}
reminder = reminder%9;

for(counter=reminder/5;counter==1;counter++){
    str[length++]='V';
} 
reminder = reminder%5;

for(counter=reminder/4;counter==1;counter++){
    str[length++]='I';
    str[length++]='V';
}
reminder = reminder%4;
for(counter=reminder;counter>=1;counter--){
     str[length++]='I';
}
   printf("%s",str);
   return;
}