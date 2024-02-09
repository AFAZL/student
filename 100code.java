import java.util.*;

class noob {

    public static void main(String[] args) {
        int n1 = 4, n2 = 8, d1 = 7, d2 = 4;
        int x = d1, din = 0, res = 0;
        n1 = n1 * d2;
        d1 = d1 * d2;
        n2 = n2 * x;
        d2 = d2 * x;
        res = n1 + n2;
        din = d1;
        int d = 0;
        System.out.println(res);
        System.out.println(din);
        for (int i = 2; i < res; i++) {
            if (res % i == 0 && din % i == 0) {
                d = d + i;
            }
        }

        res = res / d;
        din = din / d;

        System.out.println("Numerater is : " + res);
        System.out.println("Denominator : " + din);

    }
}
