#include<stdio.h>

int multiply(int a, int b){
	return a*b;
}
int divide(int a, int b){
	return a/b;
}
int main(){
    int a,b,op;
    int result=0;
    printf("Enter an expression: ");
    scanf("%d%c%d", &a, &b, &op);

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
    printf("The output is %d", result);
    return 0;

}


