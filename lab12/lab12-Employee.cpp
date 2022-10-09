#include <string.h>
#include <stdio.h>

struct person {
    char name[100] ;
    float salary ;
    int duration ;
};

struct person p[100];

int check_employee ( char check , int a ) {
    switch ( check ) {
            case 'y' :
            getchar();
            printf( "Employee Name : " ) ;
            gets(p[a].name);
            printf( "Salary (Bath/Month) : " ) ;
            scanf( "%f" , &p[a].salary) ;
            printf( "Duration (Year) : " ) ;
            scanf( "%d" , &p[a].duration) ;
            break;
            case 'n' :
            return 0 ;
    }//end switch case 
}//end function

void avgpayment(int count) {
    count = count - 1 ;
    float avg , payment = 0 ;
    int i = 0 ;
    
    while( i<= count ){
        payment = p[i].salary + payment ;
        i++ ;
    }//end while 
     
    avg = payment / count ;
    //callculate avg salary
    
    printf( "Average of salary : %.2f bath \n" , avg ) ;
    printf( "Payment of every month :  %.2f bath \n " , payment) ;
    printf( "*** Most duration in this business *** \n") ;
}// end function

void mostduration(int count){
    count = count - 1;
    float per_years[count];
    int i = 0;

    while( i <= count ){
        per_years[i] = p[i].salary * (p[i].duration * 12);
        i++;
    }//end while

    int max = per_years[0];
    int icount = 0;
    int ii = 0;

    while (ii <= count) {
        int check_max = per_years[ii] > max;
        switch ( check_max ) {
            case 1 :
                max = per_years[ii] ;
                icount = ii ;
                ii++ ;
                break ;
            case 0 :
                ii++ ;
                break ;
        }//end switch case
    }//end while
    
    printf(" Name : %s (%d Years)\n", p[icount].name , p[icount].duration) ;
    printf( "Salary : %.2f bath \n", p[icount].salary) ;
    //show most salary and name 
}//end fucntion

int main (){
    int count = 0 ;
    int yn = 1 ;
    char check ;
    while(yn){
        printf ( " Do you want to Enter Employee Information? (Y/N) : ") ;
        scanf (" %c" , &check ) ;
        yn = check_employee(check,count) ;
        count++ ;
    }//end while 
    
    avgpayment(count) ;
    mostduration(count) ;
}//end function
