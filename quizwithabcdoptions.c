#include<stdio.h>
#include<string.h>
//Maths quiz
struct questions{
    int answer;
    char ques[600];
    int opt[4];
};

int main() {
    int score = 0;
    char choice;
    struct questions q[5];
    strcpy(q[0].ques,"What Is The Sum Of 1 and 67\n");
    q[0].answer = 68;
    q[0].opt[0] = 1,q[0].opt[1]= 68,q[0].opt[2]=34,q[0].opt[3]=5;
    strcpy(q[1].ques,"What Is Answer If we divide 9 by 3\n");
    q[1].answer = 3;
    q[1].opt[0] = 32,q[1].opt[1]= 0,q[1].opt[2]=10,q[1].opt[3]=3;
    strcpy(q[2].ques,"What Is Answer If We Mutiply 6 with 7\n");
    q[2].answer = 42;
    q[2].opt[0] = 42,q[2].opt[1]= 6,q[2].opt[2]=43,q[2].opt[3]=51;
    strcpy(q[3].ques,"What Is Answer If We square the number 4\n");
    q[3].answer = 16;
    q[3].opt[0] = 12,q[3].opt[1]= 60,q[3].opt[2]=16,q[3].opt[3]=0;
    strcpy(q[4].ques,"What Is Answer If We Take Square Root 36\n");
    q[4].answer = 6;
    q[4].opt[0] = 9,q[4].opt[1]= 3,q[4].opt[2]=1,q[4].opt[3]=6;

    printf("Give The answers of following questions\n");
    for(int i=0;i<5;i++){
        printf("Question %d:%s",i+1,q[i].ques);
        printf("a) %d b) %d c) %d d) %d\n", q[i].opt[0], q[i].opt[1],q[i].opt[2],q[i].opt[3]);
        scanf("%c",&choice);
        int selected;
        switch(choice){
            case 'a':selected = q[i].opt[0];
            break;
            case 'b':selected = q[i].opt[1];
            break;
            case 'c':selected = q[i].opt[2];
            break;
            case 'd':selected = q[i].opt[3];
        }
        if(selected == q[i].answer){
            printf("Your Answer is Correct\n");
            score+=4;
        }
        else{
             printf("Better luck next time\n");
            score--;
        }
        
    } 
            printf("You got a total of %d out of total of 20 marks",score);
    return 0;
}   //why 1 question in etween skips?
