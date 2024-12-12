#include <iostream>
#include <cmath>
#include <limits>
#include <cstdlib>
#include <ctime>
#include <string>
#include <windows.h>
#include <cctype>
#include <vector>

using namespace std;
void the_quotient(){		// find the quotuient between two numbers.
	double n1,n2;
	double quotient;
	
	cout <<"Enter two numbers : \n";
	cin >> n1;
	cin >> n2;
	
	if (n2==0){
		cout <<" Wrong !! it can not divisble by 0"; // beacuse id num 2 equal to zero will print error !!
	}
	else {
		quotient = n1/n2;
		cout << "the quotient of " << n1 << " and " << n2 <<" is " << quotient << endl;
	}
	
}

void ASCII_value(){			//find the value of character in ASCII
	char character;
	
	cout <<"Enter any character : ";
	cin >> character;
	// (static_cast) is used to know the value of a character in ASCII 
	cout << "The ASCII value of character [" << character <<"] is :: " << static_cast <int>(character)<<endl;
}

void size_dataType(){ 		// the size of data type.
	
	cout << "size of int : " << sizeof(int) << " bytes" << endl;
	cout << "size of float : " << sizeof (float) << " bytes" << endl; 
	cout << "size of double : " << sizeof (double) << " bytes" << endl;
	cout << "size of char : " << sizeof (char) << " bytes" << endl;
}

void swaping_2numbers(){ 	// swaping two numbers.
	int a,b,temp;
	
	cout << "Enter two numbers : \n";
	cin >> a;
	cin >> b;
	
	cout << "Number berfor swaping : a = " << a << " , b = " << b << endl;
	// here swaping the two numbers.
	temp = a;
	a = b;
	b = temp;
	
	cout << "Numbers after swaping : a = " << a << ", b = " << b << endl;	
}

void PrintPattren(){		// print star in tank form
	cout << "xxxxx" << endl;
	cout << " x   x   x   x" << endl;
	cout << " x      x  x" << endl;
	cout << " x    xxxxxxx xxxxxxx" << endl;
	cout << " x     x  x" << endl;
	cout << " x   x   x   x " << endl;
	cout << "xxxxx" << endl;
}

void area_perimeter(){     // the area and perimeter of rectangle.
	float length,width;
	float area,perimeter;
	
	cout << "Enter the length of rectangle : ";
	cin >> length;
	cout << "Enter the width of rectangle : ";
	cin >> 	width;
	
	area = length*width;
	perimeter = 2*(length+width);
	
	cout << "The area of the rectangle : " << area << endl;
	cout << "The perimeter of the rectangle : " << perimeter << endl;
}

void NameReverse(){		//Print first and last name in reverse when last name come first
	string firstName,lastName;
	
	cout <<"Write your first name : ";
	cin >> firstName;
	cout << "Write your last name : ";
	cin >> lastName;
	
	// display the names in reverse palce.
	cout << "Name in reverse is : " << lastName << " " << firstName << endl;
}

void increament_decreament(){		//display the operation of decreament and decresement.
	int num =57;
	
	cout <<"Didplay the operation of per and post increament and decrement" << endl;
	cout <<"______________________________________________________________" << endl;
	cout << "The number is : " << num << endl;  //number=57
	num++; //number here will be = 58 but will display in the second instruction.
	cout <<"After post increment by 1 the number is : " << num++ << endl; 	/* this number now = 58 in the screen. but will be =59 in the second instruction. 
																				because of >> number = number+1; number = 58+1	==59 in the second screen	*/
																																							
	cout <<"After pre increment by 1 the number is : " << num << endl; // the number now is = 59 also in the screen.
	
	cout <<"After increasing by 1 the number is : " << ++num << endl; // the number now is = 60 also in the screen because of we use increasing directly.
	num--; // number now is =59 but will display in the screen in anothor instruction. 
	cout <<"After post decrement by 1 the number is : " << num << endl; // the number will display in the screen =59
	
	cout <<"After pre decrement by 1 the number is : " << --num << endl; // the number is =58 also will display in the screen =58. because we use pre decreament.
	num--; // the number is = 57 but will display in the screen in anothor instruction.
	cout <<"After decreasing  by 1 the number is : " << num-- << endl; /* here number will be =56 but will not apear in this screen of this instructoin. 
																		but will apear in the output screen if we write ( cout << num;)	*/
}

void Kilo_miles(){			//convert the kilometer per hour to miles per hour.
	float KiloPerHours;
    
	cout<<"Convert kilometers per hour to miles per hour :"<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"Input the distance in kilometer : ";
    cin>>KiloPerHours;

    float MilesPerHours = KiloPerHours * 0.621371;
    cout<<"The "<<KiloPerHours<<" Km./hr. means "<<MilesPerHours<<" Miles/hr."<<endl;

} 

void fourNumber_avTo(){  //compute the average and the total of 4 numbers.
	float number1, number2, number3, number4, total, average;

    cout<<"Compute the total and average of four numbers :"<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"Input 1st two numbers (separated by space) : ";
    cin>>number1>>number2;

    cout<<"Input last two numbers (separated by space) : ";
    cin>>number3>>number4;

    total = number1 + number2 + number3 + number4;
    average = total / 4;

    cout<<"The total of four numbers is : "<<total<<endl;
    cout<<"The average of four numbers is : "<<average<<endl;

	
	
	
}

void max_number(){		//find the max number between 3 numbers.
	int num1,num2,num3;
	
	cout << "Enter three numbers : " << endl;
	cin >>num1>>num2>>num3;
	
	if (num1>num2){
		if (num1>num3){
			cout <<"The max number is : " << num1 << endl;
		}
		else {
			cout << "The max number is : " << num3 << endl;
		}
	}
	
	else if (num2>num3){
		cout <<"The max number is : " << num2 << endl;
	}
	else {
		cout <<"The max number is : " << num3 << endl;
	}
	
}

