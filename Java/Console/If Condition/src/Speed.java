import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/*
Write a program that can be used by a policeman to determine if a vehicle has exceeded the speed limit
and to levy a fine.
The policeman should enter the vehicles speed and the speed limit.
If the speed limit is exceeded by less than 30kph a fine of Kshs. 2500 should be charged.
Otherwise a fine of Kshs 4000 is charged.
Your program should then output (in a suitable format) the vehicle speed, the speed limit,
 the excess speed and the fine levied.
 */
public class Speed {
    public static void main(String[] args) throws IOException {
        int speed, limit,diff;

        InputStreamReader inputStreamReader=new InputStreamReader(System.in);
        BufferedReader bufferedReader=new BufferedReader(inputStreamReader);

        System.out.println("Enter the speed");
        speed=Integer.parseInt(bufferedReader.readLine());
        System.out.println("Enter the speed limit");
        limit=Integer.parseInt(bufferedReader.readLine());

        diff=limit-speed;

        System.out.println("The speed = "+speed+"km/hr, the speed limit = " +
                limit+"km/hr and the driver has exceeded the speed limit by " +
                diff+"km/hr");

        if (diff<30){
            System.out.println("Fine is Kshs.2500");
        }
        else{
            System.out.println("Fine is Kshs.4000");
        }
    }
}
