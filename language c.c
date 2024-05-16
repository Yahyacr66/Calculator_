#include <stdio.h>
#include <math.h>
int main (){
    int n1, n2;
    char oper;
    int res, Sqrt;
    printf ("Please entre a First number: ");
    scanf ("%d" , &n1);
    printf ("Please entre a number 2: ");
    scanf ("%d" , &n2);
    printf ("+ or - or * or / or %, If you want to calculate the square root of a number, answer Y: ");
    scanf (" %c" , &oper);
    if (oper == '+'){
        res = n1 + n2;
        printf ("The result is: %d" , res);
    }else if (oper == '-'){
        res = n1 - n2;
        printf ("The result is: %d" , res);
    }else if (oper == '*'){
        res = n1 * n2;
        printf ("The result is: %d" , res);
    }else if (oper == '/'){
        res = n1 / n2;
        printf ("The result is: %d" , res);
    }else if (oper == 'Y')
    {
        printf ("Enter the number for which you want to calculate the square root: ");
        scanf ("%d" , &Sqrt);
        if (Sqrt >= 0){
            res = sqrt(Sqrt);
            printf ("The square root of the number %d is: %d" , Sqrt , res);
        }
    }else if (oper == '%'){
        if (n2 == 0)
        {
            printf ("invalide operation!");
        }
 if (n2 != 0) {
            res = n1 % n2;
            printf("The remainder is: %d", res);
    }
    }else{
        printf ("Invalide operation!");
    }
    return res;
}