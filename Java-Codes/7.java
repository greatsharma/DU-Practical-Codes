//Gaurav Sharma

import java.util.Scanner;

class q7 {
    public static void main(String[] args) {
        int n = Integer.parseInt(args[0]);
        int x;
        int sum = 0;
        Scanner obj = new Scanner(System.in);
        for (int i = 0; i < n; i++) {
            x = (obj.nextInt());
            sum += x;
        }
        System.out.println("SUM:" + sum);
    }

}
