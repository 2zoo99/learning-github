import java.util.Scanner;

public class Test3 {
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);

        int a = scan.nextInt();
        int b = scan.nextInt();
        System.out.printf("%d", a + b);

        scan.close();
    }
}
/*
 * input : 10 10 
 * output : 20 
 */
