#include <iostream>
#include <iomanip>
 
int main() {
    int day;
    char choice;
 
    choice = 'y';
    while(choice == 'y'||choice == 'Y' ){
        std::cout << "+-----+-------------+" << std::endl;
        std::cout << "| No. | Day of Week |" << std::endl;
        std::cout << "+-----+-------------+" << std::endl;
        std::cout << "| " << std::setw(3) << "1" << " | " << std::setw(11) << "Monday" << " |" << std::endl;
        std::cout << "| " << std::setw(3) << "2" << " | " << std::setw(11) << "Tuesday" << " |" << std::endl;
        std::cout << "| " << std::setw(3) << "3" << " | " << std::setw(11) << "Wednesday" << " |" << std::endl;
        std::cout << "| " << std::setw(3) << "4" << " | " << std::setw(11) << "Thursday" << " |" << std::endl;
        std::cout << "| " << std::setw(3) << "5" << " | " << std::setw(11) << "Friday" << " |" << std::endl;
        std::cout << "+-----+-------------+" << std::endl;
        std::cout << "";    
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
 
 