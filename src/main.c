#include<stdio.h>
#include"readFromTxtFile.h"

int main(){
    
    FILE *fp= fopen("./assets/sample.txt", "rb");

    if(fp!=NULL){
        printf("file opened!!\n");
    }else{
        printf("Error opening file\n");
        return 1;
    }


    printf("file size is: %ld\n", getSize(fp) );


    WordsArray(fopen("./assets/sample.txt", "r"));
    

    fclose(fp);

    printf("%c%c%c%c", 65, 66,'\r', 67);

    return 0;

}
