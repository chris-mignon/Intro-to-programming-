import java.util.Scanner;
class HelloWorld {
    //Global Variables
    public static int  average, total = 0;
    
    
    public static int findlowest(int[] arr){
      int min = arr[0];
      for(int i = 1; i < 20; i++){
          if(arr[i]< min){
              min = arr[i];
          }
      }
      return min;
    }
    
    public static int findhighest(int[] arr ){
        int max = arr[0];
        for(int i = 1; i < 20; i++){
            if(arr[i]> max){
                max = arr[i];
            }
        }
        return max;
    }
    
    public static int findtotal(int[] arr){
        for( int i = 0; i < arr.length; i++){
            total += arr[i];
        }
        return total;
    }
    public static void main(String[] args) {
        int[] nums = new int[20];
        Scanner getVal = new Scanner(System.in);
        System.out.println("Enter 20 numbers");
        
        // to accept values from the user in a loop
        for(int i = 0; i < 20; i ++){
            System.out.print("Enter Value No. ");
            System.out.println(i + 1);
            nums[i] = getVal.nextInt();
        }
        
        // display the lowest
        System.out.println(" The Lowest value is: "+findlowest(nums));
        //display the highest
         System.out.println(" The Highest value is: "+findhighest(nums));
         //display the total
         System.out.println(" The total value is: "+findtotal(nums));
         //display the average
         average = total / 20;
         System.out.println(" The average value is: "+ average);
    }
}