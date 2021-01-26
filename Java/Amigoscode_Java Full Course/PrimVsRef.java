public class PrimVsRef {
    public static void main(String[] args) {
        int a = 10;
        int b = a;
        a = 100;
        System.out.println(a+b);
    }
}
