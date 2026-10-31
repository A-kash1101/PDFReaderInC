#include<stdio.h>

int main(){
    
    FILE *fp= fopen("./assets/sample.pdf", "rb");

    if(fp!=NULL){
        printf("file opened!!\n");
        fclose(fp);
       
    }else{
        printf("Error opening file\n");
        return 1;
    }

    
    return 0;

}