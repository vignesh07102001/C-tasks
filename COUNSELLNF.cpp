#include <stdio.h>
int main() {
    int marks;                //get the value from input
    scanf("%d",&marks);
    switch(marks)             //send it to switch statement
    {
                    /*we can use only constant values inside
					the case.So for range 90 ... 100 ==> includes
					90,91,92,93,....,100.
					Range inside the case.
					It must be a one whitspace b/w 90 and . 
					Bcoz if u wont use it,it will take that float*/
					

	case 90 ... 100:
            printf("KUMARASWAMY\n");
            printf("KNCET\n");
            printf("PAAVAI\n");
        case 80 ... 89:			//mark range b/w 80,81,....,88,89.
            printf("SNS\n");
            printf("BANNARI AMMAN\n");
            printf("KCET\n");
        case 70 ... 79:			//mark range b/w 70,71,...78,79
            printf("BNR\n");
            printf("KCT\n");
        case 60 ... 69:
            printf("SARANATHAN\n");
        case 50 ... 59:
            printf("Vetrivinayaga\n");
            break;
        default:
            printf("No colleges are available");
           
    }
    
    return 0;
}

