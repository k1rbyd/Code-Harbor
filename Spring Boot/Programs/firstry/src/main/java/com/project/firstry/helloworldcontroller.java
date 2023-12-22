package com.project.firstry;

import org.springframework.web.bind.annotation.*;

@RestController
public class helloworldcontroller {
	
	@GetMapping(path="/hello")
	public String helloWorld(){
		return "Hello World!";
	}
	
}
