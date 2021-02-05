//
//  P2_BogartN.cpp
/* This program takes input from a user and outputs the user's BMR (basal metabolic rate). It also calculates how many chocolate bars the user could eat daily to maintain their weight.
 */
//
//  Created by Nicole Bogart on 2/4/21.
//

#include <iostream>
using namespace std;

int main() {
    
    
    int weight; // in pounds
    int height; // in inches
    int age; // in years
    char gender; // M or F
    double BMR; // formula dependent on gender
    double chocolateBars; // 230 calories * BMR
    char tryAgain; // Y or N
    
    
    cout << "Please enter a weight (in pounds). \n";
    cin >> weight;
    cout << "Please enter a height (in inches). \n";
    cin >> height;
    cout << "Please enter an age (in years). \n";
    cin >> age;
    cout << "Please enter M for male or F for female. \n";
    cin >> gender;
    
    
    if (gender == 'M' || gender == 'm')
    {
        BMR = 66 + (6.3 * weight) + (12.9 * height) - (6.8 * age);
        chocolateBars = BMR / 230;
        cout << "He needs " << BMR << " calories to maintain his weight. \n";
        cout << "That is about " << chocolateBars << " chocolate bars worth of calories.";
    }
    
    
    else if (gender == 'F' || gender == 'f')
    {
        BMR = 655 + (4.3 * weight) + (4.7 * height) - (4.7 * age);
        chocolateBars = BMR / 230;
        cout << "She needs " << BMR << " calories to maintain her weight. \n";
        cout << "That is about " << chocolateBars << " chocolate bars worth of calories.";
    }
    
    
    else
    {
        cout << "Incorrect character entered for gender. Please try again. Enter M for male or F for female. \n";
        cin >> gender;
        if (gender == 'M' || gender == 'm')
        {
            BMR = 66 + (6.3 * weight) + (12.9 * height) - (6.8 * age);
            chocolateBars = BMR / 230;
            cout << "He needs " << BMR << " calories to maintain his weight. \n";
            cout << "That is about " << chocolateBars << " chocolate bars worth of calories.";
        }
        else if (gender == 'F' || gender == 'f')
        {
            BMR = 655 + (4.3 * weight) + (4.7 * height) - (4.7 * age);
            chocolateBars = BMR / 230;
            cout << "She needs " << BMR << " calories to maintain her weight. \n";
            cout << "That is about " << chocolateBars << " chocolate bars worth of calories.";
        }
        
    }
    
    
    cout << "Would you like to do another calculation? Please enter Y for yes, or N for no. \n";
    cin >> tryAgain;
    
    if (tryAgain == 'Y' || tryAgain == 'y')
    {
        cout << "Please enter a weight (in pounds). \n";
        cin >> weight;
        cout << "Please enter a height (in inches). \n";
        cin >> height;
        cout << "Please enter an age (in years). \n";
        cin >> age;
        cout << "Please enter M for male or F for female. \n";
        cin >> gender;
        
        if (gender == 'M' || gender == 'm')
        {
            BMR = 66 + (6.3 * weight) + (12.9 * height) - (6.8 * age);
            chocolateBars = BMR / 230;
            cout << "He needs " << BMR << " calories to maintain his weight. \n";
            cout << "That is about " << chocolateBars << " chocolate bars worth of calories.";
        }
        else if (gender == 'F' || gender == 'f')
        {
            BMR = 655 + (4.3 * weight) + (4.7 * height) - (4.7 * age);
            chocolateBars = BMR / 230;
            cout << "She needs " << BMR << " calories to maintain her weight. \n";
            cout << "That is about " << chocolateBars << " chocolate bars worth of calories.";
        }
        else
        {
            cout << "Incorrect character entered for gender. Please try again. Enter M for male or F for female. \n";
            cin >> gender;
            if (gender == 'M' || gender == 'm')
            {
                BMR = 66 + (6.3 * weight) + (12.9 * height) - (6.8 * age);
                chocolateBars = BMR / 230;
                cout << "He needs " << BMR << " calories to maintain his weight. \n";
                cout << "That is about " << chocolateBars << " chocolate bars worth of calories.";
            }
            else if (gender == 'F' || gender == 'f')
            {
                BMR = 655 + (4.3 * weight) + (4.7 * height) - (4.7 * age);
                chocolateBars = BMR / 230;
                cout << "She needs " << BMR << " calories to maintain her weight. \n";
                cout << "That is about " << chocolateBars << " chocolate bars worth of calories. \n";
            }
            
            cout << "Would you like to do another calculation? Please enter Y for yes, or N for no. \n";
            cin >> tryAgain;
            
        }
        
        
        if (tryAgain == 'N' || tryAgain == 'n')
            cout << "Thank you for using my BMR calculator. Goodbye! \n";
        
    }
    
    else
        cout << "Thank you for using my BMR calculator. Goodbye! \n";
    
    
}

