import java.awt.*;
import java.util.Scanner;

/*Write a program that computes the area of either a rectangle, a circle or a right-angled triangle.
The program should display a menu that enables the user to select the type of figure whose area he/she
wants to compute. Depending on the users choice, the program should prompt for the dimensions and perform
 the computations. The output should be: - The type of figure, the dimensions and the area.
  Define three functions: - one to compute the area of a rectangle, one the area of a circle and
  one the area of a triangle. (NB: 1. The calculation should be for only one figure at any one time.
  2. Computations should be done in the user-defined functions.)
 */
public class Shapes {
    public static void main(String[] args){
        float len, wid, rad, hei, base;

        Scanner sc=new Scanner(System.in);
        System.out.println("Enter your choice\n1.Rectangle\n2.Circle\n3.Triangle");
        int choice =sc.nextInt();
        if (choice==1){
            System.out.println("Enter your length and width");
            len=sc.nextFloat();
            wid=sc.nextFloat();
            rectangle(len, wid);
        }
        else if(choice==2){
            System.out.println("Enter your radius");
            rad=sc.nextFloat();
            circle(rad);
        }
        else if (choice==3){
            System.out.println("Enter your base and height");
            base=sc.nextFloat();
            hei=sc.nextFloat();
            triangle(base, hei);
        }
        else{
            System.out.println("Invalid choice");
        }

    }
    public static void rectangle(float length, float width){
        float area=length*width;
        System.out.println("The area of a triangle is "+area);

    }
    public static void circle(float radius){
        double area=Math.PI*radius*radius;
        System.out.println("The area of a circle is "+area);

    }
    public static void triangle(float base, float height){
        double area=0.5*base*height;
        System.out.println("The area of a triangle is "+area);

    }

}
