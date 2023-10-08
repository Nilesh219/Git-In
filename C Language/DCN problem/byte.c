#include<stdio.h>             
#include<string.h>    

void main(){
        char data[100];
        printf("Enter data you want to add:\n");
        scanf("%s",data);
        char flag='#';
        char esc='@';
        int len=strlen(data);
        char codeword[100];
        int count=0;
        int inclen=0;
       
        for(int i=0;i<len;i++){
            if(data[i]=='#'){
                codeword[i+count]='@';
                count+=1;
                codeword[i+count]='#';
                inclen+=1;
            }else if(data[i]=='@'){
                codeword[i+count]='@';
                count+=1;
                codeword[i+count]='@';
                inclen+=1;
            }else{
                codeword[i+count]=data[i];
            }

        }

        char flagcw[len+inclen+2];

        for(int i=0;i<(len+inclen+2);i++){
            if(i==0){
                flagcw[i]='#';
            }else if(i==((len+inclen+2)-1)){
                flagcw[i]='#';
            }else{
                flagcw[i]=codeword[i-1];
            }
        }
        printf("Codeword:%s\n",flagcw);

        //receiverside
        char rdw[100];
        int res=-1;
        int val=0;
        int rlen=strlen(flagcw);
        for(int i=1;i<(rlen-2);i++){
            
            if(flagcw[i]=='@')
            {
                if(val != 1){
                    val=1;
                    continue;
                }else{
                    res+=1;
                    rdw[res]=flagcw[i];
                    val=0;
                }
            }else{
                res+=1;
                rdw[res]=flagcw[i];
                val=0;
            }
        }
        for(int i=0;i<=res;i++){
            printf("%c",rdw[i]);
        }

}

