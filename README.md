# SaveSystem

Completly broken, but this is my first project that i make and push to github, so i what to keep it like a lucky coin or so

full functional c++ libriaryfor writing to files and reading from them

This is a C++ class named \_saveSystem that provides methods to write, read, search and clear data in a file. It includes the following methods:

# Write variable to file

int_to_file: Writes an integer value to the file.

float_to_file: Writes a float value to the file.

bool_to_file: Writes a boolean value to the file.

char_to_file: Writes a character value to the file.

string_to_file: Writes a string value to the file.

# Read variable from file

read_from_file: Reads data from the file in two modes, either by line or by word.

read_from_file\<variable type\> (0/1 , n) 0 - read line , 1 - read word , n - line in file you whant to reed

# find line by first word

searching_by_word\<variable type\>(s) s - key word

find_in_file: Searches for a specific word in the file and returns the corresponding value.

cld: Clears the content of the file.
