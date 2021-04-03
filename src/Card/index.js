import React from 'react';
import './style.css'

export default function Card() {
    return (
        <div className = "card-container">
            <h2>BEM-VINDO(A) A II EDIÇÃO DO EVENTO CONAMDRACON</h2>
            <p>
               João Pessoa- Paraíba sediará o II Congresso Nacional Multidisciplinar de Doenças Raras e Anomalias Congênitas 
               (CONAMDRACON-2020), de 04 a 06 de Novembro de 2020 na UNIESP,
               João Pessoa, Paraíba, Brasil. <br/>
                Convidamos você a participar do congresso. 
                O CONAMDRACON -2021 terá um programação técnica e de <br/>
                apresentação de trabalhos científicos,
                que serão publicados pela Editora Universitária da Universidade Federal da Paraíba-UFPB, em E-Book.
            </p>

            <p>
                O objetivo do CONAMDRACON-2020 é promover um fórum para cientistas, profissionais e estudantes de graduação
                 e pós-graduação de todo o país que trabalham com Doenças Raras  e Anomalias Congênitas, para conhecer, 
                 discutir e compartilhar os mais recentes avanços e tecnologias.
            </p>
        
        </div>
    );
}