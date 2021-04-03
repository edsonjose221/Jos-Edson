import React from 'react';
import './App.css';

import Imgage from './Img/conamdracon.jpg'
import Img from './Img/Conamdracon2021.jpg'
import Header from './Header';
import Footer from './Footer'
import HomePage from './HomePage'

function App() {
  return (
    <div className="App">
     <a href = "App.js"> 
      <img src = {Imgage} alt = "Logo" width = "100%" height = "65%"/>
     </a>

       <Header/>

       <img src = {Img}  alt = "Imagem" width= "100%" height = "34%"/>

       <HomePage/>
       <Footer/>
     </div>

  );
}

export default App;
