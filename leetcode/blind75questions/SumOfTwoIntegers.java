public class SumOfTwoIntegers {

    public static void main(String[] args) {
        int tests[][] = {
            {1, 2},
            {2, 3},
            {20, 30},
        };
        for(int test[] : tests) {
            System.out.println(getSum(test[0], test[1]));
        }
    }

    public static int getSum(int a, int b) {
        int andOp = a & b;
        andOp = andOp << 1;
        int xorOp = a ^ b;
        while((andOp & xorOp) != 0) {
            int buff1 = andOp & xorOp;
            int buff2 = andOp ^ xorOp;
            andOp = buff1;
            xorOp = buff2;
            andOp = andOp << 1;
        }
        return andOp | xorOp;
    }
}