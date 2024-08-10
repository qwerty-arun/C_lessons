# Write a program to convert infix expression to postfix expression

Algorithm: 
    a) For each character t in the input stream {
    b) if (t is an operand) ouput t 
            else if (t is a right paranthesis){
                pop and output tokens unitl a left parenthesis is popped(but not output)
            }
        else //t is an operator or left paranthesis{
            pop and output tokens until one of lower priority than t is encountered or a left parenthesis is encountered or the stack is empty.
            push t
            }
}
    c) Pop and output tokens until the stack is empty
