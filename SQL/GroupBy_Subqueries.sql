CREATE DATABASE Practice;
USE Practice;
CREATE TABLE Employees (
	EmpID INT PRIMARY KEY,
    Name VARCHAR(50),
    Department VARCHAR(50),
    Salary int
);
INSERT INTO Employees VALUES 
(101, 'Shashank', 'AIML', 85000),
(102, 'Rahul', 'CSE', 60000),
(103, 'Amit', 'AIML', 75000),
(104, 'Sneha', 'CSE', 50000),
(105, 'Vikas', 'IT', 90000);    

SELECT Department, SUM(Salary) AS Total_Budget
FROM Employees
GROUP BY Department;

SELECT Name, Department, Salary 
FROM Employees
WHERE Salary > (SELECT AVG(Salary) FROM Employees);

