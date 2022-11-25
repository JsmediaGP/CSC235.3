#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    char filename[100][50];
    int file_id[100];
    int comp = 0;
    int lvalue = 0;
    int steps, filenumber, temp;

    printf("ENTER NUMBER OF STEPS: ");
    scanf("%d", &steps);

    for (int i = 0; i< steps; i++) {

        printf("ENTER NUMBER OF FILES TO COMPARE : ");
        scanf("%d", &filenumber);

        int j = 0;
       
        while (j<filenumber) {
            printf("ENTER FILENAME AND PRESS ENTER TO SUPPLY THE FILE ID: ");
           scanf("%s %d", filename[j], &file_id[j]);
            j++;
        }
        printf("\n");
        lvalue = file_id[0];
        for (int j = 0; j< filenumber; j++) {
            printf("Here are the list of files with their ID's\n");
            printf("%s %d\n", filename[j], file_id[j]);
            printf("\n");
            for (int i = j + 1; i < filenumber; i++) {
                comp = strcmp(filename[j], filename[i]);
                if((strcmp(filename[j], filename[i]) == 0) &&  (lvalue > file_id[j])){
                    
                    lvalue = file_id[j];
                }
                else if((strcmp(filename[j], filename[i]) != 0) && (file_id[j] > file_id[i])){
                    temp = file_id[j];
                    file_id[j] = file_id[i];
                    file_id[i] = temp;
                }
            }
        }
        for (int j = 0; j< filenumber; j++) {
            if (comp != 0){
                printf("%d\n", file_id[j]);
            }
        }
        if (comp == 0){
            printf("%s %d is the file that won't be deleted\n", filename, lvalue);
        }
    }
}

