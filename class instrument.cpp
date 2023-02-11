// CSCI 1300 Fall 2022
//Author: Jeremiah Heredia
//Recitation: 206- Tuan Tran
// Homework 3 Problem 5

#include <iostream>
using namespace std;
int main()
{
    // define variables
    char department;
    char course;
    char section;
    
    //Prompt user to select department
    cout << "Select a department: (1)Computer Science (2)Math (3)Science \n";
    cin >> department;
    // check that validity of the department in this case it must be 1,2, or 3
    if(department != '1' && department != '2' && department != '3'){
        cout << "Please enter a valid input.\n";
        return 0;
    }
    
    // when department 1 is chosen promp the user to select their class
    if (department == '1'){
        cout << "Select a class: (1)Starting Computing (2)Data Structures (3)Algorithms\n";
        cin >> course;
    }
        
        // check the validity of the input
        if (course != '1' && course != '2' && course != '3'){
            cout << "Please enter a valid input.\n";
            return 0;
        }
     //Starting

        //when department 1 and class 1 are choosen prompt the user to select a section
        if (course == '1'){
            cout << "Select a section: (1)Section 100 (2)Section 200\n";
            cin >> section;
           
            // check the validity of the section input
            if (section != '1' && section != '2'){
                cout << "Please enter a valid input.\n";
                return 0;
            }

            //output the descision depending on the section selection
            if (section == '1'){
                cout << "You've been enrolled in Section 100 of Starting Computing!\n";
            }
            if (section == '2'){
                cout << "You've been enrolled in Section 200 of Starting Computing!\n";
            }
        }
     //Data    
        // when department 1 and class 2 are chosen promp the user to select their section
        if (course == '2'){
            cout << "Select a section: (1)Section 101 (2)Section 201\n";
            cin >> section;
           
           //check valifity of the section selection
            if (section != '1' && section != '2'){
                cout << "Please enter a valid input.\n";
                return 0;
            }
            // output the decision depending on the section selection
            if (section == '1'){
                cout << "You've been enrolled in Section 101 of Data Structures!\n";
            }
            if (section == '2'){
                cout << "You've been enrolled in Section 201 of Data Structures!\n";
            }
        }
     //Alg
        

        //when department 1 and class 3 are chosen promp the user to select their section
        
        if (course == '3'){
            cout << "Select a section: (1)Section 102 (2)Section 202\n";
            cin >> section;
            
            //check validity of section selection
            if (section != '1' && section != '2'){
                cout << "Please enter a valid input.\n";
                return 0;
            }
            
            // output the decision depending on section selection
            if (section == '1'){
                cout << "You've been enrolled in Section 102 of Algorithms!\n";
            }
            if (section == '2'){
                cout << "You've been enrolled in Section 202 of Algorithms!\n";
            }
        }
    
    
    //when department 2 is chosen prompt user to select their class
    else if (department == '2'){
        cout << "Select a class: (1)Calculus 1 (2)Calculus 2 (3)Linear Algebra\n";
        cin >> course;
        
        // check validity of input 
        if (course != '1' && course != '2' && course != '3'){
            cout << "Please enter a valid input.\n";
            return 0;
        }

     //calc1
       

        //when department 2 and class 1 are chosen promp the user to select their section
        if (course == '1'){
            cout << "Select a section: (1)Section 400 (2)Section 500\n";
            cin >> section;
            // check validity of input
            if (section != '1' && section != '2'){
                cout << "Please enter a valid input.\n";
                return 0;
            }
            //// output the decision depending on section selection
            if (section == '1'){
                cout << "You've been enrolled in Section 400 of Calculus 1!\n";
            }
            if (section == '2'){
                cout << "You've been enrolled in Section 500 of Calculus 1!\n";
            }
        }
     //calc2    
        // when department 2 and class 2 are chosen prompt user to select a section
        if (course == '2'){
            cout << "Select a section: (1)Section 401 (2)Section 501\n";
            cin >> section;
            //check validity of input
            if (section != '1' && section != '2'){
                cout << "Please enter a valid input.\n";
                return 0;
            }
            // output the decision depending on section selection
            if (section == '1'){
                cout << "You've been enrolled in Section 401 of Calculus 2!\n";
            }
            if (section == '2'){
                cout << "You've been enrolled in Section 501 of Calculus 2!\n";
            }
        }
     //linear
        
        //when department 2 and class 3 are chosen prompt user to select a section
        if (course == '3'){
            cout << "Select a section: (1)Section 402 (2)Section 502\n";
            cin >> section;
            
            //check validty of input
            if (section != '1' && section != '2'){
                cout << "Please enter a valid input.\n";
                return 0;
            }

            // ouput decision depending on section selection 
            if (section == '1'){
                cout << "You've been enrolled in Section 402 of Linear Algebra!\n";
            }
            if (section == '2'){
                cout << "You've been enrolled in Section 502 of Linear Algebra!\n";
            }
        }
    }
    //when department 3 is chosen prompt user to select their class
    else if (department == '3'){
        cout << "Select a class: (1)General Chemistry 1 (2)Physics 1\n";
        cin >> course;
        
        //check validity of input
        if (course != '1' && course != '2'){
            cout << "Please enter a valid input.\n";
            return 0;
        }
     //Gen chem

        //when department 3 and class 1 are chosen prompt user to select a section
        if (course == '1'){
            cout << "Select a section: (1)Section 700 (2)Section 800\n";
            cin >> section;

            //check validty of input
            if (section != '1' && section != '2'){
                cout << "Please enter a valid input.\n";
                return 0;
            }
            
            // ouput decision depending on section selection 
            if (section == '1'){
                cout << "You've been enrolled in Section 700 of General Chemistry 1!\n";
            }
            if (section == '2'){
                cout << "You've been enrolled in Section 800 of General Chemistry 1!\n";
            }
        }
     // Physics   


         //when department 3 and class 2 are chosen prompt user to select a section
        if (course == '2'){
            cout << "Select a section: (1)Section 701 (2)Section 801\n";
            cin >> section;
            //check validty of input
            if (section != '1' && section != '2'){
                cout << "Please enter a valid input.\n";
                return 0;
            }
            // output decision depending on section decision 
            if (section == '1'){
                cout << "You've been enrolled in Section 701 of Physics 1!\n";
            }
            if (section == '2'){
                cout << "You've been enrolled in Section 801 of Physics 1!\n";
            }
        }
    }
    return 0;
}
