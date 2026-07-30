package com.example.demo;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;

@Controller
public class cat_controller {
    
    @Autowired
    private cat_repository cat_repository;

    @GetMapping("/catalog")
    public String showCatalog(Model model) {
        model.addAttribute("products", cat_repository.findAll());
        return "catalog";
    }
}