void tableMulti(){		// the table of Muiltipaction
	int number;
	int c=1;
	
	cout << "Enter the number :\n";
	cin >> number;
	
	for ( ; c<=10 ; ){
		
		cout << number << "*" << c << "=" << c*number << endl;
		c++;
	}	
}


void RandomNum(){		//10 Random numbers generator
	
	for (int i=0; i<10; i++){
		cout << rand() << endl;
	}	
	 
}

void Caluc_Cone(){		// calculation of the surface and voulme of a cone
	double radius,height;
	double PI= 3.14;
	cout<<"Enter the radius of the cone : "; 
	cin >> radius;
	
	cout<<"Enter the height of the cone : ";
	cin >> height;
	
	if (radius<=0 || height<=0 ){
		cout << "Wrong !! both redius and height have to be greater than 0." << endl;
	}
	
	double volume = (PI*pow(radius,2)*height)/3;  //surface area = PI*pow(redius,2)*height 
	cout << "The volum of cone is : " << volume << endl;	
	
}

void RealSolu (){   // calculation the real solution of the equation (a * x2 + b*x + c= 0)
	float a,b,c;
	
	cout <<"Enter the value of a, b, c : " << endl;
	cin >>a>>b>>c;
	
	if (a==0 && b==0 ){
		cout <<"Not a vaild equation" << endl;
	}
	
	else if (a==0){
		float x=-c/b;
		cout << "The solution is x = " << x << endl;
	}
	
	float dec = pow(b,2)-(4*a*c); // caluclation discriminater // specialized (recongnize \chossen part); 
	
	if (dec < 0){
		cout << "Not a Real Soiution."<<endl;
	}
	
	else if (dec > 0 ){
		float x1 = (-b + sqrt(dec))/2*a;
		float x2=  (-b - sqrt(dec))/2*a;
		
		cout <<"There are two solutions :" << endl;
		cout << "x1 = " << x1 << endl;
		cout<<  "x2 = " << x2 << endl;
	}	
	
	
	
	
}

void Upper_LowerCase(){ 	// to change the string to Upper or Lower case.
    int MAX_LENGTH = 100; // Maximum length of the input string
    char input[MAX_LENGTH];      // C-string to store user input
    char choice;                // Variable to store conversion choice

    cout << "Enter a string: ";
    cin.getline(input, MAX_LENGTH); // Read a line of text

    
    cout << "Convert to (U)pper-case or (L)ower-case? ";
    cin >> choice;

    // Convert to upper-case or lower-case based on user choice
    if (choice == 'U' || choice == 'u') {
        for (int i = 0; i < strlen(input); ++i) {
            if (input[i] >= 'a' && input[i] <= 'z') {
                input[i] = input[i] - 'a' + 'A'; // Convert to upper-case
            }
        }
        cout << "Converted to upper-case: " << input << endl;
    } else if (choice == 'L' || choice == 'l') {
        for (int i = 0; i < strlen(input); ++i) {
            if (input[i] >= 'A' && input[i] <= 'Z') {
                input[i] = input[i] - 'A' + 'a'; // Convert to lower-case
            }
        }
        cout << "Converted to lower-case: " << input << endl;
    } else {
        cout << "Invalid choice! Please enter 'U' or 'L'." << endl;
    }	
	
}

void ConcatStr(){ 		// to concatenate strings.		(18)
		
	string wo1,wo2,result; //wo==word.
	
	cout <<"Input the first string : ";
	cin >> wo1;
	
	cout <<"Input the second string : ";
	cin >> wo2;
	
	result = wo1+" "+wo2;
	
	cout <<"Concatented string : " << result << endl;
	
	
	
} 

void HalfPyri(){		// print the half prymaids of numbers.
	int num;
	
	cout << "Enter the number of the rows : ";
	cin >> num;
	
	for (int i=1; i<=num ;++i){ //loop inside the row.
		for (int g=1;g<=i;++g){		// print number from 1 to i
			cout << g << " ";
		}
		cout << endl; // to move into anothor type.
	}
}

void DimondStars(){			// to print Dimond of stars.
   	int rows;
	 
    cout << "Enter number of rows: ";
    cin >> rows;

    
    for (int i = 1; i <= rows; i++) {     // Upper side of the diamond
        
        for (int j = i; j < rows; j++) {  // Print for spaces
            cout << " ";
        }
        
        for (int j = 1; j <= (2 * i - 1); j++) {  // Print stars
            cout << "*";
        }
        cout << endl;
    }

    
    for (int i = rows - 1; i >= 1; i--) {   // Lower side of the diamond
        
        for (int j = rows; j > i; j--) {   // Print leading spaces
            cout << " ";
        }
        
        for (int j = 1; j <= (2 * i - 1); j++) {   // Print stars
            cout << "*";
        }
        cout << endl;
    }	
	
}

