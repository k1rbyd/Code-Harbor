package com.example.controller;

import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
@RequestMapping("/api/form/")
public class functions {

	@GetMapping("/hello") 
	public String sayHi() {
		return "hello";
	}
	
	@GetMapping("/bye") 
	public String sayBye() {
		return "bye";
	}
}
