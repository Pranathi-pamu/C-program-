#include <math.h>

int main() 
{
     int n,rev=0,palindrome,rem;
     printf("enter the n value ");
     scanf("%d",&n);
     palindrome =n;
     while(n|=0)
     {
      rem=n%10;
      rev=rev*10+rem;
      n=n/10;
     }
     if (palindrome==rev)
     printf("%d is palindrome");
     else
     printf("%d is not palindrome");
     
     
     
     
     
    
  
 
       
         
       
         
       
       
     
     
      
      
      
      
      
     
     
      
 }    
 
     


    