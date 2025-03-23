import React , {useState} from 'react'

const App = () => {
 let [counter, setCounter] = useState(15);
  // let counter = 15;
  const addValue = () =>{
    const addcounter = counter + 1;
    if(addcounter <= 20) {
      setCounter(addcounter);
      return;
    }
    alert("Counter value can't be more than 20");
    setCounter(addcounter);
    }
    const remvoveValue = () =>{
      const rmcounter = counter - 1;
      if(rmcounter >= 0) {
        setCounter(rmcounter);
        return;
      }alert("Counter value can't be less than 0");

    }
  return (
    <div>
      <h1>Ahsaan Ullah</h1>
      <h1>Counter value : {counter}</h1>
      <button className='border' onClick={addValue}>
        Add Value
      </button>
      <br />
      <button className='border' onClick={remvoveValue}>Remove value</button>
    </div>
  )
}

export default App
