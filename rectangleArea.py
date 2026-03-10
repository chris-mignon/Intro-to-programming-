#area function to calculate the area of a rectangle
'''This function takes the length and width of a rectangle as input parameters, calculates the area by multiplying them together, and returns the result. The area is calculated using the formula: Area = Length x Width.
Parameters:
- l: The length of the rectangle.
- w: The width of the rectangle.
Returns:- The area of the rectangle calculated as the product of length and width.
''' 
def area(l,w):
    area = l* w
    return area
    
#getdoubleInRange function to validate user input
'''This function prompts the user for a double value within a specified range (low to high). It continues to prompt until a valid input is received. If the input is not a valid number or is outside the specified range, it displays an error message and prompts again.
Parameters:
- prompt: A string message to display to the user when asking for input.    
- low: The lower bound of the valid range for the input.
- high: The upper bound of the valid range for the input.
Returns:- A valid double value entered by the user that falls within the specified range.'''
def getdoubleInRange(prompt, low, high):
    while True:
        try:
            value = float(input(prompt))
            if low <= value <= high:
                return value
            else:
                print(f"Please enter a number between {low} and {high}.")
        except ValueError:
            print("Invalid input. Please enter a valid number.")

#main function to execute the program
def main():
     # Define prompts for user input for length and width of the rectangle, specifying the valid range (between 5 and 10).
    lenghtPrompt = "Enter the length of the rectangle (between 5 and 10): "
    widthPrompt = "Enter the width of the rectangle (between 5 and 10): "

        # Call the getdoubleInRange function to get valid length and width values from the user, ensuring they are within the specified range of 5 to 10.
    lenght = getdoubleInRange(lenghtPrompt, 5, 10)

    # Call the getdoubleInRange function again to get the width from the user, ensuring it is also within the specified range of 5 to 10.
    width = getdoubleInRange(widthPrompt, 5, 10)

        # Call the area function to calculate the area of the rectangle using the length and width provided by the user, and store the result in the variable Rec_area.
    Rec_area = area(lenght, width)
    
   # Display the calculated area to the user with a descriptive message.
    print( "The area of the rectangle is ",Rec_area)
    
main()