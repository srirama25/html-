#include <stdio.h>

int main() {
    float h,w,b;
    char g;
    scanf("%f",&h);
    scanf(" %c",&g);
    if(h<0 ){
        printf("invalid input");
    }
    if(g!='M' && g!='m' && g!='F' && g!='f'){
        printf("the gender input is invalid");
    
        return 0;
    }
    
    else if (g=='m' && h<8){
        
        
        w=80*h;
       
        
            printf("the salary is %f for male",w);

    }
    else if (g=='f' && h<8){
        
        w=60*h;
        
    
    printf("the salary is %f for female",w);
    }
    if (h>8 && g=='m'){
        
            ;
            b=80*8;
            w=b+(100*(h-8));
            printf("the salary is %f",w );
        }
    
    if (h>8 && g=='f'){
        
         
            b=60*8;
            w=b+(100*(h-8));
            printf("the salary is %f",w );
        }
    
    return 0;

}