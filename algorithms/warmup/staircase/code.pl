#!/usr/bin/perl

$n = <STDIN>;
chomp $n;

foreach my $i (1..$n){
    print ' 'x($n-$i) . '#'x$i . "\n"
}