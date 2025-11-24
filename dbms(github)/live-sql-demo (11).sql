DROP TABLE customers;
CREATE TABLE customers1 (
    c_id INT PRIMARY KEY,
    c_name VARCHAR(100) NOT NULL,
    email VARCHAR(100) UNIQUE
);

-- Products table
CREATE TABLE products1 (
    p_id INT PRIMARY KEY,
    p_name VARCHAR(100) NOT NULL,
    price DECIMAL(10,2) NOT NULL
);

-- Orders table
CREATE TABLE orders (
    ord_id INT PRIMARY KEY,
    customer_id INT,
    product_id INT,
    quantity INT NOT NULL,
    FOREIGN KEY (customer_id) REFERENCES customers(c_id),
    FOREIGN KEY (product_id) REFERENCES products(p_id)
);
INSERT INTO customers1 (c_id, c_name, email) VALUES
(1, 'Alice', 'alice@gmail.com'),
(2, 'Bob', 'bob@gmail.com'),
(3, 'Charlie', 'charlie@gmail.com'),
(4, 'Diana', 'diana@gmail.com');
INSERT INTO CUSTOMERS1 (c_id, c_name, email) VALUES
(5,'Frank','frank@gamil.com');


INSERT INTO products1 (p_id, p_name, price) VALUES
(1, 'Laptop', 60000),
(2, 'Table', 8000),
(3, 'Mouse', 1000),
(4, 'Keyboard', 3000),
(5, 'Tablet', 36000);

INSERT INTO orders (ord_id, customer_id, product_id, quantity) VALUES
(101, 1, 3, 10),
(102, 4, 1, 5),
(103, 3, 4, 100);
-- DROP TABLE invoices;
select *from orders;
create table invoices 
( inv_id varchar2(12) primary key,
ord_id int references orders(ord_id),
invoice_date date default current_date,
total_amount INT not null);
create sequence inv_seq start with 1 increment by 1;

create or replace function 
getinvoiceid return varchar2
is 
begin
return 'INV-' || lpad(inv_seq.nextval,5,0);
end;
/
create or replace trigger
inv_generator
after insert on orders
for each row
begin
insert into invoices(inv_id,ord_id,total_amount)
values(getinvoiceid(),:new.ord_id,:new.quantity*(select price from products1 where p_id=:new.product_id));
end;
/
select *from invoices;
INSERT INTO orders (ord_id, customer_id, product_id, quantity) VALUES
(101, 1, 3, 10);
INSERT INTO orders (ord_id, customer_id, product_id, quantity) VALUES

(102, 4, 1, 5),
(103, 3, 4, 100);
------------------------------------------------------------------



--drop table customers2 
CREATE TABLE customers2 (
    c_id INT PRIMARY KEY,
    c_name VARCHAR(100) NOT NULL,
    email VARCHAR(100) UNIQUE
);

-- products2 table
CREATE TABLE products2 (
    p_id INT PRIMARY KEY,
    p_name VARCHAR(100) NOT NULL,
    price DECIMAL(10,2) NOT NULL
);

-- orders2 table
CREATE TABLE orders2 (
    ord_id INT PRIMARY KEY,
    customer_id INT,
    product_id INT,
    quantity INT NOT NULL,
    FOREIGN KEY (customer_id) REFERENCES customers2(c_id),
    FOREIGN KEY (product_id) REFERENCES products2(p_id)
);
INSERT INTO customers2 (c_id, c_name, email) VALUES
(1, 'Alice', 'alice@gmail.com'),
(2, 'Bob', 'bob@gmail.com'),
(3, 'Charlie', 'charlie@gmail.com'),
(4, 'Diana', 'diana@gmail.com');
INSERT INTO customers2 (c_id, c_name, email) VALUES
(5,'Frank','frank@gamil.com');


INSERT INTO products2 (p_id, p_name, price) VALUES
(1, 'Laptop', 60000),
(2, 'Table', 8000),
(3, 'Mouse', 1000),
(4, 'Keyboard', 3000),
(5, 'Tablet', 36000);
drop table orders2 cascade constraints;
INSERT INTO orders2 (ord_id, customer_id, product_id, quantity) VALUES
(101, 1, 3, 10),
(102, 4, 1, 5),
(103, 3, 4, 100);
select *from orders2;
create table invoices2 
( inv_id varchar2(12) primary key,
ord_id int references orders2(ord_id),
invoice_date date default current_date,
total_amount INT not null);
create sequence inv_seq start with 1 increment by 1;

create or replace function 
getinvoiceid return varchar2
is 
begin
return 'INV-' || lpad(inv_seq.nextval,5,0);
end;
/
create or replace trigger
inv_generator1
after insert on orders2
for each row
begin
insert into invoices2(inv_id,ord_id,total_amount)
values(getinvoiceid(),:new.ord_id,:new.quantity*(select price from products2 where p_id=:new.product_id));
end;
/
select *from invoices2;
INSERT INTO orders2 (ord_id, customer_id, product_id, quantity) VALUES
(101, 1, 3, 10);
INSERT INTO orders2 (ord_id, customer_id, product_id, quantity) VALUES

(102, 4, 1, 5),
(103, 3, 4, 100);