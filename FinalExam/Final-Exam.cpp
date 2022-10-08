#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Employee {
	char name [100] ; //name of person
	int  y  ; //years
	int  m  ; //months
	int  d  ; //days
}typedef E ;

int  finddata (E [] ) ; //find data in structure
void showoutput (E [], int ) ; //show output

int main(){
	E ymd[100] ;
	int people  = finddata(ymd) ;
	showoutput (ymd,people) ;

}

int finddata (E ymd[]){
	FILE *Fp ; // filedata
	
	int people = 0 ;
	int denined ;
	char denineds [100] ;
	Fp = fopen( "a.txt" , "r") ;
	if(Fp == NULL){
		printf("flie not found please check your flie name.") ;
		exit (0) ;
	}
	fscanf(Fp, "%s\t%s\t\t%s\n",denineds,denineds,denineds) ;
	for (int i = 0; i < 100 ; i++){
		if (fscanf(Fp, "%d\t%s\t\t%d-%d-%d\n",&denined,ymd[i].name, &ymd[i].y,&ymd[i].m,&ymd[i].d) != EOF ){
			people++ ;	
		}
		else {
			break ;
		}
	}
	fclose (Fp) ;
	return people ; //return back count people
}

void showoutput (E ymd[], int people ) {
	int allday [100] ;
	int Max = 0 ;
	char *Maxn ;
	int Min = 999999;
	char *Minn ;
	for(int i = 0 ; i < people ;i++){
		allday [i] = (2018-ymd[i].y) * 365 + (6-ymd[i].m) * 30 + (21-ymd[i].d) ;
		printf("%s %d Years, %d Months\n",ymd[i].name,allday[i]/365,(allday[i]%365)/30) ;
			
	}
	for(int j = 0 ; j < people ; j++) {
		if(allday[j] > Max){
			Max = allday [j] ;
			Maxn = ymd[j].name ;	
		}
		if(allday[j] < Min){
			Min = allday [j] ;
			Minn = ymd[j].name ;	
		}
	}
	printf("\nMax : %s[%d Years, %d Months]\n" ,Maxn,Max/365,(Max%365)/30) ;//out put max 
	printf("Min : %s[%d Years, %d Months]\n", Minn,Min/365,(Min%365)/30) ;//out put Min
	
}
	

	
	
