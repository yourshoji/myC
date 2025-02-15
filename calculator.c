
int calculatoe(){
float x;
float y;
char expression;

    printf("============[CALCULATOR]============\n");
    printf("Insert your first number: ");
    scanf("%f", &x); // "&" is for data inserting to a variable.
    printf("Insert the expression: ");
    scanf(" %c", &expression); // ignores whitespace.
    printf("Insert your second number:  ");
    scanf("%f", &y);

    if(expression == '+'){
        printf("%.2f\n", x+y);
    }
    else if(expression == '-'){
        printf("%.2f\n", x-y);
    }
    else if(expression == '*'){
        printf("%.2f\n", x*y);
    }
    else if(expression == '/'){
        if(y!=0){
            printf("%.2f\n", x/y);
        }
        else{
            printf("Error! Division by zero is not allowed.\n");
        }
    }
    else{
        printf("Error!, Wrong input.\n");
    }

    printf("===============[NIG]================");

    return 0;
}
