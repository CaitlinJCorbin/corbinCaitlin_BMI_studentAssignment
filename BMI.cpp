/* Program name: BMI Program
*  Author: Caitlin J. Corbin
*  Date last updated: Feb. 2, 2020
* Purpose: Reads a file and manipulated data, finds BMI.
*/
#include <iostream> //standard opening
#include <fstream> //reads and creates files

using namespace std; //standard opening

int main(){
    ifstream theFile ("BMI.dat"); //gets file data

    string name; //declaring variables
    double weightInKG, weightInPounds, BMI; //declaring variables
    int heightInCM, heightInIN; //declaring variables

    while(theFile >> name >> weightInKG >> heightInCM){ //loop that reads file and manipulates data

        cout << "Original data: \n"; //tells user this data set is the original
        cout << "Name: " << name << ", Weight: " << weightInKG << "kg, Height: " << heightInCM << "cm \n"; //displays original info to user

            heightInIN = heightInCM / 2.54; //converts CM height into IN height

            weightInPounds = weightInKG * 2.2; //converts KG weight into Lbs weight

            BMI = 703 * weightInPounds / (heightInIN * heightInIN); //formula that calculates BMI


        cout << "Converted data: \n"; //tells user this data set is converted
        cout << "Name: " << name << ", Weight: " << weightInPounds << "lbs, Height: " << heightInIN << "in, " << "BMI: " << BMI << "\n";
        //line 30 just displays the manipulated data to the user

    if(BMI < 18.5) //calculates if BMI is underweight
        cout << "Underweight \n\n"; //displays "underweight" to user if condition is met
    if(BMI > 18.5 && BMI < 25) //calculates if BMI is optimal
        cout << "Optimal weight \n\n"; //displays "optimal weight" to user if condition is met
    if(BMI > 25) //calculates if BMI is overweight
        cout << "Overweight \n\n"; //displays "overweight" to user if condition is met
    }

    return 0; //standard end

}
