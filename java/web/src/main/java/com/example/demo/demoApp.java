package com.example.demo;

import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RestController;

@SpringBootApplication
@RestController
public class demoApp {  
    public static void main(String[] args) {
        SpringApplication.run(demoApp.class, args);
    }
    
    @GetMapping("/index")
    public String index() {
            return "forward:/index.html";
    }
}