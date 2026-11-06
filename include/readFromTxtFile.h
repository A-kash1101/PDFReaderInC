#include<stdio.h>
#include<math.h>



#pragma once

char * arr= "string";


long getNoOfWordsInTXT(FILE *fp){
    long count=0;                           //count number for no of words
    int wordFound=0;                        //word found flag for checking if word is found or we are getting spaces
    int c;                                  //for storing byte

    while((c = fgetc(fp)) !=EOF){           //loop until we dont hit EOF here c=fgets(fp) returns value of assignment like -1 for EOF.
        
        
        if(c!=' ' && c!='\n' 
        && c!='\r' && c!='\t' 
        && c!= ','){            //checking if byte is 32 if yes then 
            if(wordFound==0){               //if word found flag is 0 then a new word has been found 
                count++;                    //we increase word count
                wordFound=1;                //word flag is set to 1;
            }else{                          
                continue;                   //if wordflag is already flagged up then it means that word is still not terminated, so continue.
            }
        }else{                              //if we encounter space
            wordFound=0;                    //set wordfound flag to 0 and next iteration will find for new non space character.
            continue;                  //
        }
    }
    return count;
}


long getSize(FILE *fp){                     //get size(bytes) of a file.
    fseek(fp, 0,SEEK_END);                  //jump to end with seek end and 0 is offset from seek end.
    long size= ftell(fp);                   //ftell tells offset from start(0) to current pointer on file.             
    rewind(fp);
    return size;                       
}

char **WordsArray(FILE *fp){                // returns pointer to a array of array of chars(pointer to a pointer of char).
    
    fseek(fp, 0, SEEK_END);                 // to point at the last of the file with offset 0 so lastByte+0;
    int lengthOfFile= ftell(fp);            // ftell tells us sends current position.
    rewind(fp);                             //pointer back to 0th byte
   
    int noOfWords= getNoOfWordsInTXT(fp);   // so far we have got number of words 
    
    char **words;

    return words;
}
