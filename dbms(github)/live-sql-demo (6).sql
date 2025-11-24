CREATE TABLE client (
  client_id    NUMBER PRIMARY KEY,
  client_name  VARCHAR2(40),
  contact_no   number
);
create table projects(
project_id number primary key,
project_name varchar2(20),
dead_line date,
manager varchar2(10),
C_ID NUMBER REFERENCES client(client_id));
INSERT INTO client values(888, 'Microsoft', 1234567890);
INSERT INTO client values(999, 'Meta', 9887765430);
INSERT INTO client values(111, 'Google', 8798765410);
create  table intern(
intern_id number primary key ,
name varchar2(50) not null,
age number not null,
email varchar2(100) not null,
p_id number(3) references projects(project_id));
INSERT INTO projects 
VALUES (101, 'excel clone', TO_DATE('27-07-2027', 'DD-MM-YYYY'), 'mouni', 888);
INSERT INTO projects values(102,'Facebook ',  to_date('28-09-2028','dd-mm-yyyy'),'sreeja',999);
INSERT INTO projects values(103,'chrome clone', to_date('30-03-2029','dd-mm-yyyy'),'vahini',111);
INSERT INTO projects values(104,'word clone',to_date('12-09-2029','dd-mm-yyyy'),'bhavana',888);
INSERT INTO intern VALUES (1, 'Alice Johnson', 22, 'alice.j@gmail.com', 101);
INSERT INTO intern VALUES (2, 'Bob Smith', 23, 'bob.smith@gmail.com', 102);
INSERT INTO intern VALUES (3, 'Charlie Das', 21, 'charlie.das@yahoo.com', 101);
INSERT INTO intern VALUES (4, 'Deepa Reddy', 24, 'deepa.reddy@hotmail.com', 103);
INSERT INTO intern VALUES (5, 'Eshan Ali', 22, 'eshan.ali@gmail.com', 102);
select c.client_name,count(*) as in_count 
from intern i join 
projects p on i.p_id =p.project_id
join client c on p.c_id = c.client_id
group by c.client_name;