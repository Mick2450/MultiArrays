#include <stdio.h>

int main(){
    float myArray[3][3] = { { 0.1, 0.2, 0.3 }, { 1.1, 1.2, 1.3 }, { 2.1, 2.2, 2.3 } };
    int row, col;
    float sum = 0, mean;
    
    for(row = 0; row < 3; row++){
        for(col = 0; col < 3; col++){
          sum += myArray[row][col];  
        }
    }
    mean = sum/9; 
    printf("\nmean of array values is %f\n", mean);
   
    return 0;
}
