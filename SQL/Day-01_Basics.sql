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



-- Day 01 Continued

CREATE TABLE Students (
    StudentID NUMBER,
    Name VARCHAR2(50),
    Branch VARCHAR2(20)
);

DESC Students;

INSERT INTO Students
VALUES (1, 'Shashank', 'AIML');

SELECT * FROM Students;

UPDATE Students
SET Branch = 'CSE-AIML'
WHERE StudentID = 1;

SELECT * FROM Students;