package com.example.demo;
import jakarta.persistence.*;

@Entity
@Table(name="bd")

public class user {
    
    @Id
    @Column(name="mail", nullable=false, unique = true, length = 50)
    private String mail;

    @Column(name="password", nullable = false, unique=false, length=50)
    private String password;

    public user(){}

        public String getMail()
        {
            return mail;
        }
        
        public String getPass()
        {
            return password;
        }

        public void setMail(String mail)
        {
            this.mail = mail;
        }

        public void setPass(String password)
        {
           this.password = password;
        }
    }

