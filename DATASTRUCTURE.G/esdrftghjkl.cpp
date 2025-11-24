#include <stdio.h>
#include<string.h>

int main() {
    int T,N,i,j,temp;
    char S[1001];
    scanf("%d",&T);
    while(T--){
        scanf("%d",&N);
        scanf("%s",S);
        getchar();
         if(N%2==0){
        for(i=0;i<N;i+2){
            if(i%2!=0){
           temp=S[i-1];
           S[i-1]=S[i];
           S[i]=temp;}
           else{
            for(i=0;i<N-1;i++){
            if(i%2!=0){
           temp=S[i-1];
           S[i-1]=S[i];
           S[i]=temp;}
               }}}}
               for(i=0;i<N;i++){
               if(S[i]=='a'){
                   'a'='z'
               }}
               printf("%s",S);
               
               
           }
        }
    
    
	// your code goes here




