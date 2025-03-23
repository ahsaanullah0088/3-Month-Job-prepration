// function abc(){
//     console.log(abc.xyz);
// }
// abc();
// abc.xyz = 100; // 100
// abc.xyz = 200; // 200
// abc(); // 100

// // Output 
// undefined
// 200

// event propagations : 
// In JavaScript, event propagation refers to how events travel through the DOM (Document Object Model) when an event (like a click or keypress) occurs.

// There are two phases of event propagation:

// Capturing Phase: The event travels from the root of the DOM tree down to the target element.

// Bubbling Phase: The event travels from the target element back up to the root of the DOM tree.

// You can control event propagation using methods like:

// event.stopPropagation(): Stops the event from propagating further.

// event.stopImmediatePropagation(): Stops the event and prevents other listeners on the same element from being called.
// 

// Bubbling Phase: The event travels from the target element back up to the root of the DOM tree.

// You can control event propagation using methods like:

// event.stopPropagation(): Stops the event from propagating further.

// Pure function 
// Impure function 
// Pure function: A function that, given the same input, will always return the same output and has no side effects (does not modify any external state).   
// code 
// function add(a, b) {
//     return a + b; // Pure function
// }
// console.log(add(2, 3)); // 5


// impure function
// defination
// Impure function: A function that may produce different outputs for the same input or has side effects (modifies external state).
// code
// function addToCounter(x) {
//     counter += x; // Impure function (modifies external state)
//     return counter;
// }
// let counter = 0;
// console.log(addToCounter(2)); // 2

// function curring :
// Currying is a functional programming technique where a function with multiple arguments is transformed into a sequence of functions, each taking a single argument. This allows for partial application of functions and can lead to more reusable and modular code.
// code
// function add(a) {
//     return function(b) {
//         return a + b;
//     };
// }
// const add5 = add(5); // Partially applied function
// console.log(add5(3)); // 8 (5 + 3)


// Question 1 


var a = 200;
{
    let a = 400; // 400
}
let b = a;
{
    let b = -400; // -400
}
console.log(b);


// Question 2

// lexical scope 
// Lexical scope (or static scope) refers to the scope of variables that is determined by their position in the source code. In JavaScript, functions are lexically scoped, meaning that they can access variables from their own scope and any parent scopes where they were defined.  



// qustion 3
// Array methods: 
// 1. map(): Creates a new array populated with the results of calling a provided function on every element in the calling array.
// 2. filter(): Creates a new array with all elements that pass the test implemented by the provided function.
// 3. reduce(): Executes a reducer function (that you provide) on each element of the array, resulting in a single output value.
// 4. forEach(): Executes a provided function once for each array element.
// 5. find(): Returns the value of the first element in the array that satisfies the provided testing function. Otherwise, undefined is returned.
// 6. some(): Tests whether at least one element in the array passes the test implemented by the provided function. Returns a Boolean value.
// 7. every(): Tests whether all elements in the array pass the test implemented by the provided function. Returns a Boolean value.
// 8. sort(): Sorts the elements of an array in place and returns the sorted array.
// 9. splice(): Changes the contents of an array by removing or replacing existing elements and/or adding new elements in place.
// 10. slice(): Returns a shallow copy of a portion of an array into a new array object selected from start to end (end not included) where start and end represent the index of items in that array.
// 11. concat(): Merges two or more arrays and returns a new array without changing the existing arrays.


// question 4
// deep copy vs shallow copy 

// Shallow Copy: A shallow copy creates a new object, but it copies only the references to the nested objects. If you modify a nested object in the copied object, it will also affect the original object because both objects reference the same nested object.
// Example of shallow copy using Object.assign() or spread operator (...):
// code
// const original = { a: 1, b: { c: 2 } };
// const shallowCopy = { ...original }; // Shallow copy using spread operator
// shallowCopy.b.c = 3;
// console.log(original.b.c); // Output: 3 (original object is affected)
// console.log(shallowCopy.b.c); // Output: 3 (shallow copy is affected)
// deep copy 
// A deep copy creates a new object and recursively copies all nested objects, ensuring that the copied object is completely independent of the original object. Modifying a nested object in the copied object will not affect the original object.
// Example of deep copy using JSON methods or libraries like Lodash:



// question 5

// popups in js 
// 1. alert(): Displays an alert box with a specified message and an OK button. It is used to inform the user about something.
// 2. confirm(): Displays a dialog box with a specified message, an OK button, and a Cancel button. It is used to ask the user for confirmation.
// 3. prompt(): Displays a dialog box that prompts the user for input. It has an OK button and a Cancel button. It is used to get user input in the form of a string.
// 4. window.open(): Opens a new browser window or tab with a specified URL. It can be used to create pop-up windows for displaying additional content or advertisements.
// 5. window.close(): Closes the current window or tab. It can be used to close pop-up windows that were opened using window.open().
// 6. window.print(): Opens the print dialog box to print the current document. It can be used to create a print-friendly version of a web page.

// question 6
// take two strings 
// merge two stirng alternativerly 
