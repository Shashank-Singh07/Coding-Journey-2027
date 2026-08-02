CREATE DATABASE CollegeDB;

USE CollegeDB;

CREATE TABLE Students
(
    id INT,
    name VARCHAR(50),
    age INT,
    branch VARCHAR(20)
);

INSERT INTO Students
VALUES (1, 'Shashank', 18, 'AIML');

SELECT * FROM Students;