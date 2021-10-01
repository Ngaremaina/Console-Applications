/*Write a program that accepts the weight of a package in grams and then converts it to kilograms
and also specifies how many such packages form one kilogram.
For example, if the user enters the weight (in grams) of the package as 100, the output should be:
    The weight of the package is 0.1 kilograms.
    It takes 10 such packages to form one kilogram.
*/
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Package {
    public static void main(String[] args) throws IOException {
        float gms, kgs,packages;


        InputStreamReader inputStreamReader= new InputStreamReader(System.in);
        BufferedReader bufferedReader=new BufferedReader(inputStreamReader);

        System.out.println("Enter the weight in grams");
        gms=Float.parseFloat(bufferedReader.readLine());

        kgs=gms/1000;
        packages=kgs*100;
        System.out.println("The weight of the package is "+kgs+" kilograms");
        System.out.println("It takes "+packages+"such packages to form one kilogram.");
    }
}
