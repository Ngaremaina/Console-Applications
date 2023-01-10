/*Write a program that accepts temperature in degrees Celsius
and converts and outputs it in degrees Fahrenheit.
 */
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Temperature {
    public static void main(String[] args) throws IOException {
        float celcius, farenheit;

        InputStreamReader inputStreamReader=new InputStreamReader(System.in);
        BufferedReader bufferedReader= new BufferedReader(inputStreamReader);

        System.out.println("Enter the temperature in celcius");
        celcius=Float.parseFloat(bufferedReader.readLine());

        farenheit=(celcius * 9/5)+32;
        System.out.println("The temperature = "+farenheit+"F");
    }
}
