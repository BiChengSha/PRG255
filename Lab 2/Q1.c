#include<stdio.h>

int isOdd(int oddNum);
int isEven(int evenNum);

int main(){
   
   int max = 20;
   int input;
   float maxF = 20.0;
   
   register int numEven = 0;
   float percentEven = 0.0;
   register int sumOdd = 0;
   
   for (int i = 0; i < max; i++){
      printf("Enter value %d/20: ", i + 1); 
      scanf("%d", &input); 
      
      if(input % 2 == 0){
         numEven = isEven(input);
      }
      
      if (input % 2 == 1){
         sumOdd = isOdd(input);
      }
      
      puts(""); 
   }
   
   percentEven = numEven/maxF*100;
   
   puts("Statistics: ");
   printf("Even numbers: %d\n", numEven);
   printf("Percentage of even numbers: %.2f\n", percentEven);
   printf("Sum of odd numbers: %d", sumOdd);    
   
   return(0);
   getch();
}

int isOdd(int oddNum){
   static int sum = 0;
   sum = sum + oddNum;
   return sum;
}

int isEven(int evenNum){
   static int count = 0;
   count++;
   return count;
}