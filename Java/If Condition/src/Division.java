import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/*
Write a program that accepts two numbers and divides the bigger number by the smaller number
and displays the results.
The program should display an error message (and not perform the calculation) if the smaller number is zero.
 */
public class Division {
    public static void main(String[] args) throws IOException {
        int number1, number2, division;

        InputStreamReader inputStreamReader=new InputStreamReader(System.in);
        BufferedReader bufferedReader=new BufferedReader(inputStreamReader);

        System.out.println("Enter the first number");
        number1=Integer.parseInt(bufferedReader.readLine());
        System.out.println("Enter the second number");
        number2=Integer.parseInt(bufferedReader.readLine());

        if (number1>number2){
            division=number1/number2;
            System.out.println("The division = "+division);
        }
        else if (number1<number2){
            division=number2/number1;
            System.out.println("The division = "+division);
        }
        else {System.out.println("Error");}

    }
}
