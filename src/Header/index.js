import React from 'react';
import './style.css'

function Header() {
    return (
     <header>  
       <div className = "header-container">
          <nav>
            <ul>
                <li><a href = "App.js">Início</a></li>
                <li><a href = "#">Sobre</a></li>
                <li><a href = "#">Edital</a></li>
            </ul>
          </nav>
     </div>
    </header>
    );
}

export default Header;
