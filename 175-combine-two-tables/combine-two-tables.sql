SELECT p.firstName,p.lastName,address.city,address.state
from person as p
left join address on p.personId=address.personId;