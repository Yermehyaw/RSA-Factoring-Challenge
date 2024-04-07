RSA Factoring Challenge

rsa: This program can generate the two different factors of n. Used for cracking
RSA public key.

factors: find the factors of large numbers.


Introduction:

The RSA algorithm is a public-key cryptosystem. This means that there are two
keys, a public key, and a private key. The public key can be known by everyone
and is used for encryption. The private key is known only by the owner and is
used for decryption.
The RSA algorithm is asymmetric, which means that the encryption
and decryption keys are different.


Description:

0. Factorize all the things!
Factorize as many numbers as possible into a product of two smaller numbers.
Usage: factors <file>
where <file> is a file containing natural numbers to factor.
One number per line
They are all lines will be valid natural numbers greater than 1
Output format: n=p*q
one factorization per line
p and q don’t have to be prime numbers

1. RSA Factoring Challenge
#advanced
RSA Laboratories states that: for each RSA number n,
there exist prime numbers p and q such that n = p × q.
The problem is to find these two primes, given only n.

This task is the same as task 0, except:
p and q are always prime numbers





Credits:
Introduction - Jared Atandi
(https://jaredatandi.hashnode.dev/rsa-factoring)

Description - ALX Intranet