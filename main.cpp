#include <iostream>
 
int main() {
    int day;
    char choice;
 
    choice = 'y';
    while(choice == 'y'||choice == 'Y' ){
        std::cout << "DAY OF THE WEEK" << std::endl;
        std::cout << "1 - Monday" << std::endl;
        std::cout << "2 - Teusday" << std::endl;
        std::cout << "3 - Wednesday" << std::endl;
        std::cout << "4 - Thursday" << std::endl;
        std::cout << "5 - Friday" << std::endl;
        std::cout << "6 - Staturday" << std::endl;
        std::cout << "7 - Sunday" << std::endl;
        std::cout << "" << std::endl;
 
        std::cout << "Enter a number (1-7): ";    
        std::cin >> day;
 
        switch (day)
        {
            case 1:
                std::cout << "You selected Monday" << std::endl;
                break;        
            case 2:
                std::cout << "You selected Teusday" << std::endl;
                break;
            case 3:
                std::cout << "You selected Wednesday" << std::endl;
                break;
            case 4:
                std::cout << "You selected Thursday" << std::endl;
                break;
            case 5:
                std::cout << "You selected Friday" << std::endl;
                break;
            case 6:
                std::cout << "You selected Staturday" << std::endl;
                break;
            case 7:
                std::cout << "You selected Sunday" << std::endl;
                break;
            default:
                std::cout << "Invalid input!" << std::endl;
                break;
        }
 
       
        invalidInput:
        std::cout << "Do you want to try again? (y/n): ";        
        std::cin >> choice;
 
        switch(choice){
            case 'y':
            case 'Y':  
                break;                                        
            case 'n':
            case 'N':            
                break;
            default:
                std::cout << "Invalid input!" << std::endl;
                goto invalidInput;
        }
    }
 
    std::cout << "Terminating application...";
    return 0;
}
 
 