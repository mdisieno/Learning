public class NestedLoop2DArrays {
    public static void main(String[] args) {
        
        //for each it of I, there are 3 its of J.
        for (int i = 1; i < 3; i++){
            for(int j = 0; j < 4; j++){
                System.out.println("i=" + i + " j=" + j);
            }
        }
        //2D arrays put arrays inside of arrays
        int[][] grid = {
            {1,2,3},
            {4,5,6},
            {7,8,9}
        };
    }
}
