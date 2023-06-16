CREATE DATABASE DB;
USE DB;
CREATE TABLE EMPLOYEE(
    eno char(4) primary key,
    ename varchar(50) not null,
    job_type varchar(50) not null,
    supervisioneno char(4),
    hire_date date not null,
    dno int,
    commission decimal(10,2),
    salary decimal(7,2) not null 
);



CREATE TABLE DEPARTMENT(
    dno integer primary key,
    dname varchar(50),
    location varchar(50) default "new delhi"
);

INSERT INTO DEPARTMENT(dno, dname, location) VALUES(101,"it","hyderabad");
INSERT INTO DEPARTMENT(dno, dname) VALUES(202,"physics");
INSERT INTO DEPARTMENT(dno, dname) VALUES(303,"sales"),(404, "marketing");

ALTER TABLE EMPLOYEE ADD FOREIGN KEY (dno) references DEPARTMENT (dno);
ALTER TABLE EMPLOYEE ADD FOREIGN KEY (supervisioneno) references EMPLOYEE (eno);


ALTER TABLE EMPLOYEE MODIFY eno char(4);



INSERT INTO EMPLOYEE (eno, ename, job_type, supervisioneno, hire_date, salary, commission, dno) VALUES 
(79, 'SMITH', 'CLERK', 7902, '1980-12-17', 800, NULL, 20),
(7499, 'ALLEN', 'SALESMAN', 7698, '1981-02-20', 1600, 300, 30),
(7521, 'WARD', 'SALESMAN', 7698, '1981-02-22', 1250, 500, 30),
(7566, 'JONES', 'MANAGER', 7839, '1981-04-02', 2975, NULL, 20),
(7654, 'MARTIN', 'SALESMAN', 7698, '1981-09-28', 1250, 1400, 30),
(7698, 'BLAKE', 'MANAGER', 7839, '1981-05-01', 2850, NULL, 30),
(7782, 'CLARK', 'MANAGER', 7839, '1981-06-09', 2450, NULL, 10),
(7788, 'SCOTT', 'ANALYST', 7566, '1982-12-09', 3000, NULL, 20),
(7839, 'KING', 'PRESIDENT', NULL, '1981-11-17', 5000, NULL, 10),
(7844, 'TURNER', 'SALESMAN', 7698, '1981-09-08', 1500, 0, 30),
(7876, 'ADAMS', 'CLERK', 7788, '1983-01-12', 1100, NULL, 20),
(7900, 'JAMES', 'CLERK', 7698, '1981-12-03', 950, NULL, 30),
(7902, 'FORD', 'ANALYST', 7566, '1981-12-03', 3000, NULL, 20),
(7934, 'MILLER', 'CLERK', 7782, '1982-01-23', 1300, NULL, 10),
(7905, 'PAUL', 'MANAGER', 7839, '1984-05-23', 3000, NULL, 10),
(7906, 'JACKSON', 'MANAGER', 7839, '1984-05-23', 3500, NULL, 20),
(7907, 'LUCAS', 'CLERK', 7905, '1985-01-13', 1200, NULL, 10),
(7908, 'JONES', 'CLERK', 7906, '1985-03-15', 1300, NULL, 20),
(7909, 'MARSHALL', 'MANAGER', 7839, '1985-03-15', 4000, NULL, 30),
(7910, 'BROWN', 'CLERK', 7909, '1985-03-15', 1400, NULL, 30),
(7911, 'HALL', 'MANAGER', 7839, '1985-03-15', 4200, NULL, 10);

INSERT INTO DEPARTMENT (dno, dname, location)
VALUES 
  (10, 'Sales', 'Mumbai'),
  (20, 'Marketing', 'Delhi'),
  (30, 'Finance', 'Chennai'),
  (40, 'Human Resources', 'Kolkata'),
  (50, 'Research and Development', 'Bangalore'),
  (60, 'Operations', 'Hyderabad'),
  (70, 'Customer Service', 'Ahmedabad'),
  (80, 'Information Technology', 'Pune'),
  (90, 'Quality Assurance', 'Jaipur'),
  (100, 'Legal', 'Surat'),
  (110, 'Product Management', 'Lucknow'),
  (120, 'Facilities', 'Nagpur'),
  (130, 'Supply Chain Management', 'Gurgaon'),
  (140, 'Purchasing', 'Patna'),
  (150, 'Public Relations', 'Indore'),
  (160, 'Training and Development', 'Thane'),
  (170, 'Administration', 'Bhopal'),
  (180, 'Business Development', 'Visakhapatnam'),
  (190, 'Accounting', 'Agra');


