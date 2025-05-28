import React, { useState, useCallback } from 'react';

const App = () => {
  const [length, setLength] = useState(9);
  const [number, setNumber] = useState(false);
  const [characters, setCharacters] = useState(false);
  const [password, setPassword] = useState('');

  const passwordGenerator = useCallback(() => {
    let pass = '';
    let str = 'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz';

    if (number) {
      str += '0123456789';
    }
    if (characters) {
      str += '!@#$%^&*()_+[]{}|;:,.<>?';
    }

    for (let i = 1; i <= length; i++) {
      let char = Math.floor(Math.random() * str.length);
      pass += str.charAt(char);
    }

    setPassword(pass);
  }, [length, characters, number]);

  // 🔽 Copy password function
  const copyPassword = () => {
    if (password) {
      window.navigator.clipboard.writeText(password);
      alert('Password copied to clipboard!');
    } else {
      alert('No password to copy!');
    }
  };

  return (
    <div className="w-full max-w-md mx-auto shadow-md rounded-lg px-4 py-6 my-8 text-orange-500 bg-gray-800">
      <h1 className="text-white text-center text-2xl font-bold mb-4">Password Generator</h1>

      <div className="mb-4">
        <label className="block text-sm mb-1">Password Length: {length}</label>
        <input
          type="range"
          min={4}
          max={20}
          value={length}
          onChange={(e) => setLength(Number(e.target.value))}
          className="w-full"
        />
      </div>

      <div className="mb-4 flex items-center space-x-2">
        <input
          type="checkbox"
          checked={number}
          onChange={() => setNumber((prev) => !prev)}
        />
        <label className="text-sm">Include Numbers</label>
      </div>

      <div className="mb-4 flex items-center space-x-2">
        <input
          type="checkbox"
          checked={characters}
          onChange={() => setCharacters((prev) => !prev)}
        />
        <label className="text-sm">Include Special Characters</label>
      </div>

      <div className="mb-4 flex">
        <input
          type="text"
          value={password}
          readOnly
          className="w-full px-2 py-1 rounded-l bg-gray-100 text-black"
        />
        <button
          onClick={copyPassword}
          className="bg-blue-600 text-white px-3 py-1 rounded-r hover:bg-blue-700"
        >
          Copy
        </button>
      </div>

      <button
        onClick={passwordGenerator}
        className="w-full bg-orange-500 text-white px-4 py-2 rounded hover:bg-orange-600"
      >
        Generate Password
      </button>
    </div>
  );
};

export default App;