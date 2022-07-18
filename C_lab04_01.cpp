#include <stdio.h>
#include <string.h>


int main (){
	char Eid[] = "" ; //variable of employeesid
	int hr     = 8 ;  //variable of hour
	int sla    = 15000 ;  //variable of salary
	
	while(true){
		printf("Input your Employees_ID (*Warning maximum 10 chars*) : ");
        scanf("%s",Eid);
        if(strlen(Eid) <= 10) break;
	}//end while
		
	
	//
	printf("input the working(hr)");
	scanf("%d",&hr);
	printf("Salary ammout/hr(bath)");
	scanf("%d",&sla);
	
	
	//show expected output
	printf("------------------------------ \n");
	printf("Expected Output \n" );
	printf("Employees_ID = %s\n",Eid);
	printf("Amount/day = %d bath(s)\n",(sla*hr));
	printf("------------------------------ \n");

	return 0 ;
}//endfunction

