# VOID POINTER
```
int a=10;
void *p=&a;
printf("%d",*p);
```
> Compiler error: 'void*' is not a pointer-to-object type.</br>
> Therefore, we can't dereference a void pointer.
> No pointer arithmetic can be performed.

# CONSTANT POINTER
`int *const ptr;`</br>
```
int a=5,b=7;
int *const ptr=&a;
ptr=&b;
```
> Can't assign to variable 'ptr' with const-qualified type 'int *const'

# FUNCTION POINTER
- Has the capability to point to a function.</br>
- Addresses of each instruction can be stored, so that pointer can access the entire function.</br>
```c
int fun(int a, int b)
{
return a+b;  
}
int main()
{  
int result;
int (*ptr)(int,int)=&fun;
result=*ptr(10,20);
printf("%d",result);
}
```
> Result: 30

# STRUCTURE POINTER
- Holds the address of structure variable.
- One of the elements of the structure can be a pointer to the same structure.
```c
struct ListNode
{
int data;
struct ListNode *next;  
}
```

# UNIONS
- User defined data type.
- Collection of logically related data items.
- All members share the same memory location.
- Change made to one of the members will be reflected in others too.