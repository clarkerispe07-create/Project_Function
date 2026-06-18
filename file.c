#include <stdio.h>

int inputQuiz(){
     int quiz;
        printf("Enter your quiz score : ");
        scanf("%d", &quiz);
        return quiz;
}

int inputExam(){
     int exam;
        printf("Enter your quiz score : ");
        scanf("%d", &exam);
        return exam;
}


int letterGrade(double result){
     if(result<=100 && result>=90){
        printf("Letter Grade: A\n");
    }else if(result >=80){
        printf("Letter Grade: B\n");
    }else if(result >=70){
        printf("Letter Grade: C\n");
    }else if(result >=60){
        printf("Letter Grade: D\n");
    }else{
        printf("Letter Grade: F\n");
    }
    return result;
}

double calculateFinalgrade(double quiz, double exam){
    double result = (quiz * 0.4)+(exam*0.6);
    printf("Quiz Score: %.2lf\n", quiz);
    printf("Exam Score: %.2lf\n", exam);
    printf("Final Grade: %.2lf\n", result);
    letterGrade(result);
    return result;
}


int main() {
    
    int quiz = inputQuiz();
    int exam = inputExam();

    calculateFinalgrade(quiz,exam);
    

    return 0;
}