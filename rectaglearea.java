// This program calculates the area of a rectangle based on user input for length and width.
// The user is prompted to enter the length and width, which must be between 5 and 10. The program then calculates and displays the area of the rectangle.

import java.util.Scanner; // Import the Scanner class to read user input


class Main {
    // Method to get a double input from the user within a specified range
    // This method prompts the user with a message and continues to ask for input until a valid number within the range is entered.
    // Parameters:
    // - scan: Scanner object to read user input
    // - prompt: The message to display to the user when asking for input
    // - min: The minimum acceptable value for the input
    // - max: The maximum acceptable value for the input
     public static double getdoubleInRange(Scanner scan, String prompt, double min, double max) {
        double input = min - 1; // Initialize with an invalid value

        // Loop until a valid input is received
        while (input < min || input > max) {
            System.out.print(prompt);// Display the prompt message to the user
            String rawInput = scan.nextLine();// Read the user's input as a string
            // Try to parse the input as a double and check if it's within the specified range
            try {
                input = Double.parseDouble(rawInput);// Convert the input string to a double
                // Check if the input is within the specified range
                if (input < min || input > max) {
                    System.out.println("Invalid input. Please enter a number between " + min + " and " + max + ".");
                }
                // If the input is valid, the loop will exit. Otherwise, it will prompt the user again.
            } catch (NumberFormatException e) {
                System.out.println("Invalid input. Please enter a number.");// Handle the case where the input cannot be parsed as a double
            }
        }
        return input; // Return the valid input received from the user
    }
    
    // Method to calculate the area of a rectangle given its length and width
    // Parameters:
    // - l: The length of the rectangle
    // - w: The width of the rectangle
    public static double findArea(double l,double w)
    {
        return l * w; // Calculate and return the area by multiplying length and width
    }
    
    // The main method where the program execution begins
    public static void main(String[] args) {
        
        // Declare variables for length, width, and area. Also, define messages for prompting the user.
        double lenght, width, area;
        String widthMsg= "Enter the Width: ", lenghtMsg ="Enter the Lenght: ";
        // Create a Scanner object to read input from the user
        Scanner  keyBoard = new Scanner(System.in);
        
        // call the getdoubleInRange method to get the length and width from the user, ensuring they are within the specified range of 5 to 10.
        lenght =getdoubleInRange(keyBoard,lenghtMsg,5,10);
        
        // Call the getdoubleInRange method again to get the width from the user, ensuring it is also within the specified range of 5 to 10.
         width = getdoubleInRange(keyBoard,widthMsg,5,10);
         
         // Call the findArea method to calculate the area of the rectangle using the length and width provided by the user.
         area = findArea(lenght, width);

            // Display the calculated area to the user.
         System.out.println("The area is: "+ area);
    }
}