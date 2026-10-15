package com.example.demo;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestParam;

@Controller
public class FormController {

    @Autowired
    private userrepository userrepository;

    @PostMapping("/mail")
    public String saveUser(@RequestParam String mail, @RequestParam String password) {
        user u = new user();
        u.setMail(mail);
        u.setPass(password); // Используем исправленный сеттер
        userrepository.save(u);
        return "redirect:/public.html";
    }

    @PostMapping("/login")
    public String loginUser(@RequestParam String mail, @RequestParam String password)
    {
        user u = userrepository.findById(mail).orElse(null);

        if (u != null && u.getPass().equals(password))
        {
            return "redirect:/catalog.html";
        }
        else{ return "redirect:/login.html?error"; }
    }
}




