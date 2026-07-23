#include <stdio.h>
float addition (float a, float b){
    return a + b;
}
float subtraction (float a, float b){
    return a - b;
}
float multiplication(float a, float b){
    return a * b;
}
float division(float a, float b){
    if (b == 0){
        printf("Impossible to divide by zero!");
        return 0;
    }
   return a/b; 
}
int factorial(int n){
    int x = 1;
    if (n<0){
        printf("Invalid");
        return -1;
    }
    while (n!=0){
        x *= n;
        n--;
    }
    return x;
}       


int main(){
    int num, t;
    int long factorial_result;
    float x, y, result;
    printf("1 -- Addition \n2 -- Subtraction \n3 -- Multiplication \n4 -- Division \n5 -- Factorial \n0 -- Exit \n");
    printf("Select the operation: ");
    scanf("%d", &num);
    if (num < 0 || num > 5){
        printf("Opcao invalida!\n");
        return 0;
    }
    else if (num >= 1 && num <= 4){ 
        printf("Digite dois numeros: ");
        scanf("%f %f", &x, &y);
    }
    else if (num == 5) {
        printf("Digite um numero: ");
        scanf("%d", &t);
}
    switch (num){
        case 0:
            printf("See you next time!");
            return 0;
        case 1:
           result = addition(x, y);
            break;
        case 2:
            result = subtraction(x, y);
            break;
        case 3: 
            result = multiplication(x, y);
            break;
        case 4:
            result = division(x, y);
            break;
        case 5: 
            result = factorial(t);
            break;
        default: 
            printf("Invalid option!");
            return 0;
    }
    printf("Result: %.2f\n", result);
    return 0;
} 