1. SELECT eno "EMPLOYEE NO.", ename "NAME" , job_type "JOB", hire_date "HIRE DATE" from EMPLOYEE;
2. SELECT DISTINCT(job_type) from EMPLOYEE;
3. SELECT CONCAT(ename,",",job_type) from EMPLOYEE;
4. SELECT CONCAT(eno,",", ename,",", job_type,",", ifnull(supervisioneno,"NO"),",", hire_date,",", salary,",", ifnull(commission,"NO"),",", ifnull(dno,"NO")) "THE_OUTPUT" from EMPLOYEE;
5. SELECT ename, salary from EMPLOYEE where salary > 2850;
6. SELECT ename, dno from EMPLOYEE where eno = 79;
7. SELECT ename, salary from EMPLOYEE where salary < 1500 or salary > 2850;
8. SELECT ename, dno from EMPLOYEE where dno=10 or dno=30 order by ename;
9. SELECT ename, hire_date from EMPLOYEE where year(hire_date) > 1981;
10. SELECT ename, job_type from EMPLOYEE where supervisioneno is NULL;
11. SELECT ename, salary, commission from EMPLOYEE where commission is not null;
12. SELECT * from EMPLOYEE order by salary desc, commission desc;
13. SELECT ename from EMPLOYEE where ename LIKE "__A%";
14. SELECT ename from EMPLOYEE where ename LIKE "%R%R%" OR ename LIKE "%A%A%" AND (dno = 30 OR supervisioneno=7788);
15.  SELECT ename,salary,commission from EMPLOYEE where commission>1.05*sala
ry;
16. SELECT concat(curdate() , "," ,dayname(now()));
    17. WITH RECORDS(ename, hire_date, Six_after) AS (
        SELECT ename,
            hire_date,
            DATE_ADD(hire_date, INTERVAL 6 MONTH)
                AS Six_after
        FROM EMPLOYEE
    )
    SELECT RECORDS.ename,
        RECORDS.hire_date,
        DATE_ADD(
                RECORDS.Six_after,
                INTERVAL
                IF(
                        0 = WEEKDAY(RECORDS.Six_after),
                        0 - WEEKDAY(RECORDS.Six_after),
                        7 - WEEKDAY(RECORDS.Six_after) + 0
                    )
                DAY
            ) AS Salary_review_date
    FROM RECORDS;
18. SELECT ename,(TIMESTAMPDIFF(MONTH,hire_date,curdate())) "Months from hire" FROM (EMPLOYEE NATURAL JOIN DEPARTMENT) where dname="SALES"; 
19. SELECT concat(ename," earns ",salary," monthly but wants ",3*salary) "DREAM SALARY" from EMPLOYEE;
20. SELECT CONCAT(
               UPPER(SUBSTR(ename, 1, 1)),
               LOWER(SUBSTR(ename, 2))
           )
           AS "Name",
       LENGTH(ename)
FROM EMPLOYEE
WHERE ename LIKE 'J%'
   OR ename LIKE 'A%'
   OR ename LIKE 'M%';
21.  SELECT ename,hire_date,(dayname(hire_date)) "Hire Day" from EMPLOYEE;
22. SELECT ename,dname,dno from (EMPLOYEE NATURAL JOIN DEPARTMENT);
23. SELECT distinct(job_type) from EMPLOYEE where dno=30;
24. SELECT ename,dname from (EMPLOYEE NATURAL JOIN DEPARTMENT) WHERE ename LIKE "%A%";
25.  SELECT ename,job_type,dno,dname from (EMPLOYEE NATURAL JOIN DEPARTMENT) where location LIKE "DELHI";
26.  SELECT E.ename,
       E.eno,
       S.ename AS supervisioneno,
       S.eno   AS supervisioneno
FROM EMPLOYEE AS E
         LEFT OUTER JOIN EMPLOYEE AS S
                         ON E.supervisioneno = S.eno;
27.  SELECT t1.ename,t1.dno,t1.salary from EMPLOYEE t1,EMPLOYEE t2 where t1.dno=t2.dno and t1.salary=t2.salary and t1.eno<>t2.eno and t2.commission is not null;
28. SELECT ename,(repeat("*",salary/100)) "SALARY" from EMPLOYEE;
29. SELECT MAX(Salary),
       MIN(Salary),
       SUM(Salary),
       AVG(Salary)
FROM EMPLOYEE;
30.  select job_type,count(*) "NUMBER OF EMPLOYEES" from EMPLOYEE group by job_type;
31. select count(DISTINCT(supervisioneno)) "NUMBER OF SUPERVISORS" from EMPLOYEE;
32.  select dname,location,count(*) "NUMBER OF EMPLOYEES",AVG(salary) "AVERAGE SALARY" from EMPLOYEE natural join department group by EMPLOYEE.dno;
33.  select ename,hire_date from EMPLOYEE where dno=(select dno from emplo
yee where ename like "Blake");
34.  select eno,ename from EMPLOYEE where salary>(select AVG(salary) from EMPLOYEE);
35. select eno,ename from EMPLOYEE where dno in (select dno from EMPLOYEE
where ename LIKE "%T%");
36. select ename,salary from EMPLOYEE where supervisioneno=(select eno from EMPLOYEE where ename LIKE "King");
37. select dno,ename,job_type from EMPLOYEE where dno=(select dno from de
partment where dname LIKE "SALES");
38.  select ename,dname from EMPLOYEE natural join department where TIMESTAMPDIFF(year,hire_date,curdate())>20;
39. select location,count(*) "NUMBER OF DEPARTMENTS" from department group by location;
40.select dname from EMPLOYEE natural join department group by dno having count(*)>20;
41. (
    SELECT ename
    FROM EMPLOYEE
    WHERE Eno NOT IN (
        SELECT DISTINCT SupervisorENo
        FROM EMPLOYEE
        WHERE SupervisorENo IS NOT NULL
    )
)
UNION
(
    SELECT ename
    FROM EMPLOYEE
    WHERE Eno IN (
        SELECT SupervisorENo
        FROM EMPLOYEE
        WHERE SupervisorENo IS NOT NULL
        GROUP BY SupervisorENo
        HAVING COUNT(*) > 5
    )
);
42. WITH JOBCOUNT AS (
    SELECT COUNT(*) AS ECount
    FROM EMPLOYEE
    GROUP BY Job_type
)
SELECT Job_type,
       COUNT(*)
FROM EMPLOYEE
GROUP BY Job_type
HAVING COUNT(*) IN (
    (
        SELECT MAX(ECount)
        FROM JOBCOUNT
    )
    UNION
    (
        SELECT MIN(ECount)
        FROM JOBCOUNT
    )
);