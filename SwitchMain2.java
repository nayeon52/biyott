import java.util.ArrayList;
import java.lang.Enum;
import java.util.Scanner;
enum Month {
    January(1), February(2), March(3), April(4),
    May(5), June(6),July(7), August(8),
    September(9), October(10), November(11), December(12);

    int month_number;

    Month(int i) {
        this.month_number = i;
    }
    Month getMonth(int i) {
        for(Month type:Month.values()) {
            if(equals())
        }
    }
}
public class SwitchMain2 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        ArrayList<String> date_array = new ArrayList<>();
        boolean breaker = true;
        while (breaker) {
            String order = scanner.next();
            switch (order.toUpperCase()) {
                case "ADD":
                    int date_number = scanner.nextInt();
                    String temp = Month.;
                    date_array.get();
                    break;
                case "PRINT":
                    System.out.println(date_array);
                    break;
                case "QUIT":
                    breaker = false;
                    System.out.println("Bye");
                    break;
                default:
                    System.out.println("Invalid Command");
            }
        }
    }
}
