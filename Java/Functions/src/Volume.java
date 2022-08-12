import java.util.Scanner;

/*Write a program that uses a function called calc_vol to compute the volume
of a cube as vol = height * length * breadth.
The program should output both the dimensions and result.
 */
public class Volume {
    public static void main(String[] args){
        float hei, len, brea;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the length, height and breadth");
        hei=sc.nextFloat();
        len=sc.nextFloat();
        brea=sc.nextFloat();

        calc_vol(hei, len, brea);

    }
    public static void calc_vol(float height, float length, float breadth){
        float volume=height * length * breadth;

        System.out.println("The volume is "+volume);

    }
}
