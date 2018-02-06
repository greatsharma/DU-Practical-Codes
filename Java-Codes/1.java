//Gaurav Sharma

class sumcommand {
    public static void main(String args[]) {
        int l = Integer.parseInt(args[0]);
        int sum = 0;
        for (int i = 1; i <= l; i++) {
            sum += (Integer.parseInt(args[i]));
        }
        System.out.print("sum is :" + sum);
        System.out.print('\n');
    }

}
