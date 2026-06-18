#include <stdio.h>
int inputScore(){
}

double calculateFinalgrade(double quiz, double exam){
    double result = (quiz * 0.4)+(exam*0.6);
    printf("Quiz Score: %.2lf\n", quiz);
    printf("Exam Score: %.2lf\n", exam);
    printf("Final Grade: %.2lf\n", result);
    if(result<=100 && result>=90){
        printf("Letter Grade: A");
    }else if(result <= 89 || result >=80){
        printf("Letter Grade: B");
    }else if(result <= 79 && result >=70){
        printf("Letter Grade: C");
    }else if(result <= 69 || result >=60){
        printf("Letter Grade: D");
    }else{
        printf("Letter Grade: f");
    }
    return result;
}

int inputQuiz(){
     int quiz;
    printf("Enter your quiz score : ");
    scanf("%d", &quiz);
return quiz;
    
}

int letterGrade(){
   
}


int main() {
    int quiz, exam;
    quiz = inputQuiz
    printf("Enter your quiz score : ");
    scanf("%d", &quiz);
   
    printf("Enter your exam score : ");
    scanf("%d", &exam);
    
    calculateFinalgrade(quiz,exam);
    
    
        
        
    

    return 0;
}