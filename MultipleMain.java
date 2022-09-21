import java.util.Scanner;
public class MultipleMain {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int num = scanner.nextInt();
        scanner.close();

        if(num%6 == 0) {
            System.out.printf("%d is multiple of 2 and 3",num);
        } else if(num%2==0) {
            System.out.printf("%d is multiple of 2",num);
        } else if(num%3==0){
            System.out.printf("%d is multiple of 3",num);
        } else {
            System.out.printf("%d is not multiple of 2 and 3", num);
        }
    }
}
