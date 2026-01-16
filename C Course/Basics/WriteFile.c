#include <stdio.h>

int main(){
    // WRITE A FILE
    // There is a built-in struct FILE(Data type) in C

    FILE *pFile = fopen("C:\\Users\\mayss\\OneDrive\\Desktop\\output.txt", "w");

    char text[] = "BOOTY BOOTY BOOTY\nROCKIN' EVERYWHERE!";

    if(pFile == NULL){
        printf("Error opening file\n");
        return 1; 
    }

    fprintf(pFile, "%s", text);
    printf("File was written successfully!");

    fclose(pFile);

    return 0;
}