void PascalTriangle(){ 		// to print Pascal Triangle

    int rows;
    
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> rows;

    
    vector < vector<int> > triangle(rows);  // Create a 2D vector to store values of Pascal's Triangle

   
    for (int i = 0; i < rows; i++) {  // Calculate values for Pascal's Triangle
        triangle[i].resize(i + 1); // Resize the row to hold i+1 elements
        triangle[i][0] = 1; // First element of each row is 1
        triangle[i][i] = 1; // Last element of each row is 1

        
        for (int j = 1; j < i; j++) { // Calculate the values in between
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }

    
    for (int i = 0; i < rows; i++) {  // Print the triangle
       
        for (int j = 0; j < rows - i - 1; j++) {  // Print leading spaces for alignment
            cout << " ";
        }
        
        for (int j = 0; j <= i; j++) { // Print the numbers in the row
            cout << triangle[i][j] << " ";
        }
        cout << endl; // Move to the next line after each row
    }	
}

void ReversePyra(){			//to print Pyramid in Reverse Order
	int rows;
	    
    cout << "Enter the number of rows for the pyramid: ";
    cin >> rows;

    
    for (int i = rows; i >= 1; i--) { // Print the pyramid in reverse shape
        
        for (int j = 0; j < rows - i; j++) { // Print leading spaces
            cout << " ";
        }
       
        for (int j = 1; j <= (2 * i - 1); j++) { // Print stars
            cout << "*";
        }
        cout << endl; // Move to the next line after each row
    }
	
	
}

void AlphaTriangle(){ 	// to print Alphabet Triangle
    char lastChar;
	  
    cout << "Enter an uppercase letter (A-Z) for the half alphabet triangle: ";
    cin >> lastChar;

    if (lastChar < 'A' || lastChar > 'Z') {
        cout << "Please enter a valid uppercase letter (A-Z)." << endl;
        return ; // Exit if input is invalid
    }
    
    int rows = lastChar - 'A' + 1;   	// Calculate the number of rows based on the letter
	    
    for (int i = 0; i < rows; i++) {   // Print the half alphabet triangle
        // Print the same letter for each line
        char currentChar = 'A' + i; // Determine the current letter
        for (int j = 0; j <= i; j++) {
            cout << currentChar << " "; // Print the current letter
        }
        cout << endl; // go to the next line after each row
    }
}

void Fibonacci_Series(){ // to print Fibonacci Series.
    int n, limit;
	  
    cout << "Enter the number of terms for Fibonacci series: ";
    cin >> n;

    int t1 = 0, t2 = 1, nextTerm;

    cout << "Fibonacci Series up to " << n << " terms: ";
    
    for (int i = 1; i <= n; ++i) {
        cout << t1;
        if (i < n) {
            cout << ", ";
        }

        // Compute the next term
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    cout << endl;

    // Input for limit
    cout << "Enter the limit for Fibonacci series: ";
    cin >> limit;

    t1 = 0;
    t2 = 1;

    cout << "Fibonacci Series up to " << limit << ": ";
    
    while (t1 <= limit) {
        cout << t1;
        if (t1 + t2 <= limit) {
            cout << ", ";
        }

        // Compute the next term
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    cout  << endl;
	
	
	
	
	
	
}

void Remove_inString(){ 	//to remove all character in string except alphabits.
    string input;
    string result;

    cout << "Enter a string: ";
    cin >> input;

    // Iterate over each character in the input string using a standard for loop
    for (size_t i = 0; i < input.length(); ++i) {
        char c = input[i];  // Access each character
        // Check if the character is an alphabet
        if (isalpha(c)) {
            result += c; // Append to result if it's an alphabet
        }
    }

    cout << "String after removing non-alphabet characters: " << result << endl;	
}

void lenghtString(){	//to find the lenght of string
    string word;
    
    cout << "Enter a string: ";
    cin >> word;

    size_t length = word.length(); // Find the length of the string

    cout << "length of the string is : " << length << endl;
}

void Different_string(){  // to  find the vowel , constant, number, white space in string
   string input;
   int vowels = 0, consonants = 0, digits = 0, whitespace = 0;

    cout << "Enter a string: ";
    cin >> input;

    // Iterate over each character in the input string using a traditional for loop
    for (size_t i = 0; i < input.length(); ++i) {
        char c = input[i];  // Access each character using an index
        // Check for vowels
        if (isalpha(c)) {
            char lowerC = tolower(c);  // Convert to lowercase for uniformity
            if (lowerC == 'a' || lowerC == 'e' ||  lowerC == 'i' || lowerC == 'o' || lowerC == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (isdigit(c)) {
            digits++;
        } else if (isspace(c)) {
            whitespace++;
        }
    }

    // Output the results
    cout << " vowels: " << vowels << endl;
    cout << " consonants: " << consonants << endl;
    cout << " digits: " << digits << endl;
    cout << " whitespace characters: " << whitespace << endl;	
}

void characetr_digit(){		// to check the symbol is a character or digit.
    char input;

    cout << "Enter a symbol: ";
    cin >> input;

    
    if (isalpha(input)) { // Check if the input is an alphabetic character
        cout << input << " is a character." << endl;
    }
    
    else if (isdigit(input)) { 	// Check if the input is a digit
        cout << input << " is a digit." << endl;
    }
    
    else {	// non of perviuos conditions
        cout << input << " is neither a character nor a digit." << endl;
    }	
	
	
}

void HoursFormat(){			// to print 24 Hours && 12 Hours.
    int hours, minutes, seconds;

    cout << "Enter hours (0-23): ";
    cin >> hours;
    cout << "Enter minutes (0-59): ";
    cin >> minutes;
    cout << "Enter seconds (0-59): ";
    cin >> seconds;

    // Validate input
    if (hours < 0 || hours > 23 || minutes < 0 || minutes > 59 || seconds < 0 || seconds > 59) {
        cout << "Invalid time input!" << endl;
        return; // Exit with an error code
    }

    cout << "24-Hour Format: ";
    cout << (hours < 10 ? "0" : "") << hours << ":" 
         << (minutes < 10 ? "0" : "") << minutes << ":" 
         << (seconds < 10 ? "0" : "") << seconds << endl;

    // Convert to 12-hour format
    int hours12 = hours % 12; // Convert to 12-hour format
    if (hours12 == 0) {
        hours12 = 12; // Adjust for 12 AM/PM
    }
    string period = (hours < 12) ? "AM" : "PM"; // Determine AM or PM

    // Print in 12-hour format
    cout << "12-Hour Format: ";
    cout << (hours12 < 10 ? "0" : "") << hours12 << ":" 
         << (minutes < 10 ? "0" : "") << minutes << ":" 
         << (seconds < 10 ? "0" : "") << seconds << " " << period << endl;	
}

void RightTriangler_loop(){	//to print Right Triangler with Loop
    int height;

    cout << "Enter the height of the triangle: ";
    cin >> height;

    // Print the right triangle pattern
    for (int i = 1; i <= height; ++i) {
        // Print stars for each row
        for (int j = 1; j <= i; ++j) {
            cout << "* "; // Print a star followed by a space
        }
        cout << endl; // go to the next line after each row
    }
} 

void numric_intGrade(){		//To select Numric intager Grade
    int numeric_grade;

    cout << "Enter a numeric grade (20-66): ";
    cin >> numeric_grade;

    // Check if the numeric_grade is within the valid range
    if (numeric_grade < 20 || numeric_grade > 66) {
        cout << "Invalid grade entered." << endl;
        return; // Exit with an error code
    }

    // Obtain an integer value between 2 and 6
    int int_value = (numeric_grade - 20) / 10 + 2; // Maps 20-29 to 2, 30-39 to 3, etc.
    char letter_grade;
    
    switch (int_value) {
        case 6: //  60-66
            letter_grade = (numeric_grade >= 60) ? 'A' : 'B';
            break;
        case 5: //  50-59
            letter_grade = (numeric_grade >= 50) ? 'B' : 'C';
            break;
        case 4: //  40-49
            letter_grade = (numeric_grade >= 40) ? 'C' : 'D';
            break;
        case 3: //  30-39
            letter_grade = (numeric_grade >= 30) ? 'D' : 'F';
            break;
        case 2: // For values 20-29
            letter_grade = 'F';
            break;
        default:
            letter_grade = 'X'; // 
            break;
    }

   cout << "Numeric Grade: " << numeric_grade << ", Letter Grade: " << letter_grade <<endl;	
	
}

void NumStud_NumGrad(){		// to input the number of students and their grades then find the highest grade.
    int MAX_STUDENTS = 30; // Maximum number of students
    int scores[MAX_STUDENTS];     // Array to store scores
    int num_students;             // Actual number of students
    int highest_score = 0;        // Variable to hold the highest score

    cout << "Enter the number of students (up to 30): ";
    cin >> num_students;

    // check the number of students
    if (num_students < 1 || num_students > MAX_STUDENTS) {
        cout << "Invalid number of students. Please enter a number between 1 and 30." << endl;
        return; // Exit with an error code
    }

    // Input scores for each student
    for (int i = 0; i < num_students; ++i) {
        cout << "Enter score for student " << (i + 1) << ": ";
        cin >> scores[i];

        // Check for the highest score
        if (scores[i] > highest_score) {
            highest_score = scores[i];
        }
    }

    cout << "The highest score is: " << highest_score << endl;	
	
}

void count_letter(){		//to count the number of letters in string
    int MAX_LENGTH = 100; // Maximum length of the input string
    char input[MAX_LENGTH];      // C-string to store user input

    cout << "Enter a string: ";
    cin.getline(input, MAX_LENGTH); // Read a line of text

  
    int letter_count = 0;
    for (int i = 0; i < strlen(input); ++i) {
        if (isalpha(input[i])) { // Check if the character is a letter
            letter_count++;
        }
    }

    
    cout << "The number of letters in \"" << input << "\" is " << letter_count << endl;
}

void square_root(){			//to find the squrae root
    double a, b, c;
    
    cout << "Enter coefficients a, b, and c for the quadratic equation (ax^2 + bx + c = 0): ";
    cin >> a >> b >> c;

    // Calculate the discriminant
    double discriminant = b * b - 4 * a * c;  //discriminant == spicalized

    // Check the value of the discriminant
    if (discriminant < 0) {
        cout << "Square root of a negative value is not defined." << endl;
        // cout << "No square root." << endl;
    } else {
        double root = sqrt(discriminant);
        cout << "The square root of the discriminant is: " << root << endl;
	
	}
	
}

void cascading_sort (){		// to prin values and make cascading sort ti them then print them
   const int SIZE = 10;
    int arr[SIZE];

    // Input: Enter 10 values
    cout << "Enter 10 values:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << "Value " << (i + 1) << ": ";
        cin >> arr[i];
    }

    // Output: Print the original values
    cout << "\nOriginal values:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Cascading sort (Selection sort)
    for (int i = 0; i < SIZE - 1; ++i) {
        for (int j = i + 1; j < SIZE; ++j) {
            if (arr[j] < arr[i]) {
                // Swap arr[i] and arr[j]
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Output: Print the sorted values
    cout << "\nSorted values:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;	
	
}

void PrintValu_Reverse(){		// to print 7 vlaues then reverse then and print them with reversed 
    const int SIZE = 7;  // Define the size of the array
    int arr[SIZE];       // Declare the array

    // Input: Enter 7 values
    cout << "Enter 7 values:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << "Value " << (i + 1) << ": ";
        cin >> arr[i];
    }

    // Output: Print the original values
    cout << "\nOriginal values:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Reverse the array
    for (int i = 0; i < SIZE / 2; ++i) {
        // Swap arr[i] with arr[SIZE - 1 - i]
        int temp = arr[i];
        arr[i] = arr[SIZE - 1 - i];
        arr[SIZE - 1 - i] = temp;
    }

    // Output: Print the reversed values
    cout << "\nReversed values:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;	
}

void arry4x3 (){	//arry 4X6 print values then reverse them
    int ROWS = 3;
    int COLS = 4; // Number of columns
    int arr[ROWS][COLS]; // Declare the 2D array

    
    cout << "Enter values for a 3x4 array:" << endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    // Output: Print the original values
    cout << "\nOriginal array values:" << endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << arr[i][j] << "\t"; // Print with tab spacing
        }
        cout << endl;
    }

    // Reverse the 2D array
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS / 2; ++j) {
            // Swap arr[i][j] with arr[i][COLS - 1 - j]
            int temp = arr[i][j];
            arr[i][j] = arr[i][COLS - 1 - j];
            arr[i][COLS - 1 - j] = temp;
        }
    }

    // Output: Print the reversed values
    cout << "\nReversed array values:" << endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << arr[i][j] << "\t"; // Print with tab spacing
        }
        cout << endl;
    }
}

