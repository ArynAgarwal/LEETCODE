# Write your MySQL query statement below
select * from(select e.name,b.bonus from Bonus as b right join Employee as e on b.empId=e.empId) as um where um.bonus<1000 or um.bonus is NULL;