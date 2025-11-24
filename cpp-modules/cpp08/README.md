# Heading 1
## Heading 2
### Heading 3


STL : standard template library in cpp
a set of templates representing containers, iterators,function objects, algorithms....
component of STL :
container : an object that stores objects it's also called a data structure, it's implemented as a class template 
*Each container has a certain unique capability and adds value when culled appropriately to the requirement.*

----there are two types of containers:
    sequence  containers : array,list , vector, deque,forward_list.
    associative containers : set, multiset, map , multimap.
the container classes : **array**, **vector** and **deque**  are implemented using array data structure , so the size of container is fixed and set during compilation .
the conatiner classes : **list** and **forward_list** are implemented using lined list data structure , so it's purely dynamic and the size increases when a new element is stored 



The elements of a container do not have their own names, so that the container can have as many elements as we want without having to give each element a unique name.

Each container provides some method to access these elements, but how depends on the specific type of container.


We’ll prefer the term “length” when referring to the number of elements in a container, and use the term “size” to refer to amount of storage required by an object.
