#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of terms you want to display in the Fibonacci Sequence: ");
    scanf("%d", &n);
    int seq[n], i;
    seq[0] = 0;
    seq[1] = 1;
    for(i=2; i<n; i++){
        seq[i] = seq[i-1] + seq[i-2];
    }
    printf("The Fibonacci Sequence is below:-\n");
    for(i=0; i<n; i++){
        printf("%d\n", seq[i]);
    }
    return 0;
}
