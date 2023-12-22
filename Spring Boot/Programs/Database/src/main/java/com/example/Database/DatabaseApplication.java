package com.example.Database;


import javax.sql.DataSource;
import java.util.logging.Logger;

import org.springframework.boot.CommandLineRunner;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.jdbc.core.JdbcTemplate;

@SpringBootApplication
public class DatabaseApplication implements CommandLineRunner {

    private final DataSource dataSource;
    private static final Logger log = Logger.getLogger(DatabaseApplication.class.getName());

    public DatabaseApplication(final DataSource dataSource) {
        this.dataSource = dataSource;
    }

    public static void main(String[] args) {
        SpringApplication.run(DatabaseApplication.class, args);
    }

    @Override
    public void run(final String... args) {
        log.info("Datasource: " + dataSource.toString());
        final JdbcTemplate restTemplate = new JdbcTemplate(dataSource);
        restTemplate.execute("select 1");

        log.info("SQL query executed successfully");
    }
}
