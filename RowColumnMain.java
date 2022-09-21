import java.util.Scanner;
public class RowColumnMain {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.printf("Enter two numbers: ");
        int M = scanner.nextInt();
        int N = scanner.nextInt();
        scanner.close();
        int [][] matrix = new int[M][N];
        int num = 1;
        for(int i=0;i<M;i++) {
            for(int j=0;j<N;j++) {
                matrix[i][j] = num;
                if(j == N-1)
                    System.out.println(matrix[i][j]);
                else
                    System.out.printf("%d, ",matrix[i][j]);
                num++;
            }
        }
    }
}
