#area function 
def area(l,w):
    area = l* w
    return area
    

def main():
    lenght =float(input("Enter the lenght of the rectangle "))
    width = float( input("Enter the width of the rectangle "))
    #Rec_area = area(lenght, width)
    
    print(area(lenght, width))
    #print( "The area of the rectangle is ",Rec_area)
    
main()