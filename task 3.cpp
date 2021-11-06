#include <stdio.h>
int main()  {

float t;
printf("enter your num :  ");
scanf("%f", &t);
 if ((t>=0)&&(t<=25)){
    printf("the num is between inte [0,25]");
	}
else 
     if ((t>=25)&&(t<50)){
     	 printf("the num is between inte [25,50)");
	 }
else 
     if ((t>=50)&&(t<75)){
     	 printf("the num is between inte [50,75)");
	 }
else 
     if ((t>=75)&&(t<=100)){
     	 printf("the num is between inte [75,100)");
	 }
else 
     printf("the num is out inte ");
     
    return 0;
	
}
