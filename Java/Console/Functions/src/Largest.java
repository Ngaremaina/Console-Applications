import java.util.Scanner;

/*Write a program that accepts 3 floating-point numbers and outputs the biggest.
The program should make use of a (user-defined) function called get_big,
which accepts the three numbers entered from main and then returns the biggest.
The main function should then output the three numbers entered together with the biggest.
 */
public class Largest {
    public static void main(String[] args){
        float a,b,c;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the numbers");
        a=sc.nextFloat();
        b=sc.nextFloat();
        c=sc.nextFloat();

        get_big(a, b, c);

    }
    private static void get_big(float first, float second, float third){
        if (first>second && first>third){
            System.out.println("The first number:"+first+" ,the second number: "
                    +second+" and the third number: "+third+" the smallest number is "+first);
        }

        else if (second>first && second>third){
        System.out.println("The first number:"+first+" ,the second number: "
                +second+" and the third number: "+third+" the smallest number is "+second);
    }
        else{
        System.out.println("The first number:"+first+" ,the second number: "
                +second+" and the third number: "+third+" the smallest number is "+third);

    }
    }
}
