# libft

## Table of Contents

- [libft](#libft)
  - [Table of Contents](#table-of-contents)
  - [About ](#about-)
    - [Stuffs I modified](#stuffs-i-modified)
    - [Extra stuffs I added](#extra-stuffs-i-added)
  - [Getting Started ](#getting-started-)
    - [Prerequisites](#prerequisites)
    - [Installing](#installing)
  - [Usage ](#usage-)

## About <a name = "about"></a>

The first 42 projects when you enter the course, writing your very own library in C. 

Personally I have added many extra functions I find useful throughout my study in the course. 

### Stuffs I modified
1. linked list - modified into double linked list that store both next and previous element's pointer

### Extra stuffs I added
1. ft_append - strjoin that free the first string
2. ft_split_nsep - ft_split that can do multiple strings of seperator
3. ft_printf - cut down version of printf that uses write function
4. get_next_line - read 1 line that end with '\n' everytime it's called
5. hashtable - speed goes brrrrrr
   1. ft_ht_create - create empty table
   2. ft_ht_get - get pointer to value from key
   3. ft-ht_set - set key value pair to table 
6. math - custom math lib
   1. ft_abs - absolute value of double
   2. ft_copysign - copy sign from 1 double to another
   3. trigonometry functions - sin function is approximated with taylor series, rest is identities from sin
   4. ft_power - power of number but power only can be int
   5. ft_sqrt & ft_q_in_sqrt - fast inverse squareroot copied online and ft_sqrt is just 1 divide that
7. quartenion functions
   1. manipulate - right hand rule
   2. converts - from euler3 and to euler3, conjugate
   3. create - create identity, create, duplicate
   4. operation - equal, normalize, multiply
   5. apply - apply rotation, slerp
8. bezier_curves
   1. 1d bezier curves from linear to cubic

## Getting Started <a name = "getting_started"></a>

### Prerequisites

- unix system
- gcc

### Installing
cloning the project

```sh
git clone https://github.com/ijontan/libft.git
```

## Usage <a name = "usage"></a>

build with 
```sh
make
```

compile with 
```sh
cc -Llibft -lft -I includes/ft_printf.h -I includes/get_next_line.h -I includes/libft.h
```
