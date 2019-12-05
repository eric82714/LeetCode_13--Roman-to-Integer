#include <string.h>

int value(char r) 
{ 
    if (r == 'I') 
        return 1; 
    if (r == 'V') 
        return 5; 
    if (r == 'X') 
        return 10; 
    if (r == 'L') 
        return 50; 
    if (r == 'C') 
        return 100; 
    if (r == 'D') 
        return 500; 
    if (r == 'M') 
        return 1000; 
  
    return -1; 
} 

int romanToInt(char * s){    
    int integer = 0;
    int i = 0;
    
    while(i < strlen(s)){
        if(i + 1 < strlen(s)){
            if(value(s[i]) < value(s[i+1])){
                integer = integer + value(s[i+1]) - value(s[i]);
                i = i + 2; 
            }
            else{
                    integer = integer + value(s[i]);
                    i = i + 1; 
            }
        }
        else{ 
                integer = integer + value(s[i]);
                i += 1;
        }
    }
    return integer;
}

