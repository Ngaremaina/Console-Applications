/*Write a program that accepts the radius of a circle and computes both it’s area and circumference.*/
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Circle {
    public static void main(String[] args) throws IOException {
        double radius, circumference,area;

        InputStreamReader isr=new InputStreamReader(System.in);
        BufferedReader br=new BufferedReader(isr);

        System.out.println("Enter the radius of the circle");
        radius=Double.parseDouble(br.readLine());
        area= Math.PI * radius * radius;
        circumference= 2 * Math.PI * radius;

        System.out.println("The area is "+area+" and circumference is "+circumference);


    }
}
