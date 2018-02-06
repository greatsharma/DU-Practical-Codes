//Gaurav Sharma

import java.util.Scanner;

class array1d {
    public static void main(String[] args) {
        Scanner obj = new Scanner(System.in);
        System.out.println("Enter the no of elements of array:");
        int x = (obj.nextInt());
        int a[] = new int[x];
        System.out.println("Enter the elements of array:");
        for (int i = 0; i < x; i++)
            a[i] = (obj.nextInt());
        System.out.print("array=");
        for (int i = 0; i < x; i++)
            System.out.print("  " + a[i]);
        System.out.print('\n');
    }

}
