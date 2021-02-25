#include<stdio.h>
#include<string.h>
int main(){
    int countZ = 0, countO = 0; 
    char str[200];
    scanf("%s", str);
    int n = strlen(str);
    for(int i=0; i<n; i++){
        if(str[i] == 'z'){
            countZ++;
        }
        else if(str[i]=='o'){
            countO++;
        }
    }
    if(2*countZ == countO){
        printf("Yes");
    }
    else{
        printf("No");
    }

    return 0;
}