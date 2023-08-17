SELECT p.firstName,p.lastName,address.city,address.state
FROM person AS p
LEFT JOIN address ON p.personId=address.personId;