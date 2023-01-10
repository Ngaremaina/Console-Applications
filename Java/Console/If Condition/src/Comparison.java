import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/*
Write a program that prompts the user for two numbers and then computes them using the following rules.
If the first number is greater than the second one, the second number is subtracted from the first one.
If the second number is greater than the first one, the first number is divided by the second one.
Otherwise the two numbers are added.
 */
public class Comparison {
    public static void main(String[] args) throws IOException {
        int number1, number2, sum,diff;

        InputStreamReader inputStreamReader=new InputStreamReader(System.in);
        BufferedReader bufferedReader=new BufferedReader(inputStreamReader);

        System.out.println("Enter the first number");
        number1=Integer.parseInt(bufferedReader.readLine());
        System.out.println("Enter the second number");
        number2=Integer.parseInt(bufferedReader.readLine());

        if (number1>number2){
            diff=number1-number2;
            System.out.println("The difference = "+diff);
        }
        else if (number1<number2){
            diff=number2-number1;
            System.out.println("The difference = "+diff);
        }
        else{
            sum=number1+number2;
            System.out.println("The sum = "+sum);

        }
    }
}
