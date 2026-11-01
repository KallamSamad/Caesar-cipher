#Caesar Cipher

## Overview

I created a basic Caesar cypher which has a do while loop to repeat 3 options - press 1 for encrypt, 2 for decrypt and 3 to end. I used a Boolean variable called end to ensure that the while loop executes until the user presses 
3, which is when end becomes true. 

## Features

- Initially I used a double for loop to check if the message contains legal characters
- I initially used a list to check whether or not the message to encrypt or decrypt contains legal letters or numbers. I changed it because I could use the ".contians" method to scan through a string instead. I
- With help from the web, I established that I need to use cin.clear and cin.ignore because even with Boolean variables, if I inputted an invalid number I got an infinite loop and I understand now that the Boolean flag
  might reset the position in the code but it was infitinte because the old cin value repeats so clearing was necassary
- This is barebones non OOP code so I used a do while loop. However, it would be more efficient if I created a class and used functions to modularise the code.
- The cypher works by having an empty string for the encrypted and decrypted messages respectively and depending on what the user put as the shift, finding a new index which doesn't make
  the index go out of bounds. I did this with modular arithmetic by dividing the index + shift value by modulo 37 and dividing index - shift + 37 by 37 for the encrypt and decrypt programs respectively.
  Then it was a matter of adding each encoded and decoded character to the empty strings to give the final output.

## Screenshot of Terminal

<img width="1435" height="686" alt="image" src="https://github.com/user-attachments/assets/4b40a186-baf7-4aa5-8851-05740fb3b173" />
