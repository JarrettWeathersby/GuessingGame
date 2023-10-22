# Guessing Game


Rules / Functionality

- Guessing Game that requires the user to guess a random number between 0 - 250.

- With each user guess, the program prompts the user if the value entered is "Too low" or "Too high"; Once the value entered matches the random number the user is prompted "You win!" and the program loops and allows the user to play again.

- Along with the "You win" prompt when the user enters the correct value, the console displays the number of guesses it took to win, and shows the user the exact values he or she entered.

- Program ends if the user chooses the "Quit" option. 


Framework

- Implement <iostream>,<string>,<cstdlib>, and <ctime> as #include header files.

- Create a switch with 2 cases in main() to give the user the option of whether "Play Game" or "Quit".

- Create a "print_array()" void function that combines an array with an iterating 'for loop' to keep track of user guess values, then prints the values back to the user.

- Create a "playgame() void function with the framework of the guessing game including: max number of guesses array, while loop, if/else statement, guess-counting array.

- if/else statements provide real-time feedback to the user about guess value.

- To prevent infinite loops from invalid character inputs, I utilized the std::cin.clear(); and std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); commands within the if/else statements.

- Use the rand() function to return a random number within a certain range.

- To prevent the same sequence of numbers every time, I used the srand() function to 'Seed' the random number.

- srand() passes in a function call to time(), and the argument NULL is passed into time().

- (In line 23, if you'd like to see the randomly generated number in output, remove the comment forward-slash punctuation [//] from 
[std::cout << random << std::endl;], and the random variable will display each time the game is executed.)