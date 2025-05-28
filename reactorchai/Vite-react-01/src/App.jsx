/// 

// Counter App 

// import React, { useState } from 'react'

// const App = () => {
//   const [counter, setCounter] = useState(15)
//   const increment = () =>{
//     setCounter(counter +1);
//     setCounter(counter +1);
//     setCounter(counter +1);
//     setCounter(counter +1);
//     setCounter(counter +1);

//     // only one value add hogi kuin k set counter baches mein value bejhta hai 
//     // iska aik hi batch bane ga and wo aik hi baar render hoga
//     // setCounter(counter +1);    
//     // set counter mein aik call back milta hai 
//   }
//   const decrement = () =>{
//     setCounter(counter -1);
//   }
//   return (
//     <div>
//       <h1> Counter Value : {counter} </h1>
//       <button onClick={increment}>Increment</button>
//       <button onClick={decrement}> Decrement</button>
//     </div>
//   )
// }

// export default App



import React, { useState } from 'react'

const App = () => {
  const [color , setColor] = useState('red')

  return (
    <div className='w-full h-screen flex justify-center items-center duration-200' style={{backgroundColor: color}}>
      <div className='flex flex-col gap-4'>
        <h1 className='text-4xl font-bold text-white'> Color Changer </h1>
        <button onClick={() => setColor('red')} className='bg-red-500 text-white p-2 rounded-md'>Red</button>
        <button onClick={() => setColor('green')} className='bg-green-500 text-white p-2 rounded-md'>Green</button>
        <button onClick={() => setColor('blue')} className='bg-blue-500 text-white p-2 rounded-md'>Blue</button>
        <button onClick={() => setColor('yellow')} className='bg-yellow-500 text-white p-2 rounded-md'>Yellow</button>
        <button onClick={() => setColor('purple')} className='bg-purple-500 text-white p-2 rounded-md'>Purple</button>
        <button onClick={() => setColor('pink')} className='bg-pink-500 text-white p-2 rounded-md'>Pink</button>
        <button onClick={() => setColor('black')} className='bg-black text-white p-2 rounded-md'>Black</button>
        <button onClick={() => setColor('white')} className='bg-white text-black p-2 rounded-md'>White</button>
        <button onClick={() => setColor('gray')} className='bg-gray-500 text-white p-2 rounded-md'>Gray</button>
      </div>
    </div>
  )
}

export default App

