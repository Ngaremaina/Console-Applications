import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/*
Write a program to read a value from the keyboard and output the phrase NEGATIVE if the number is negative,
 POSITIVE if the number is positive or ZERO otherwise.
 */
public class States {
    public static void main(String[] args) throws IOException {
        int value;
        InputStreamReader inputStreamReader=new InputStreamReader(System.in);
        BufferedReader bufferedReader=new BufferedReader(inputStreamReader);

        System.out.println("Enter a value");
        value=Integer.parseInt(bufferedReader.readLine());

        if (value>0){
            System.out.println("POSITIVE");
        }
        else if (value<0){
            System.out.println("NEGATIVE");
        }
        else {System.out.println("ZERO");}
    }
}
