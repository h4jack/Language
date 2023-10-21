import java.util.*;
class Shortnum{
    public static void main(String args[]){
        int arr[] = {1, 3, 7, 9, 5, 0, 2, 4, 8, 6};
        Arrays.sort(arr);
        for(int i = 0; i < 10; i++){
            System.out.print(arr[i]);
        }
    }
}