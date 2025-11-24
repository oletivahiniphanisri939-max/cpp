create table student1(
    name VARCHAR2(50) not null,
    id NUMBER,
    email VARCHAR2(100),
    --constraint constraint_name con()-coloumn name
    CONSTRAINT EMP_ID PRIMARY KEY(id),
    CONSTRAINT PK_ID UNIQUE(email)
);
INSERT INTO STUDENT1 values('hasini',1,'haini@gmail.com');
INSERT INTO STUDENT1 values('vahini',2,'vahini@gmail.com');
create table courses1(
    branch_code VARCHAR2(5),
    name VARCHAR2(50) ,
    location VARCHAR2(20),
    
     STUDENT_ID NUMBER REFERENCES STUDENT1(id)
     -- TO CREATE FOREGIN KEY REFERENCES BASE_TABLE_NAME(COLOUMN NAME IN THE TABLE)
);
INSERT INTO courses1 VALUES ('CS','CSE','RTB',1);
INSERT INTO courses1 VALUES ('AI','AIML','RTB',2);
--DROP TABLE student1;
select *from student1;
--command to see constraints associated with the table constraint_name,constraint_type
--DROP TABLE courses1;
select *from COURSES1;
SELECT CONSTRAINT_NAME ,constraint_type
FROM USER_constraints
WHERE table_name='STUDENT1';
ALTER TABLE student1 DROP CONSTRAINT PK_ID;