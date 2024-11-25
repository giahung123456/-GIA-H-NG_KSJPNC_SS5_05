#include<stdio.h>
 main(){
 		int n=1,s,i=1;
 	
 	do{
 		
 	s=n*i;
	 printf ("%d*%d==%d\n",n,i,s);
 	i++;
	 if	(i==11){
	 	n++;
	 	i=1;
	 	
	 }
	 }
	 while( n!=11);
 }