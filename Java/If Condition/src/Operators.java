import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;

/*Write a program that prompts the user for two numbers.
The program then prompts the user for the operator (+, - , * , / or %).
The user is the given the answer depending on the operator entered.
If he enters an invalid operator, he/she should get an error message.
* */
public class Operators {
    public static void main(String[] args) throws IOException {
        int number1, number2, sum,product,division, diff, remainder;
        char operand;
        Scanner scanner=new Scanner(System.in);
        InputStreamReader inputStreamReader=new InputStreamReader(System.in);
        BufferedReader bufferedReader=new BufferedReader(inputStreamReader);

        System.out.println("Enter the first integer");
        number1=Integer.parseInt(bufferedReader.readLine());
        System.out.println("Enter the second integer");
        number2=Integer.parseInt(bufferedReader.readLine());
        System.out.println("Enter the  operand");
        operand=scanner.next().charAt(0);

        if (operand=='+'){
            sum=number1+number2;
            System.out.println("The sum = "+sum);
        }
        else if (operand=='-'){
            diff=number1-number2;
            System.out.println("The difference = "+diff);
        }
        else if (operand=='*'){
            product=number1*number2;
            System.out.println("The product = "+product);
        }
        else if (operand=='/'){
            division=number1/number2;
            System.out.println("The division = "+division);
        }
        else if (operand=='%'){
            remainder=number1%number2;
            System.out.println("The difference = "+remainder);
        }

    }
}
