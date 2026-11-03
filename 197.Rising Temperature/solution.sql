# Write your MySQL query statement below
select
w.id as Id
from Weather w
join Weather ww 
  on DATEDIFF(w.recordDate, ww.recordDate) = 1
where w.temperature > ww.temperature;