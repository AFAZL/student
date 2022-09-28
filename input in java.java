import java.util.Scanner;
class A {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
       
        System.out.println("ENTER YOUR AG(E: ");
         int age=sc.nextInt();
        if (age>=18)
        System.out.println("ADULT");
        else
        System.out.println("KID");
    }
}