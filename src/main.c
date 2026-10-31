#include<stdio.h>

int main(){
    
    FILE *fp= fopen("../assets/sample.pdf", "rb");

    if(fp!=NULL) printf("File opened successfully");
    else printf("Error opening file");
    fclose(fp);
    
    return 0;

}