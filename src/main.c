#include<stdio.h>
#include"readFromTxtFile.h"


long getSize(FILE *fp){
    fseek(fp, 0,SEEK_END);
    return ftell(fp);
}

int main(){
    
    FILE *fp= fopen("./assets/sample.pdf", "rb");

    if(fp!=NULL){
        printf("file opened!!\n");

        printf("file size is: %ld\n", getSize(fp) );
        
        // rewind(fp);
        fclose(fp);
       
    }else{

        printf("Error opening file\n");
        return 1;

    }

    WordsArray(fopen("./assets/sample.txt", "r"));
    
    return 0;

}