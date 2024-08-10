# Write a stack program to check for balancing of symbols such as delimiters.
- Stacks can be used to check whether the given expression has balanced symbols. This algorithm is very useful in compilers. Each time the parser reads one character at a time. If the character is an opening delimiter such as (, {, or [- then it is written to the stack. When a closing delimiter is encountered like ), }, or ]-the stack is popped.
- The opening and closing delimiters are then compared. If they match, the parsing of the string continues. If they do not match, the parser indicates that there is an error on the line. 
## Algorithm: 
a) Create a stack. </br>
b) while (end of input is not reached)</br> { </br>
>    1) If the character read is not a symbol to be balanced, ignore it. </br>
     2) If the character is an opening symbol like (, [, {, push it onto the stack. </br>
     3) If it is a closing symbol like ),],}, then if the stack is empty report an error. Otherwise pop the stack. </br>
     4) If the symbol popped is not the corresponding opening symbol, report an error. </br>
     
} </br>
c) At end of input, if the stack is not empty report an error. </br>