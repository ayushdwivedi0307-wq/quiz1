#include<stdio.h>
//Maths quiz


int main() {
    FILE* ptr;
    ptr = fopen("questions.txt","r");
    FILE* ptr2;
    ptr2 = fopen("Answer.txt","r");
    char ques[600];
    int score = 0;
    int options[20] = {1,68,3,42,67,54,6,15,14,16,23,89,10,0,11,19,45,56,90,17};
    int ans[5];
    int user_input[5];
    char ch;
    for(int i = 0;i<600;i++){
        ch = fgetc(ptr);
        printf("%c",ch);

        if(ch==EOF){
            break;
        }
    }
    for(int j = 0;j<5;j++){
       // ans[j] = fgetc(ptr2);// this is creating a problem beacuse it is not reading an integer it is reading individually with relating to ascii value. 
        if(fscanf(ptr2,"%d",&ans[j])!=1){
            break;
        }
    }

    printf("Give The answers of following questions\n");
    fscanf(ptr,"%s\n",&ques);
    printf("The options are: %d %d %d %d\n",options[0],options[1],options[19],options[17]);
    printf("The options are: %d %d %d %d\n",options[2],options[4],options[16],options[1]);
    printf("The options are: %d %d %d %d\n",options[13],options[8],options[10],options[3]);
    printf("The options are: %d %d %d %d\n",options[12],options[9],options[9],options[1]);
    printf("The options are: %d %d %d %d\n",options[16],options[6],options[7],options[5]);


    for(int z=0;z<5;z++){
        scanf("%d",&user_input[z]);
        if(user_input[z]==ans[z]){
            printf("Your Answer Is Correct\n");
            score+=4;
        }
        else{
            printf("Wrong Answer");
              score--;
        }
}
        printf("You got a total of %d out of 20 Marks",score);
        return 0;
} 