void company_system(){		// To calucate and print The rasied amount.
	
	double amount;
	double rise_amount;		//The amount with the increased presentage.
	char dep;			//the deapartment
	
	//In put the amoont and depratment.
	cout <<"Enter The amount : \n";
	cin >> amount;
	cout << "Enter the Department [A Or B Or C] : " << endl;;
	cout << "(Ente with Capital letter for the department)" << endl;
	cin >> dep;
	
	
	switch (dep){
		case 'A':
		
		int ExAge;		//	The Experance Age.
		cout << "Enter the Experance of Age : ";
		cin >> ExAge;
		
		if (ExAge>5){
			rise_amount = amount*0.025; // The raise amount here is with %2.5
			cout << "The Appropriate Rasie Amount : " << rise_amount << "$"<< endl; 
		}
		
		else {
			rise_amount = amount*0.02;	// The raise amount here is with %2
			cout << "The Appropriate Rasie Amount : " << rise_amount << "$" << endl;   
		}
		break;
		
		case 'B':
			int WorkSh;		// The Workshops
			cout << "Enter the attended Workshops : ";
			cin >> WorkSh;
			
		if (WorkSh>=5){
			rise_amount = amount * 0.05;	// The raise amount here ( with 5 or more workshops) is %5.
			cout << "The Appropriate Rasie Amount : " << rise_amount << "$" << endl;   
		}
		else {
			rise_amount = amount * 0.015;	// The raise amount here ( with less 5 workshops) is %1.5.
			cout << "The Appropriate Rasie Amount : " << rise_amount << "$" << endl; 
		}
		break;
		
		case 'C':
			rise_amount = amount * 0.01;	// The raise amount here ( we calucate rasie amount witout condition) is %1.
			cout << "The Appropriate Rasie Amount : " << rise_amount << "$" << endl; 
			break;
			
		default :
		cout << "You entered wrong Department !! " << endl;
		break;	
	}	
	
}
int main() {
    int manum, ennum;
    int enas;
     char ch;
    int num, num2, year, result2;
    time_t now = time(0);
    tm *ltm = localtime(&now);
    int currentYear = 1900 + ltm->tm_year;
    do{
	

    cout << "                                   WELCOME TO C++ BASIC PROJECT\n" << endl;
    cout << "Please Choice one of the following: \n 1- Theoretical section By Dr.Belal. \n 2- Practical section By Dr.Enas. \n 3- Exciting the porgram." << endl;
    cin >> manum;
//							 =========Start Theoretical================
    switch (manum) {
        case 1: {
            cout << "                                  Welcome to Theoretical section \n";
            cout << "Please choice only one of three following:\n 1- For Sequence Control Structure.\n 2- For Branching Control Structure \n 3- For Repeatition Control Structure \n 4- Exciting to main screen. Enter only (1-4): ";
            cin >> num;

            switch (num) {
                case 1: {
                    cout << "                                         Welcome To Sequence Control Structure\n"; // start sequence section 
                    cout << "Choice one Program Of The Following:\n 1- Area of Triangle.\n 2- Calculate AGE.\n 3- Convert Minute to Second. \n 4- Calculate Price with Tax. \n 5- Pythagorean Theorem. \n 6- Area of Circle.\n 7- Average of Three Numbers.\n 8- Amount of Sale.\n";
                    cout << "Enter The Number Of Program (Only 1-8): ";
                    cin >> num2;

                    int n1, n2, area, price, total_price;

                    switch (num2) {
                        case 1:
                            cout << "Welcome to program to calculate triangle area\nEnter the base of triangle: ";
                            cin >> n1;
                            cout << "Enter the height of triangle: ";
                            cin >> n2;
                            area = (n1 * n2) * 0.5;
                            cout << "The area of triangle = " << area << endl;
                            break;

                        case 2:
                            cout << "Enter Your Birth Year: ";
                            cin >> year;
                            result2 = currentYear - year;  // to calculate with current year to now
                            cout << "Your Age is: " << result2 << " Years" << endl;
                            break;

                        case 3:
                            cout << "Welcome to program to convert minutes to seconds\nEnter the minutes: "; // we use it to convert minunts into second 
                            int min;
                            cin >> min;
                            cout << "The conversion is: " << min * 60 << " Seconds" << endl;
                            break;

                        case 4:
                            cout << "Welcome to program to calculate total price with tax\nEnter the price: "; // price * 15%
                            cin >> price;
                            total_price = price + (price * 0.15);
                            cout << "The total price is: " << total_price << endl;
                            break;

                        case 5:
                            cout << "Welcome to program to calculate Pythagorean theorem\nEnter the value of a: ";
                            cin >> n1;
                            cout << "Enter the value of b: ";
                            cin >> n2;
                            cout << "The result = " << sqrt(n1 * n1 + n2 * n2) << endl; // call function <cmath> to calculate sqare root  of numbers 
                            break;

                        case 6:
                            cout << "Welcome to program to calculate area of circle\nEnter the radius: ";
                            int r;
                            cin >> r;
                            cout << "The area of circle is: " << 3.14 * r * r << endl;
                            break;

                        case 7:
                            cout << "Welcome to program to calculate average of three numbers\n"; 
                            int num1, num2, num3;
                            cout << "Enter the first number: ";
                            cin >> num1;
                            cout << "Enter the second number: ";
                            cin >> num2;
                            cout << "Enter the third number: ";
                            cin >> num3;
                            cout << "The average is: " << (num1 + num2 + num3) / 3.0 << endl; // the average= sum of numbers / 3 
                            break;

                        case 8:
                            cout << "Welcome to program to calculate total amount of sale\nEnter the price of book one: ";
                            int u, x;
                            cin >> u;
                            cout << "Enter the price of book two: ";
                            cin >> x;
                            cout << "The total amount is: " << u + x << endl; // u + x to calculate price 
                            break;

                        default: {// to just numbers between 1 to 8 !!
                            cout << "Error! You should only enter (1-8)!" << endl; 
                            break;

                    }
                }
                    
                }
                break;
//                                            ===============================END SUQENCE SECTION ===================================================


// =============================================================START BRANCHING SECTION=================================================================
                case 2: {
                    cout << "                                  Welcome To Branching Control Structure\n"; //start branching section 
                    cout << "Choice one Program Of The Following:\n 1- Check if number is positive, negative, or zero.\n 2- Check the maximum between two numbers.\n 3- Check if number is divisible by 5.\n 4- Check if number is odd or even.\n 5- Check if character is an alphabet or not.\n";
                    cout << "Only choice between (1-5): ";
                    int num6;
                    cin >> num6;

                    switch (num6) {
                        case 1: {
                            cout << "Enter the number: ";
                            int num0;
                            cin >> num0;
                            string result1 = (num0 > 0) ? "Positive" : (num0 < 0) ? "Negative" : "Zero"; // use it to print positive or negative or equal zero
                            cout << "The number " << num0 << " is " << result1 << endl;
                            break;
                        }

                        case 2: {
                            cout << "Welcome to program to check the maximum between two numbers\n";
                            int nu1, nu2;
                            cout << "Enter the first number: ";
                            cin >> nu1;
                            cout << "Enter the second number: ";
                            cin >> nu2;
                            if (nu1>num2){
                            	
                            	cout<<"the maximum is :"<<nu1<<endl;
                            	
							}
							else {
									cout<<"the maximum is :"<<nu2<<endl; // we use if to print the maximum between two numbers
								
							}
                            
                        
                        }

                        case 3: {
                            cout << "Enter a number: ";
                            int num;
                            cin >> num;
                            if (num % 5 == 0) {
                                cout << num << " is divisible by 5." << endl;
                            } else {
                                cout << num << " is not divisible by 5." << endl; // /5 
                            }
                            break;
                        }

                        case 4: {
                            cout << "Enter a number: ";
                            int num;
                            cin >> num;
                            cout << num << " is " << (num % 2 == 0 ? "even." : "odd.") << endl; // TO PRINT ODD OR EVEN 
                            break;
                        }

                        case 5: {
                        	char ch;
                            cout << "Enter a character: ";
                           
                            cin >> ch;
                            if ((ch>='A' && ch>='z') || (ch>='a' && ch<= 'z')) {
                                cout << ch << " is an alphabet." << endl;
                            } else {
                                cout << ch << " is not an alphabet." << endl;
                            }
                            break;
                        }

                        default:
                            cout << "Error! You should only enter between (1-5)!" << endl;
                    }
                    break;
                }
             //     ===============================END SUQENCE SECTION ===================================================


//==========================================================START REPEATIRION SECTION===================================================================
                case 3: {
                    cout << "                 Welcome to Repeatition Control Structure.\n Choice one of the following:\n 1- Print your name 5 times \n 2- print the even numbers from 0-10. \n 3- Program to calculate the multiplication of 5 (from 1 to 5).\n 4- Find the summation of first 10 numbers (from 1 to 50). \n 5- Calculate area of circle 3 times \n 6- Print the even numbers from 0 to 10 and summation \n 7- Calculate and print multiplication table from 1 to 12. \n 8- Calculate and print area of parallelogram 6 times \n 9- Simulate the division operation giving two numbers without using (/). \n 10- Simulate the multiplication operation giving two numbers without using (*)." << endl;
                    cout << "Only choice between (1-10): ";
                    int num9;
                    cin >> num9;

                    switch (num9) {
                        case 1: {
                            string name;
                            cout << "Enter your name: ";
                            cin >> name;
                            for (int i = 0; i < 5; i++)
                                cout << name << endl;
                            break;
                        }

                        case 2: {
                            cout << "Even numbers from 0 to 10: "; 
                            for (int i = 0; i <= 10; i += 2) { // start at 0 and add 2 numbers 
                                cout << i << " ";
                            }
                            cout << endl;
                            break;
                        }

                        case 3: {
                            cout << "Multiplication of 5 from 1 to 5:" << endl;
                            for (int i = 1; i <= 5; i++) {
                                cout << "5 x " << i << " = " << 5 * i << endl; 
                            }
                            break;
                        }

                        case 4: {
                            int sum = 0;
                            for (int i = 1; i <= 10; i++) {
                                sum += i;
                            }
                            cout << "The summation of the first 10 numbers is: " << sum << endl;
                            break;
                        }

                        case 5: {
                        	
                        	// USE FOR TO REPEAT 
                            for (int i = 0; i < 3; i++) {
                                int r;
                                cout << "Enter the radius of the circle: ";
                                cin >> r;
                                cout << "The area of the circle is: " << 3.14 * r * r << endl;  // 3.14 
                            }
                            break;
                        }

                        case 6: {
                            int sumEven = 0;
                            cout << "Even numbers from 0 to 10: ";
                            for (int i = 0; i <= 10; i += 2) {
                                cout << i << " ";
                                sumEven += i;
                            }
                            cout << "\n The summation of even numbers is: " << sumEven << endl;
                            break;
                        }

                        case 7: {
                            for (int i = 1; i <= 12; i++) {
                                cout << "Multiplication table for " << i << ":" << endl;
                                for (int j = 1; j <= 10; j++) {
                                    cout << i << " x " << j << " = " << i * j << endl;
                                }
                                cout << endl;
                            }
                            break;
                        }

                        case 8: {
                        	
                        	// STRAT 0 AND END 6 TO REPEAT 
                            for (int i = 0; i < 6; i++) {
                                int base, height;
                                cout << "Enter the base of the parallelogram: ";
                                cin >> base;
                                cout << "Enter the height of the parallelogram: ";
                                cin >> height;
                                cout << "The area of the parallelogram is: " << base * height << endl;
                            }
                            break;
                        }

                        case 9: {
                            int num1, num2;
                            cout << "Enter two numbers: ";
                            cin >> num1 >> num2;
                            int quotient = 0, remainder = num1;

                            while (remainder >= num2) {
                                remainder -= num2;
                                quotient++;
                            }
                            cout << "The quotient is: " << quotient << " and the remainder is: " << remainder << endl;
                            break;
                        }

                        case 10: {
                            int num1, num2, result = 0;
                            cout << "Enter two numbers: ";
                            cin >> num1 >> num2;
                            for (int i = 0; i < num2; i++) {
                                result += num1; 
                            }
                            cout << "The result of multiplication is: " << result << endl;
                            break;
                        }

                        default:
                            cout << "Error! You should only enter (1-10)! \n" << endl;
                    }
                    break; 
                }
                
                case 4:{
					
//                	exit(0);
                	
                	cout<<"Exiting to main screen...loading \n";
                	break;
}
                default:{
				
                    cout << "Error! You should only enter (1-4)! \n" << endl;
                      break;
                  }
            }
            break;
        }
        // ==================================================END REPEATION SECTION =======================================================================
        
        
//        					                           ########################==========End Theoretical===========############################


//=============================================================##Start practical##====================================================

        case 2: 
            cout << "                         Welcome to practical section by Dr.Enas \n Please choice one the following: \n 1- Assignments. \n 2- Final project. \n 3- Exciting the program.";
            cin>>enas;
            
            switch (enas) {
            	case 1:{
	// =====================================================LAB SECTION ===================================================================				
			
            		cout<<"                         Welcome to programs of LABS \n Please choice one of the following:\n";
            		cout << " LAB1 Program to display your first name and last name. \n LAB2 Program to write HELLO in different ways. \n LAB 3 :Basic Calculator \n LAB 4 Program to calculate area of square. \n LAB 5 Program to calculate area of triangle. \n LAB 6 Program to display $6 just for 8 years and younger or 65 years and older. \n LAB 7 Program to display odd positive or even positive and odd negative or even negative. \n LAB 8 Program to check whether character is vowel or consonant letter. \n LAB 9 Program to print hello 10 times. \n LAB 10 Program that enters 10 numbers and prints the sum only of odd numbers. \n LAB 11 Program that prints these series 5, 10, 15, 20, ..., 100. \n LAB 12 Program that enters 15 numbers and prints the product of numbers." << endl;
            
            cin >> ennum;

            string name1, name2;
            switch (ennum) {
                case 1:
                    cout << "Enter your first name: ";
                    cin >> name1;
                    cout << "Enter your last name: "; // tell user enter his first and last name
                    cin >> name2;

                    cout << "Your name is: " << name1 << " " << name2 << endl;
                    break;

                case 2:
                    cout << "Hello           Hello\n  Hello       Hello\n    Hello   Hello" << endl; // print hello in deffertents ways 
                    break;

                case 3: {
                    int num1, num2;
                    char oper;

                    cout << "Enter The Number One: ";
                    cin >> num1;

                    cout << "Enter The Number Two: ";
                    cin >> num2;

                    cout << "Enter The Number operation: \n (Only +,-,*,/,%): ";
                    cin >> oper;

                    switch (oper) {
                        case '+':
                            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
                            break;

                        case '-':
                            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
                            break;

                        case '*':
                            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
                            break;

                        case '/':
                            if (num2 == 0) {
                                cout << "Error: Division by zero\n"; // if num2 ==0 will print error!!
                            } else {
                                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
                            }
                            break;

                        case '%':
                            cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;
                            break;

                        default:
                            cout << "Error! Enter a correct operator. \n" << endl;
                    }
                    break;
                }

                case 4: {
                    int sq;
                    cout << "Enter the side of square: "; // parmeter od suqare = length * length 
                    cin >> sq;
                    cout << "The area of square is: " << sq * sq << endl;
                    break;
                }

                case 5: {
                    int tra, hie;
                    cout << "Enter the base of triangle: ";
                    cin >> tra;
                    cout << "Enter the height of triangle: ";
                    cin >> hie;
                    float result_triangle = 0.5 * tra * hie;
                    cout << "The area of triangle: " << result_triangle << endl;
                    break;
                }

                case 6: {
                    int age;
                    cout << "Enter the age of person: ";
                    cin >> age;
                    if (age <= 8 || age >= 65) { // use || means or 
                        cout << "You have to pay only $6." << endl; 
                    } else {
                        cout << "You have to pay $20." << endl;
                    }
                    break;
                }

                case 7: {
                    int number;
                    cout << "Enter a number: ";
                    cin >> number;

                    if (number > 0) {
                        if (number % 2 == 0) {
                            cout << "The number is a positive even number." << endl;
                        } else {
                            cout << "The number is a positive odd number." << endl;
                        }
                    } else if (number < 0) {
                        if (number % 2 == 0) {
                            cout << "The number is a negative even number." << endl;
                        } else {
                            cout << "The number is a negative odd number." << endl;
                        }
                    } else {
                        cout << "The number is zero." << endl;
                    }
                    break;
                }

                case 8: {
                    char ch;
                    cout << "Enter the character: ";
                    cin >> ch;
                    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                        cout << "This is a vowel letter." << endl;
                    } else {
                        cout << "This is a consonant letter." << endl;
                    }
                    break;
                }

                case 9: {
                    for (int i = 0; i < 10; i++)
                        cout << "Hello" << endl;
                    break;
                }

                case 10: {
                    int nnum, sum = 0, count = 0;
                    cout << "Enter ten numbers:" << endl;
                    while (count < 10) {
                        cin >> nnum;
                        if (nnum % 2 != 0)
                            sum += nnum;
                        count++;
                    }
                    cout << "Summation of odd numbers is: " << sum << endl;
                    break;
                }

                case 11: {
                    for (int i = 5; i <= 100; i += 5) {
                        cout << i << " ";
                    }
                    cout << endl;
                    break;
                }

                case 12: {
                    int product = 1, number;
                    cout << "Enter 15 numbers: " << endl;
                    for (int i = 0; i < 15; i++) {
                        cin >> number;
                        product *= number;
                    }
                    cout << "The product of the numbers is: " << product << endl;
                    break;
                }

                default:
                    cout << "Error!! You should Enter only (1-12)! \n" << endl;
                    
            } break;
            
            }
            break;
            
            break;
            
        //==================================================================END LABS SECTION======================================================================================
        
            
  //  ########################################################START FINAL PROJECT############################################################################################
        case 2:{
				cout <<"welcome to final project by DR.ENAS /n please choice one of the following :" << endl;
					cout << endl;					
					cout <<"1 : find the quotuient between two numbers." << endl;
					cout <<"2 : find the value of character in ASCII." << endl;
					cout <<"3 : the size of data type." << endl;
					cout <<"4 : swaping two numbers. " << endl; 
					cout <<"5 : print star in tank form. "<< endl; 
					cout <<"6 : the area and perimeter of rectangle. " << endl;
					cout <<"7 : Print first and last name in reverse when last name come first. " << endl;
					cout <<"8 : display the operation of decreament and decresement. " << endl;
					cout <<"9 : convert the kilometer per hour to miles per hour. " << endl;
					cout <<"10 : compute the average and the total of 4 numbers. " << endl;
					cout <<"11 : find the max number between 3 numbers. " << endl;
					cout <<"12 : the table of Muiltipaction. " << endl;
					cout <<"13 : 10 Random numbers generator. " << endl;
					cout <<"14 : calculation of the surface and voulme of a cone. " << endl;
					cout <<"15 : calculation the real solution of the equation. " << endl;
					cout <<"17  : to change the string to Upper or Lower case. " << endl;
					cout <<"18  : to concatenate strings. " << endl;
					cout <<"19  : print the half prymaids of numbers. " << endl;
					cout <<"20  : to print Dimond of stars. " << endl;
					cout <<"21  : print Pascal Triangle. " << endl;
					cout <<"22  : print Pyramid in Reverse Order. " << endl;
					cout <<"23  : print Alphabet Triangle. " << endl;
					cout <<"24  : to print Fibonacci Series. " << endl;
					cout <<"25  : remove all character in string except alphabits. " << endl;
					cout <<"26  : to find the lenght of string. " << endl;
					cout <<"27  : find the vowel , constant, number, white space in string. " << endl;
					cout <<"28  : print 24 Hours && 12 Hours. " << endl;
					cout <<"29  : print Right Triangler with Loop. " << endl;
					cout <<"30  : select Numric intager Grade. " << endl;
					cout <<"31  : to input the number of students and their grades then find the highest grade.. " << endl;
					cout <<"32  : to count the number of letters in string. " << endl;
					cout <<"33  : to find the squrae root. " << endl;
					cout <<"34  : print values and make cascading sort ti them then print them. " << endl;
					cout <<"35  : to print 7 vlaues then reverse then and print them with reversed . " << endl;
					cout <<"36  : Arry 4X6 print values then reverse them. " << endl;
					cout <<"37  : To calucate and print The rasied amount in  the company. " << endl;
									
					cout <<"\n";
		
        
        int final;
         cout<<"    \n       Please only choice between (1-37) just:";
        cin>>final;
       
        switch (final) {
        	case 1:
						the_quotient();
							break;
						case 2:
						ASCII_value();
							break;
						case 3:
						size_dataType();
							break;
						case 4:
						swaping_2numbers();	
							break;
						case 5: 
						PrintPattren();
							break;
						case 6:
						area_perimeter();
							break;
						case 7:
						NameReverse();
							break;
						case 8:	
						increament_decreament();	
							break;
						case 9:	
						Kilo_miles();	
							break;
						case 10:	
						fourNumber_avTo();	
							break;
						case 11:	
						max_number();	
							break;
						case 12:	
						tableMulti();	
							break;	
						case 13:	
						RandomNum();	
							break;
						case 14:
						Caluc_Cone();
							break;
						case 15:
						RealSolu ();
							break;
						case 16:
						Upper_LowerCase();
							break;
						case 17:
						ConcatStr();
							break;						
						case 18:
						HalfPyri();
							break;
						case 19:
						DimondStars();	
							break;
						case 20:
						PascalTriangle();
							break;
						case 21:
						ReversePyra();
							break;
						case 22:
						AlphaTriangle();
							break;
						case 23:
						Fibonacci_Series();
							break;
						case 24:	
						Remove_inString();	
							break;
						case 25:	
						lenghtString();	
							break;
						case 26:	
						Different_string();	
							break;
						case 27:
						characetr_digit();
							break;
						case 28:
						HoursFormat();
							break;
						case 29:
						RightTriangler_loop();	
							break;
						case 30:
						numric_intGrade();
							break;	
						case 31:	
						NumStud_NumGrad();	
							break;
						case 32 : 
						count_letter();	
							break;	
						case 33:	
						square_root();
							break;	
						case 34:	
						cascading_sort ();	
							break;
						case 35:	
						PrintValu_Reverse();	
							break;
						case 36:	
						arry4x3();	
							break;
						case 37:
						company_system();
						 	break;
            
            
            
				
				
				
				default: {
					cout<<"Error !! You must enter between (1-37) just !! \n"; // 1 to 37
					break;
				}
				
			//############################################END PROJECT SECTION########################################################
   
			}
			break;
			
				default:
					cout<<"Error !! You must enter between (1-3) just !! \n";  // if the user enter for example 4 will priny error
					
					
		
        
        }break;
        
        
   
        case 3:
    
        	cout<<"Exciting....loding";
        //	exit(0);
        	break; 
        }
        break;
    
    
        case 3: // case form first switch
 	
 	cout<<"Exiting the program...loading...\n"; //EXIT FROM PROGRAM
 	break;

        default:
            cout << "Error! You should only enter (1 or 2 to run a program) or Eneter 3 to close the program!??\n" << endl;
    
}
 cout << " \n This program is done by Omar Shawqi Thanks a lot.\n \n";
	} while (manum !=3);

   
}
