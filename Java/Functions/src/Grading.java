import java.util.Scanner;

/*	A program is required that accepts marks in three subjects and calculates the average mark.
The program then assigns the student a grade based on the average mark using the grading system below.
        Average Mark	Grade
        80 – 100	A
        70 – 80	B
        60 – 70	C
        50 – 60	D
        0 – 50	E
        i) Write a program with a function called get_grade which accepts the average mark and
         returns the grade to the main function which then outputs it.
        ii) Write a program with a function called grade which accepts the average mark and
         prints the grade.*/
public class Grading {
    public static void main(String[] args){
        float sub1, sub2, sub3;
        Scanner sc=new Scanner(System.in);

        System.out.println("Enter the marks for the subjects");
        sub1=sc.nextFloat();
        sub2=sc.nextFloat();
        sub3=sc.nextFloat();
        float sum=sub1+sub2+sub3;

        float average=sum/3;

        get_grade(average);
        grade(average);
    }
    private static void get_grade(float aver){

        if (aver>=80 && aver<=100){
            System.out.println("A");
        }
        else if(aver>=70 && aver<80){
            System.out.println("B");
        }
        else if(aver>=60 && aver>70){
            System.out.println("C");
        }
        else if(aver>=50 && aver<60){
            System.out.println("D");
        }
        else if(aver>=0 && aver>50){
            System.out.println("E");
        }

    }
    private static void grade(float aver){
        if (aver>=80 && aver<=100){
            System.out.println("A");
        }
        else if(aver>=70 && aver<80){
            System.out.println("B");
        }
        else if(aver>=60 && aver>70){
            System.out.println("C");
        }
        else if(aver>=50 && aver<60){
            System.out.println("D");
        }
        else if(aver>=0 && aver>50){
            System.out.println("E");
        }
    }
}
