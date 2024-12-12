#include <stdio.h>

int main() {
    int N,i;
    
    // Read the number of values
//    printf("Enter the number of values: ");
    scanf("%d", &N);

    int values[N],b;
    
    // Read the values
//    printf("Enter the values: ");
    for (i = 0; i < N; i++) {
        scanf("%d", &values[i]);
    }

    // Calculate the LCM of the array
    long long lcm = values[0],a;
    for (i = 1; i < N; i++) {
        a = lcm;
        b = values[i];
        long long multiple = a;
    	while (multiple % b != 0) {
       	 multiple += a;
   	 	}
   	 	lcm = multiple;
    }

    // Print the result
    printf("%lld\n", lcm);
    
    return 0;
}

