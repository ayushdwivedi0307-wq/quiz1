#include<stdio.h>
#include<string.h>
//Maths quiz
struct questions{
    int answer;
    char ques[600];
};

int main() {
    int  user_answer1,user_answer2,user_answer3,user_answer4,user_answer5;
    struct questions q1,q2,q3,q4,q5;
    strcpy(q1.ques,"What Is The Sum Of 1 and 67\n");
    q1.answer = 68;
    strcpy(q2.ques,"What Is Answer If we divide 9 by 3\n");
    q2.answer = 3;
    strcpy(q3.ques,"What Is Answer If We Mutiply 6 with 7\n");
    q3.answer = 42;
    strcpy(q4.ques,"What Is Answer If We square the number 4\n");
    q4.answer = 16;
    strcpy(q5.ques,"What Is Answer If We Take Square Root 36\n");
    q5.answer = 6;

    printf("Give The answers of following questions\n");
    printf("Question Number 1: %s\n",q1.ques);
    scanf("%d\n",&user_answer1);
    printf("Question Number 2: %s\n",q2.ques);
    scanf("%d\n",&user_answer2);
    printf("Question Number 3: %s\n",q3.ques);
    scanf("%d\n",&user_answer3);
    printf("Question Number 4: %s\n",q4.ques);
    scanf("%d\n",&user_answer4);
    printf("Question Number 5: %s\n",q5.ques);
    scanf("%d\n",&user_answer5);
    
        if(user_answer1 == q1.answer){
            printf("Your Answer Is Correct\n");
        }
        else{
            printf("Oops Try Again\n");
        }
        if(user_answer2 == q2.answer){
            printf("Your Answer Is Correct\n");
        }
        else{
            printf("Oops Try Again\n");
        }
        if(user_answer3 == q3.answer){
            printf("Your Answer Is Correct\n");
        }
        else{
            printf("Oops Try Again\n");
        }
        if(user_answer4 == q4.answer){
            printf("Your Answer Is Correct\n");
        }
        else{
            printf("Oops Try Again\n");
        }
        if(user_answer5 == q5.answer){
            printf("Your Answer Is Correct\n");
        }
        else{
            printf("Oops Try Again\n");
        }

    return 0;
}   // scanf me \n use nahi krna hota iska matlab next line nahi hota hai
