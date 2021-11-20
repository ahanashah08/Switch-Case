#include <stdio.h>
#include <iostream.h>

 

int main() {
	int choice;
	printf("Press 1 for the first option\n");
    printf("Press 2 for the second option\n");
    printf("Press 3 for the third option\n");
    printf("Press 4 for the fourth option\n");
    printf("Enter your choice:\n");
    scanf("%d" , &choice);
    
    switch (choice) {
    	case 1: {
        printf("Food Item : Pani Puri\n");
        printf("Price: Rs.100");
        
        break;
    }
    
    case 2: {
        printf("Food Item : Bhel Puri\n");
        printf("Price : Rs. 150");
        
        break;
    }
    case 3: {
        printf(" Food Item : Sev Puri\n");
        printf("Price : Rs. 200");
        
        break;
    }
    case 4: {
        printf("Food Item : Samosa Chaat\n");
        printf("Price : Rs. 250");
         
        break;
    }
    default:
        printf("wrong Input\n");
	}
	return 0;
}
