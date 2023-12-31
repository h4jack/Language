import java.util.*;

class Gcd{
    public int a,b;
    public void assign(int a,int b){
        this.a = a;
        this.b = b;
    }
    public int gcd() {
        int x = this.a;
        int y = this.b;
        int g = y;
        while (x > 0) {
            g = x;
            x = y % x;
            y = g;
        }
        return g;
    }
}