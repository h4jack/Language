import java.util.*;
class Main{
    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter The size of two array");
        int a = sc.nextInt();
        int b = sc.nextInt();
        int [a] arr1;
        int [b] arr2;
        System.out.print("Enter the Value of array 1");
        for(int i = 0; i < a; i++){
            arr1[i] = sc.nextInt();
        }
        System.out.print("Enter the value of array 2");
        for(int i = 0;i < b; i++){
            arr2[i] = sc.nextInt();
        }

        for(int i = 0; i < a; i++){
            for(int j = 0; j < b; j++){
                if(arr1[i] == arr2[j]){
                    System.out.println(arr[i] + " in " + i + " no position of Array 1 is equels to " + arr[j] + " in " + j + " no position of Array 1");
                }
            }
        }
    }
}