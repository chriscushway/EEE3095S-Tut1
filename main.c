# include <stdio.h>
int main(){
    int a, b, sum;
    
    printf("Enter a value for a: ");
    scanf("%d", &a);

    // This is not assigning to the correct var
    printf("Enter a value for b: ");
    scanf("%d", &a);
    sum = a + b;
    
    printf("The sum of a and b is %d \n.",sum);
}