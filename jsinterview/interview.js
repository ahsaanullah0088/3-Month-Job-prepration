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
