/*Write a program that accepts distance traveled in metres and the time taken in minutes
and then outputs the speed in kilometers per hour (km/h).
E.g. if someone enters a distance (in metres) of 500 and a time (in minutes) of 15
the output for speed should be 2 km/h.*/
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Speed {
    public static void main(String[] args) throws IOException {
        float km, m, min, hrs, speed;

        InputStreamReader inputStreamReader=new InputStreamReader(System.in);
        BufferedReader bufferedReader=new BufferedReader(inputStreamReader);

        System.out.println("Enter the distance in meters");
        m=Float.parseFloat(bufferedReader.readLine());
        System.out.println("Enter the time taken in minutes");
        min=Float.parseFloat(bufferedReader.readLine());

        km=m/1000;
        hrs=min/60;
        speed=km/hrs;

        System.out.println("The speed taken = "+speed+"km/hrs");

    }
}
