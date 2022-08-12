import java.util.Scanner;

//1)	Write a program that computes both the area and circumference of a circle using functions.
public class Circle {
    public static void main(String[] args){
        float radius;

        Scanner sc=new Scanner(System.in);
        System.out.println("Enter your radius");
        radius=sc.nextFloat();

        calculation(radius);


    }

    private static void calculation(float rad){
        double area=Math.PI*rad;
        double circumference=2*Math.PI*rad;

        System.out.println("Area = "+area+" and the circumference = "+circumference);

    }

}
