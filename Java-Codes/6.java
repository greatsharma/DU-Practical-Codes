//Gaurav Sharma

import java.util.Scanner;

class prime_not {
    public static void main(String args[]) {
        int count = 0;
        Scanner obj = new Scanner(System.in);
        System.out.println("Enter the no:");

        int n = (obj.nextInt());
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                count++;
                break;
            }
        }
        if (count == 0)
            System.out.println("prime no");
        else
            System.out.println("not prime no");
        System.exit(0);
    }
}
