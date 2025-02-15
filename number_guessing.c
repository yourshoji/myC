int main(){
    int count = 0;
    int guess_num;
    int psuedo = srand(time(0)) % 100;
    // srand() generates a seed, time(0) gets the current time, ensuring the number is always random.
    // % 100 is the maximum range.

    printf("=========[ NUMBER GUESSING ]==========\n");

    while(count<5){ // if the count is 5 or below, it runs (false);
        printf("Your Guess: ");
        scanf("%d", &guess_num);

        if(guess_num > psuedo){
            printf("Too High!\n");
        }
        else if(guess_num < psuedo){
            printf("Too Low!\n");
        }
        else{
            printf("Correct! ", psuedo);
            return 0;
        }
            count++;
    }
    /*
    for debugging
    printf("%d\n",psuedo);
    printf("%d\n",count);
    */

    if(count==5){
        printf("\nGAME OVER! Ans: %d", psuedo); // cannot insert /n at the back if there's a value inserted already.
    }


}
