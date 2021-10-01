/*Write a program that accepts measurements in cm and converts them into metres.
If someone enters 200 for example, the output should take the form:
        200 cm = 2 metres.*/

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Length {
    public static void main(String[] args) throws IOException {
        int meters, cm;

        InputStreamReader inputStreamReader=new InputStreamReader(System.in);
        BufferedReader bufferedReader= new BufferedReader(inputStreamReader);

        System.out.println("Enter the length in centimeters");
        cm=Integer.parseInt(bufferedReader.readLine());

        meters=cm/100;

        System.out.println(cm+"cm = "+meters+"meters");


    }
}
