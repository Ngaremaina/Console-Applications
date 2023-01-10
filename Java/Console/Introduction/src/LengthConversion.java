/*Write a program that accepts measurements in kilometers and the converts and displays them in metres.
E.g. if someone enters 0.4 (kilometers) the output should take the form
 0.4 kilometers = 400 metres.
 */
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class LengthConversion {
    public static void main(String[] args) throws IOException {
        float meters, km;

        InputStreamReader inputStreamReader=new InputStreamReader(System.in);
        BufferedReader bufferedReader= new BufferedReader(inputStreamReader);

        System.out.println("Enter the length in kilometers");
        km=Float.parseFloat(bufferedReader.readLine());

        meters=km*1000;

        System.out.println(km+"kilometers = "+meters+"meters");


    }
}
