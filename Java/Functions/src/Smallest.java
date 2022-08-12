/*A program is required that accepts three integers and finds the smallest.
        i) Write a program with a function called small which accepts the three integers entered via
         the main function and returns the smallest.
         The main function should output the three numbers entered together with the smallest.                                                                 (8 marks)


        ii) Write a program with a function called smallest which accepts three integers entered
        via the main function and prints them together with the smallest./*
 */

import java.util.Scanner;

public class Smallest {
    public static void main(String[] args){
        int a, b, c;
        Scanner sc=new Scanner(System.in);

        System.out.println("Enter the numbers");
        a=sc.nextInt();
        b=sc.nextInt();
        c=sc.nextInt();

        small(a, b, c);
        smallest(a, b, c);
    }

    private static void small(int first, int second, int third) {
        if (first< second && first<third){
            System.out.println("The first number:"+first+" ,the second number: "
                    +second+" and the third number: "+third+" the smallest number is "+first);

        }
        else if (second<first && second<third){
            System.out.println("The first number:"+first+" ,the second number: "
                    +second+" and the third number: "+third+" the smallest number is "+second);
        }
        else{
            System.out.println("The first number:"+first+" ,the second number: "
                    +second+" and the third number: "+third+" the smallest number is "+third);

        }
    }

    private static void smallest(int first, int second, int third) {
        if (first< second && first<third){
            System.out.println("The first number:"+first+" ,the second number: "
                    +second+" and the third number: "+third+" the smallest number is "+first);

        }
        else if (second<first && second<third){
            System.out.println("The first number:"+first+" ,the second number: "
                    +second+" and the third number: "+third+" the smallest number is "+second);
        }
        else{
            System.out.println("The first number:"+first+" ,the second number: "
                    +second+" and the third number: "+third+" the smallest number is "+third);

        }
    }
}
