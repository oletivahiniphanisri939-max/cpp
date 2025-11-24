create table courses(
   c_id number primary key,
   c_name varchar2(50) not null,
   price number not null,
   duration number not null
   );
  
   insert into courses values(101, 'Cprogrammimg', 6000, 180);
   insert into courses values(102, 'java', 7000, 220);
   insert into courses values(103, 'python', 8000, 200);
   
  -- select *from courses;
   --creating a student table using foregien key constraint......
   --courses table should be present while creating a courses table......
   create table students(
    s_id NUMBER PRIMARY KEY,
    s_name VARCHAR2(50) NOT NULL,
    email VARCHAR2(100) NOT NULL,
    age NUMBER CHECK(age>=18 AND age<=100),
    courses_id NUMBER REFERENCES courses(c_id)
   );
INSERT INTO  STUDENTS 
VALUES(1,'Alice','alice@gmail.com',19,101);--works
VALUES(2,'Bob','Bob@gmail.com',25,105);
   --DROP TABLE students;
  SELECT constraint_name, constraint_type
  FROM user_constraints
  WHERE table_name = 'STUDENTS';
  select *from students;