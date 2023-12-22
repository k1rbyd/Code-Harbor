package REST.demo.repositories;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import REST.demo.domain.BookEntity;

@Repository
public interface BookRepository extends JpaRepository<BookEntity,String>{
    

}
