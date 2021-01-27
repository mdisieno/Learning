public class PrimativeDataTypes {
    public static void main(String[] args) {
        
        //Between 32/64 bit, consider precision
        //REMEMBER, SMALLER IN TO BIGGER, DONT CAST!

        boolean isMale = true;
        //byte allows store of ascii
        byte b = 'C';
        //char allows to store unicode
        char c = 'z';
        //used to store numbers
        short s = 32767;
        //32bit
        int x = 1;
        //64bit - Cap L needed to expand range
        long l = 24444444444L;
        //fraction/dec
        //32 bit
        float f  = 20.5f;
        //64 bit.
        double y = 2.00;  
        /*
        Since float is smaller, you cannot do
        float ff = 20.5;
        but if you do the opposite, double to float
        double dd = 20.5f;

        This is because bigger can't go into smaller,
        but smaller can go into bigger.
        
        You can cast to force, but you'll forsake precision.

        */



        //I am really missing CPP right now lol
    }
}
