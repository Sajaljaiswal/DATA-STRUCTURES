import java.io.*;

rec1(int n){
    
    if(n == 0){
        return 1;
    }
    else{
        int j;
        j = j + rec1(n);
        n-=1; 
    }
}

class patt1
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter a number to find its sum :");
        int num = sc.nextInt();
        rec1(num);}
    }
