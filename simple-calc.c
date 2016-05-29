#include<stdio.h>

int plus(int a, int b){
    return a+b;
}
int minus(int a, int b){
    return a-b;
}
int multiply(int a, int b){
	return a*b;
}
int divide(int a, int b){
	return a/b;
}
int main(){
    int a,b;
    char op;
    int result = 0;
    printf("Enter an expression: ");
    scanf("%d %c %d", &a, &op, &b);
    if(op == '+')
        result = plus(a,b);
    else if(op == '-')
        result = minus(a,b);
    else if(op == '*')
        result = multiply(a,b);
    else if(op == '/')
        result = divide(a,b);
    else {
        printf("Error");
        return 1;
    }
    printf("The output is %d\n", result);
    return 0;

}

