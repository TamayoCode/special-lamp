#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>

struct Variable {

    std::string space;
    bool check = false;

}var;

class BasicCalculator {

public:

    std::string Value = "";
    std::string AddingTheValue1 = "";
    std::string AddingTheValue2 = "";

    double num1, num2, num3;
    double Answer = 0;
    size_t size;
  
  
    size_t count = 0;

    void Title() {

        system("cls");
        std::cout << "\v\v\v";
        std::cout << "\t\t\t\t\t\tBASIC CALCULATOR" << std::endl;
        std::cout << std::endl;

    }



    void InputValue() {

        std::cout << "\t\t\tValue: ";
        std::getline(std::cin, Value);
        
        var.check = Value == " " || Value == "" ? true:false;

    }


    void Check_the_Value() {

        if (Value == "EXIT" || Value == "exit" || Value == "X") {
            exit(1);
        }

        if (Value[0] == '-') {
            AddingTheValue1 += "-";
            count++;
        }
    }
    

    void Loop_For_First_Operator() {

        Value += "=";
        size = Value.size();

        for (size_t i = count; i < size; i++) {

            if (Value[i] == '+') {
             
                std::stringstream s1(AddingTheValue1);
                s1 >> num1;
                Answer += num1;
                count++;

                for (size_t i = count; i < size; i++) {

                    
                    if (Value[i] == '+' ||
                        Value[i] == '-' ||
                        Value[i] == '*' ||
                        Value[i] == '/' ||
                        Value[i] == '=')
                    {
                        break;
                    }

                    AddingTheValue2 += Value[i];
                    count++;
                }

                
                std::stringstream s2(AddingTheValue2);
                s2 >> num2;
                Answer += num2;
                break;
            }

            else if (Value[i] == '-') {

                std::stringstream s1(AddingTheValue1);
                s1 >> num1;
                Answer += num1;
                count++;

                for (size_t i = count; i < size; i++) {

                    if (Value[i] == '+' ||
                        Value[i] == '-' ||
                        Value[i] == '*' ||
                        Value[i] == '/' ||
                        Value[i] == '=')
                    {
                        break;
                    }

                    AddingTheValue2 += Value[i];
                    count++;
                }

                std::stringstream s2(AddingTheValue2);
                s2 >> num2;
                Answer -= num2;
                break;
            }

            else if (Value[i] == '*') {

                std::stringstream s1(AddingTheValue1);
                s1 >> num1;
                Answer += num1;
                count++;

                for (size_t i = count; i < size; i++) {

                    if (Value[i] == '+' ||
                        Value[i] == '-' ||
                        Value[i] == '*' ||
                        Value[i] == '/' ||
                        Value[i] == '=')
                    {
                        break;
                    }

                    AddingTheValue2 += Value[i];
                    count++;
                }

                std::stringstream s2(AddingTheValue2);
                s2 >> num2;
                Answer *= num2;
                break;
            }

            else if (Value[i] == '/') {

                std::stringstream s1(AddingTheValue1);
                s1 >> num1;
                Answer += num1;
                count++;

                for (size_t i = count; i < size; i++) {

                    if (Value[i] == '+' ||
                        Value[i] == '-' ||
                        Value[i] == '*' ||
                        Value[i] == '/' ||
                        Value[i] == '=')
                    {
                        break;
                    }

                    AddingTheValue2 += Value[i];
                    count++;
                }

                std::stringstream s2(AddingTheValue2);
                s2 >> num2;
                Answer /= num2;
                break;
            }

            AddingTheValue1 += Value[i];
            count++;

        }

    }


    void Loop_For_Rest_Operator() {

        if (count < size) {

            do {

                AddingTheValue1 = "";

                if (Value[count] == '=') {
                    break;
                }

                if (Value[count] == '+') {

                    for (size_t i = count + 1; i < size; i++) {

                        if (Value[i] == '+' ||
                            Value[i] == '-' ||
                            Value[i] == '*' ||
                            Value[i] == '/' ||
                            Value[i] == '=') {

                            std::stringstream s3(AddingTheValue1);
                            s3 >> num3;
                            Answer += num3;
                            count++;
                            break;
                        }

                        AddingTheValue1 += Value[i];
                        count++;

                    }
                }

                else if (Value[count] == '-') {

                    for (size_t i = count + 1; i < size; i++) {

                        if (Value[i] == '+' ||
                            Value[i] == '-' ||
                            Value[i] == '*' ||
                            Value[i] == '/' ||
                            Value[i] == '=') {

                            std::stringstream s3(AddingTheValue1);
                            s3 >> num3;
                            Answer -= num3;
                            count++;
                            break;
                        }

                        AddingTheValue1 += Value[i];
                        count++;

                    }
                }

                else if (Value[count] == '*') {

                    for (size_t i = count + 1; i < size; i++) {

                        if (Value[i] == '+' ||
                            Value[i] == '-' ||
                            Value[i] == '*' ||
                            Value[i] == '/' ||
                            Value[i] == '=') {

                            std::stringstream s3(AddingTheValue1);
                            s3 >> num3;
                            Answer *= num3;
                            count++;
                            break;
                        }

                        AddingTheValue1 += Value[i];
                        count++;

                    }
                }
                else if (Value[count] == '/') {

                    for (size_t i = count + 1; i < size; i++) {

                        if (Value[i] == '+' ||
                            Value[i] == '-' ||
                            Value[i] == '*' ||
                            Value[i] == '/' ||
                            Value[i] == '=') {

                            std::stringstream s3(AddingTheValue1);
                            s3 >> num3;
                            Answer /= num3;
                            count++;
                            break;
                        }

                        AddingTheValue1 += Value[i];
                        count++;

                    }
                }


 
            } while (count < size);

        }

    }

    void answer() {

        std::cout << "\t\t\t\t\t\t\t\t\t\t" << Answer << std::endl;
    }

    void Check_Loop() {


        std::cout << std::endl;
        std::cout << "\t\t\t\tPress Enter To Continue: ";
        std::getline(std::cin, var.space);


    }
};


int main() {

    BasicCalculator BC;

    do{
        do {
           
            BC.Title();
            BC.InputValue();
            BC.Check_the_Value();
        } while (var.check);
        BC.Loop_For_First_Operator();
        BC.Loop_For_Rest_Operator();
        BC.answer();
        BC.Check_Loop();
    } while (1);
    return 0;
}