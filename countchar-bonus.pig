A = load './in/para[1-6].txt';
B = foreach A generate flatten(TOKENIZE(LOWER( (chararray)$0) ) ) as C;

D = foreach B generate flatten(TOKENIZE(REPLACE(C,'','|'), '|')) as E;
vowels = filter D by E matches '[a,e,i,o,u]';
F = group vowels by E;
G = foreach F generate group,COUNT(vowels);
store G into 'lettercount';


