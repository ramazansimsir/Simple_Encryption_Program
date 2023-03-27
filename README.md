# Simple_Encryption_Program

This code is used to encrypt and decrypt a word by shifting its letters to the right or left as many times as specified by the user.
First, the code takes the word and the number of shifts from the user. 
Then, it checks whether the shift number is positive or not, and gives an error message if it's not.
After that, it shifts each letter of the word to the right or left as many times as specified, and prints the encrypted and decrypted versions of the word.

For encryption, each character of the word is checked first. If the character is a lowercase letter and it exceeds the letter 'z'
when shifted to the right, the letter that is as many letters beyond 'a' as the shift number is taken. If the letter doesn't exceed 'z' when shifted to the right,,
the shift number of letters to the right is applied. Similar checks are done for uppercase letters and the shift operation is performed accordingly.

For decryption, the reverse operation of the shift is applied, meaning that for a word shifted to the right, 
the shift is applied to the left. The characters on the left are checked first. 
If the character is a lowercase letter and it falls below the letter 'a' when shifted to the left, 
the letter that is as many letters before 'z' as the shift number is taken. If the letter doesn't fall below 'a' when shifted to the left, 
the shift number of letters to the left is applied. Similar checks are done for uppercase letters and the shift operation is performed accordingly.

An example input for testing could be:

what do you want encode
example
what do you want one letter slide
3

Output:

hadqohug
