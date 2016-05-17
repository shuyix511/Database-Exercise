A = load './in/para[1-6].txt';
B = foreach A generate flatten(TOKENIZE((chararray)$0)) as F;
C = foreach B generate flatten(TOKENIZE(REPLACE(F,'','|'), '|')) as D;
E = group C by D;
G = foreach E generate group, COUNT(C);
store G into 'lettercount';
