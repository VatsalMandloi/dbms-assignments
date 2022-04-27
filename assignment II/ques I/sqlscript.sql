create table country(cid int primary, cName char(20) , Population int);

create table covidCases(cid int, cdate date,newcases int, recovered int, death int);

desc country 


insert into country values ('101','India','12416789');

insert into covidCases values ('102','06-mar-22','105','26','12');

select * form covidcases;

select * form country;

select sum(newcases) from covidcases where cdate='06-mar-22';

select sum(death) from covidcases where cdate between '01-jan-22' and '01-apr-22';

select sum(recovered) from covidcases where cdate between '01-jan-22' and '01-apr-22';

select cname, sum(newcases) from country covidcases group by cname;

select c.cname, sum(case.newcases) from country as c, covidcases as case group by c.cname;

select country.cname, sum(covidcases.newcases) from country, covidcases group by country.cname;

select country.cname, sum(covidcases.newcases) from country, covidcases where covidcases.cdate between '01-jan-22' and '01-apr-22' group by country.cname;

