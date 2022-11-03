![README](https://user-images.githubusercontent.com/107968573/199625988-23801adf-fb92-41ac-a013-43dcfc155d83.jpeg)

# Partner printf project
## Description
printf is a function that sends a formatted string to standard output where it displays on the console. This project is apart of Holbeton Tulsa first trimester curriculum. We recreated the standard library printf() function using _printf.   

## Prototype

```
int _printf(const char *format, ...);
```

## Format Specifiers

| Type | Output|
| ------------- |:-------------:|
| d, i  | signed decimal integer|
| s | string of characters  |
| c | single character |

## How to use
        * Prints, converts and formats arguments on std output,
        under the control of the format
        
        * Returns number of characters in output string when successful,
        otherwise -1 for failure.
        
        * All files created and compiled on Ubuntu 20.04 LTS
            & using gcc Wall -Werror -Wextra -pedantic -std=gnu89

## Example

```
_printf("Hello, Tulsa\n")
```
    * Aboves output = "Hello, Tulsa" the (\n) = new line
    
```
_printf("%s", "Hello")
```
    * Aboves output = "Hello"
    
```
_printf(It is the year %d", 2022)
```
    * Aboves output = "It is the year 2022"
## Authors
[Heather Hayes](https://github.com/hayes28) & [Josh Beeson](https://github.com/jbees918)
![IPhoto of Heather & Josh](https://user-images.githubusercontent.com/107968573/199627574-1adf84c3-8501-4d83-b83a-0bda2854d57a.jpg)
