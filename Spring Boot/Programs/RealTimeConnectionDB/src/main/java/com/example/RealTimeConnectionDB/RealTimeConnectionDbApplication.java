package com.example.RealTimeConnectionDB;

import javax.sql.DataSource;
import java.util.logging.Logger;

import org.springframework.boot.CommandLineRunner;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.jdbc.core.JdbcTemplate;

@SpringBootApplication
public class RealTimeConnectionDbApplication implements CommandLineRunner{
	
    private final DataSource dataSource;
    private static final Logger log = Logger.getLogger(RealTimeConnectionDbApplication.class.getName());

    public RealTimeConnectionDbApplication(final DataSource dataSource) {
        this.dataSource = dataSource;
    }

    public static void main(String[] args) {
        SpringApplication.run(RealTimeConnectionDbApplication.class, args);
    }

    @Override
    public void run(final String... args) {
        log.info("Datasource: " + dataSource.toString());
        final JdbcTemplate restTemplate = new JdbcTemplate(dataSource);
        restTemplate.execute("select 1");

        log.info("SQL query executed successfully");
    }
}
