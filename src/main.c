#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include"readFromTxtFile.h"

int function(){
    int a=10;
    return a;
}

int main(){
    
    FILE *fp= fopen("./assets/sample.txt", "rb");

    if(fp!=NULL){
        printf("file opened!!\n");
    }else{
        printf("Error opening file\n");
        return 1;
    }


    printf("file size is: %ld\n", getSize(fp) );

    // WordsArray(fopen("./assets/sample.txt", "r"));
    

    // fclose(fp);

    printf("size of file is: %d", getNoOfWordsInTXT(fp));

    return 0;
}
