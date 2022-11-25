#include <stdio.h>
#include <string.h>
#include <stdlib.h>


 

int main(){
    char _self_describing_number = 'T';
    char test_number[100];
    int number_array[100];
    int number_length, no_of_test;
    int counter = 0;
    
    printf("A PROGRAM TO TEST IF A NUMBER IS A SELF DESCRIBING NUMBER\n");

        printf("Enter the number of times to test this program: ") ;
        scanf("%d", &no_of_test);
        
        for(int a = 1; a<=no_of_test; a++){

            printf("Enter the number to test: ");
            scanf("%s", test_number);
            number_length = strlen(test_number);
        
             
            for (int j = 0; j < number_length; j++) {
                number_array[j] = test_number[j] - '0';
            }
            
            for (int j = 0; j < number_length; j++) {
                printf("There are %d  %ds in the given number %s \n", number_array[j],j, test_number);
            }
            for (int m = 0; m< number_length; m++) {
                for (int i = 0; i< number_length; i++) {
                    if (number_array[i] == m) counter++;
                }
                if(counter == number_array[m]){
                    _self_describing_number = 'T';
                }
                else{
                    _self_describing_number = 'F';
                    printf("\n");
                    printf("%s is not a Self-Describing Number \n", test_number);
                    break;
                }
                counter = 0;
                if (_self_describing_number != 'F'){
                    printf("\n");
                    printf("%s is a Self-Describing Number\n", test_number);
                    break;
                }
            }
        }
}

