# Evaluate infix expressions using stacks in one pass
## Algorithm: 
1) Create an empty operator stack </br>
2) Create an empty operand stack </br>
3) For each token in the input string </br>
> a. Get the next token in the infix string </br>
  b. If next token is an operand, place it on the operand stack </br>
  c. If next token is an operator </br> 
>>i. Evaluate the operator (next op) </br>

4) While operator stack is not empty, pop operator and operands (left and right), </br>
evaluate left operator right and push result onto operand stack
5) Pop result from operator stack.
