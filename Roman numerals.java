import java.util.Scanner;


class Main {
    public static void main(String[] args) {
        int num;
        //create a scanner object to take input from user
        Scanner obj1 = new Scanner(System.in);
        System.out.println("Enter the number within the range 1~10");
         num = obj1.nextInt();
        
        if(num == 1){
           System.out.println("I"); 
        }
        else if(num == 2){
            System.out.println("II");
        }
        else if(num == 3){
            System.out.println("III");
        }
        else if(num == 4){
            System.out.println("IV");
        }
        else if(num ==5){
            System.out.println("V");
        }else if(num ==6){
            System.out.println("VI");
        }else if(num ==7){
            System.out.println("VII");
        }else if(num ==8){
            System.out.println("VIII");
        }else if(num ==9){
            System.out.println("IX");
        }else if(num ==10){
            System.out.println("X");
        }else {
            System.out.println("error message");
        }
       // System.out.println("Try programiz.pro");
    }
}