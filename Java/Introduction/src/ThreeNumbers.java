/*Write a program that accepts three numbers and computes their sum, product and average. */
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class ThreeNumbers {
    public static void main(String[] args) throws IOException {
        int number_one, number_two, number_three, sum, product;
        float average;

        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);

        System.out.println("Enter the first number");
        number_one=Integer.parseInt(br.readLine());
        System.out.println("Enter the second number");
        number_two=Integer.parseInt(br.readLine());
        System.out.println("Enter the third number");
        number_three=Integer.parseInt(br.readLine());

        sum=number_one+number_two+number_three;
        product=number_one*number_two*number_three;
        average=sum/3;

        System.out.println("The sum is "+sum+", product is "+product+" and average is "+average);

    }
}
