#include<stdio.h>
#include<string.h>
//Maths quiz
struct questions{
    int answer;
    char ques[600];
};

int main() {
    int score = 0;
    int user_input[5];
    struct questions q[5];
    strcpy(q[0].ques,"What Is The Sum Of 1 and 67\n");
    q[0].answer = 68;
    strcpy(q[1].ques,"What Is Answer If we divide 9 by 3\n");
    q[1].answer = 3;
    strcpy(q[2].ques,"What Is Answer If We Mutiply 6 with 7\n");
    q[2].answer = 42;
    strcpy(q[3].ques,"What Is Answer If We square the number 4\n");
    q[3].answer = 16;
    strcpy(q[4].ques,"What Is Answer If We Take Square Root 36\n");
    q[4].answer = 6;

    printf("Give The answers of following questions\n");
    printf("Question Number 1: %s\n",q[0].ques);
    printf("Question Number 2: %s\n",q[1].ques);
    printf("Question Number 3: %s\n",q[2].ques);
    printf("Question Number 4: %s\n",q[3].ques);
    printf("Question Number 5: %s\n",q[4].ques);

    for(int i=0;i<5;i++){
        scanf("%d",&user_input[i]);
        if(user_input[i]==q[i].answer){
            printf("Your Answer Is Correct");
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