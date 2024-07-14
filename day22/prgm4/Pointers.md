<details>
  <summary>Prgm1</summary>
<details>
  <summary>Code</summary>
 #include <stdio.h> 
int main() { </br>
    int arr[] = {1, 2, 3, 4, 5};  </br>
    int *ptr = arr;  </br>
    printf("Value pointed by ptr before increment: %x\n", ptr); </br>
    printf("Value pointed by ptr++: %d\n", *ptr++);  </br>
    printf("Value pointed by ptr after increment: %d\n", *ptr); </br>
    printf("Value pointed by ptr after increment: %x\n", ptr); </br>
    printf("Value pointed by ptr after increment: %d\n", ++*ptr); </br>
    return 0;  </br>
} 
</details>
  <details>
  <summary>Result</summary>
  Value pointed by ptr before increment: 7ae34760 </br>
Value pointed by ptr++: 1</br>
Value pointed by ptr after increment: 2</br>
Value pointed by ptr after increment: 7ae34764</br>
Value pointed by ptr after increment: 3</br>
</details>
</details>


<details>
  <summary>Prgm2</summary>
<details>
  <summary>Code</summary>
#include <stdio.h>
int main() </br>
{</br>
    float i=10,*j;</br>
    void *k;</br>
    k=&i;</br>
    j=k;</br>
    printf("%f",*j);</br>
}</br>
</details>
  <details>
  <summary>Result</summary>
  10.000000 </br>
  Explanation: Here, there is no typecasting required while assigning the value to and from k because conversions are applied automatically when other pointer types are assigned to and from void *.
</details>
</details>

<details>
  <summary>Prgm3</summary>
<details>
  <summary>Code</summary>
#include <stdio.h>
int main()
{
    int i=10,*j;
    void *k;
    j=k=&i;
    j++;
    k++;
    printf("%u %u",j,k);
}
</details>
  <details>
  <summary>Result</summary>
  An error would be reported in the statement k++ since arithmetic on void pointers is not permitted unless the void pointer is appropriately typecasted.
</details>
</details>