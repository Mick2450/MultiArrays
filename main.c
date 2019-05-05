#include <stdio.h>

int main(){
    float myArray[3][3] = { { 0.1, 0.2, 0.3 }, { 1.1, 1.2, 1.3 }, { 2.1, 2.2, 2.3 } };
    float sum = 0, value, mean;
    int row, col;
    
    for(row = 0; row < 3; row++){
        for(col = 0; col < 3; col++){
            
        printf("%f ", myArray[row][col]);
        }
        printf("\n");
    }
    
    for(row = 0; row < 3; row++){
        for(col = 0; col < 3; col++){
            
        value = myArray[row][col];
        sum = sum + value; 
        
        }
    }
    mean = sum/9;
    printf("\nmean of array is %f\n", mean);
    
    return 0;
}
