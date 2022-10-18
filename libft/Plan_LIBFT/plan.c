/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plan.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 22:58:45 by coder             #+#    #+#             */
/*   Updated: 2022/09/05 22:58:46 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

1.
name: 
	isalpha
prototype: 
	int  ft_isalpha(int c);
turn in files: 
	ft_isalpha.c
parameters: 
	int
return value: 
	1 Caso seja uma letra do alfabeto maiúscula, 
	2 caso seja minúscula, 0 caso não esteja no alfabeto.
external functions: 
	-
description: 
	Verifica se um caracter é um caractere do alfabeto, se a função detectar que o caractere de entrada é um
	caractere do alfabeto ('A' para 'Z' ou 'a' para 'z'), ela retorna um valor inteiro diferente de zero. Mas se o caractere
	de entrada não for um caractere do alfabeto, a função retornará zero. Um único argumento (Caractere) que será convertido para
	inteiro. Mesmo que isalpha() receba um inteiro como argumento, o caractere é passado para a função. Internamente, o caractere é
	convertido em seu valor ASCII para a verificação.
done:
	No

2.
name: 
	isdigit
prototype: 
	int ft_isdigit(int c);
turn in files: 
	ft_isdigit.c
parameters: 
	int
return value: 
	Ela retorna um valor inteiro com base no argumento passado a ela, se o argumento for um caracter numérico, ele
	retorna um valor diferente de zero (valor verdadeiro), caso contrário, retorna zero (valor falso).
external functions: 
	-
description: 
	Verifica se o caractere passado é um digíto ou não. Ele retorna um valor diferente de zero se for um dígito,
	caso contrário, ele retorna 0. Por exemplo, ele retorna um valor diferente para '0' a '9' e zero para os outros. É usado para
	verificar se o caractere inserido é um caractere numéiro [0-9] ou não. Leva um único argumento na forma de um inteiro e retorna
	o valor do tipo int. Mesmo que indigit() receba um inteiro como argumento, o caractere é passado para a função. Internamente, o
	caractere é convertido em seu valor ASCII para a verificação.
done: 
	No

3.
name: 
	isalnum
prototype: 
	int ft_isalnum(int c);
turn in files: 
	ft_isalnum.c
parameters: 
	int
return value: 
	Um valor diferente de zero caso o caractere seja alfanumérico ou 0 caso contrário.
external functions: 
	-
description: 
	A função verifica se o caractere fornecido é alfanumérico ou não, a aplicação é usada para descobrir o número de
	alfanuméricos em uma determinada frase (ou qualquer entrada). Verifica se o argumento passado é um caractere alfanuméiro
	(Alfabeto ou número) ou não.
done: 
	No
Segunda feira até as 22:00


4.
name: 
	isascii
prototype: 
	int ft_isascii (int c);
turn in files: 
	ft_isascii.c
parameters: 
	int
return value: 
	A função retorna diferente de zero se C, na localidade atual, puder ser representado como um caractere no conjunto
	de caracteres US-ASCII DE 7 bits. Caso contrário, retorna 0.
external functions: 
	-
description:
	função testa se um determinado caractere, na localidade atual, pode ser representado como um caractere US-ASCII
	de 7 bist. Caso contrário, retorna 0.
done: 
	No

5.
name: 
	isprint
prototype: 
	int ft_isprint(int c);
turn in files:
	ft_isprint.c
parameters: 
	int
return value: 
	Um valor diferente de zero caso seja um caractere imprimível (incluindo o espaço) ou zero caso contrário.
external functions: 
	-
description: 
	ela testa qualquer caractere de impressão, incluindo espaços, o valor do argumento deve ser representável como
	um caractere não assinado ou o valor de EOF.
done: 
	No

6.
name: 
	strlen
prototype: 
	int ft_strlen(char *str);
turn in files: 
	ft_strlen.c
parameters: 
	char
return value: 
	Ela retorna o número de caracteres que precedem o terminando o caractere NUL
external functions: 
	-
description: 
	A função calcula o comprimento da string
done: 
	yes


7.
name: 
	memset
prototype: 
	void ft_memset(void *b, int c, size_t len);
turn in files: 
	ft_memset.c
parameters: 
	b: string
	c: caracter que será adicionado na string 'b'
	len: 
return value: 
	Ela retornar a string alterada, com os primeiros caracteres substituídos.
external functions: 
	-
description: 
	Grava o valor 'c' nos primeiros caracteres da string 'b' (qtde de caracteres é definido por 'len')
done: 
	No

8.
name: 
	bzero
prototype: 
	void ft_bzero(void *s, size_t n);
turn in files:
	ft_bzero.c
parameters: 
	s: string
	n:
return value:

external functions:
	-
description: 
	Escreve N bytes zerados na string S. Se N for zero, bzero () não faz nada.
done: 
	No

9.
name: 
	memcpy
prototype: 
	void *ft_memcpy(void *dest, const void *src, size_t n);
turn in files:
	ft_memcpy.c
parameters: 
	void
return value: 
	ela retorna o valor original de dst.
external functions: 
	-
description: 
	Ela copia N bytes da área de memória src para a área de memória dst. Se dst e src se sobrepuserem, o comportamento
	é indefinido. Aplicativos nos quais dst e src podem se sobrepor devem usar memmove(3).
done: 
	No
//strcpy stops when it encounters a NULL ('\0') character, memcpy does not. You do not see the effect here, as %s in printf also stops at NULL.
//strcpy terminates when the source string's null terminator is found. memcpy requires a size parameter be passed. 

10.
name: 
	memmove
prototype: 
	void ft_memmove(void *dst, const void *src, size_t len);
turn in files:
	ft_memmove.c
parameters:
	dst:
	src:
	len:
return value:

external functions:
	-
description: 
	Memmove() copia o comprimento em bytes da string src para dest. As duas strings podem de sobrepor.
done: 
	No

11.
name: 
	strlcpy
prototype: 
	void ft_strlcpy(char *dst, char *src, int lenght);
turn in files:
	ft_strlcpy.c
parameters:

return value:

external functions:
	-
description: 
	strlcpy() faz a copia de uma string de src para dest, de acordo com um determinado comprimento e garantindo '\0'. 
done: 
	yes/no

12.
name: 
	strlcat
prototype: 
	void ft_strlcat(char *dst, char *src, int lenght);
turn in files:

parameters:

return value:

external functions:
	-
description: 
	strlcat() concatena duas strings de src para dest, de acordo com um determinado comprimento e garantindo '\0'.
done: 
	yes/no

13.
name: 
	toupper
prototype: 
	char	*ft_toupper(char *str);
turn in files:
	ft_toupper.c
parameters:

return value: 
	char
external functions:
	-
description: 
	Toupper() converte caracteres minusculos em maiusculos.
done: 
	Yes

14.
name: 
	tolower
prototype: 
	char *ft_tolower(char *str);
turn in files:
	ft_tolower.c
parameters:

return value: 
	char
external functions:

description: 
	Tolower() converte caracteres maiusculos para minusculos.
done: 
	Yes

15.
name: 
	strchr
prototype: 
	char *ft_strchr(char *s, int c);
turn in files:
	ft_strchr.c
parameters:

return value: 
	char
external functions:

description:
	strchr() localiza a primeira ocorrência de c (convertida em um char) na string apontada por s.
done: 
	No

16.
name: 
	strrchr
prototype: 
	void ft_strrchr(char *s, int c);
turn in files:
	ft_strrchr.c
parameters:

return value:

external functions:

description: 
	strrchr() localiza a ultima ocorrência de c (convertida em um char) na string apontada por s.
done: 
	No

17.
name: 
	strncmp
prototype: 
	int ft_strncmp(char *s1, char *s2, unsigned int n)
turn in files:
	ft_strncmp.c
parameters:

return value: 
	int
external functions:
	-
description: 
	strncmp () compara duas strings, src e dest de acordo com um determinado comprimento.
done: 
	Yes

18.
name: 
	memchr
prototype: 
	void memchr(const void *s, int c, size_t n);
turn in files:
	ft_memchr.c
parameters:

return value:

external functions:
	-
description: 
	memchr() localiza a primeira ocorrencia de um char em uma string
done: yes/no

19.
name: 
	memcmp
prototype:
	int ft_memcmp(const void *s1, const void *s2, size_t n)
turn in files:
	ft_memcmp.c
parameters:
	s1: string to be compared
	s2: string to be compared
	n: how long in bytes are strings s1 and s2
return value:
	The memcmp() function returns zero if the two strings are identical.
	Otherwise returns the difference between the first two differing bytes.
external functions:
	-
description:
	Compare byte string
	The memcmp() function compares byte string s1 against byte string s2.
    Both strings are assumed to be n bytes long.
done: 
	No

20.
name: 
	strnstr
prototype:
	char *ft_strstr(char *str, char *to_find))
turn in files:
	ft_strstr.c
parameters:
	str: string to be 
	to_find: string to be found in the first one
return value:
	If 'to_find' is an empty string, 'str' is returned; 
	If 'to_find' occurs nowhere in 'str', NULL is returned; 
	Otherwise a pointer to the first character of the first occurrence of 'to_find' is returned.
external functions:
	-
description:
	Locate a substring in a string.  
	The strstr() function locates the first occurrence of the null-terminated string 'to_find' in the null-terminated string 'str'.
done: 
	No

21.
name: 
	atoi
prototype:
	int ft_atoi(char *str);
turn in files:
	ft_atoi.c
parameters:
	str: string
return value:
	int value
external functions:
	-
description:
	convert ASCII string to integer
done: 
	No

22.
name: 
	calloc
prototype:
	void *ft_calloc(size_t count, size_t size);
turn in files:
	ft_calloc.c
parameters:
	count: count of objects to be allocated in heap memory
	size: size of bytes to be allocated in heap memory
return value:
	If successful, calloc() return a pointer to allocated memory.  
	If there is an error, it returns a NULL pointer.
external functions:
	malloc
description:
	function contiguously allocates enough space for count objects that are size bytes of memory each and returns a pointer to the allocated memory.  The allocated memory is filled with bytes of value zero.
done: 
	No

23.
name: 
	strdup
prototype: 
	char *ft_strdup(char *src);
turn in files:
	ft_strdup.c
parameters:
	src: string which will be copied to a new one
return value:
	a new string
	NULL if the allocation fails.
external functions:
	malloc
description:
	Allocates sufficient memory for a copy of the string s1, does the copy, and returns a pointer to it
done: 
	Yes

24.
name: 
	ft_substr
prototype: 
	char *ft_substr(char const *s, unsigned int start, size_t len);
turn in files:
	ft_substr.c
parameters:
	s:  The string from which to create the substring.
	start:  The start index of the substring in the string 's'.
	len:  The maximum length of the substring.
return value:
	The substring.
	NULL if the allocation fails.
external functions:
	malloc
description: 
	Allocates (with malloc(3)) and returns a substring from the string 's'. The substring begins at index ’start’ and is of maximum size ’len’.
done: 
	No

25.
name: 
	ft_strjoin
prototype: 
	char *ft_strjoin(char const *s1, char const *s2);
turn in files:
	-
parameters:
	s1:  The prefix string.
	s2:  The suffix string.
return value:
	The new string.
	NULL if the allocation fails.
external functions:
	malloc
description:
	Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.
done: 
	No

26.
name: 
	ft_strtrim
prototype:
	char *ft_strtrim(char const *s1, char const *set);
turn in files:
	-
parameters:
	s1:  The string to be trimmed.
	set:  The reference set of characters to trim.
return value:
	The trimmed string.
	NULL if the allocation fails.
external functions:
	malloc
description:
	Allocates (with malloc(3)) and returns a copy of  's1' with the characters specified in 'set' removed from the beginning and the end of the string.
done: 
	No

27.
name: 
	ft_split
prototype:
	char **ft_split(char const *s, char c);
turn in files:
	-
parameters:
	s:  The string to be split.
	c:  The delimiter character.
return value:
	The array of new strings resulting from the split.
	NULL if the allocation fails.
external functions:
	malloc 
	free
description: 
	Allocates (with malloc(3)) and returns an array of strings obtained by splitting 's'using the character ’c’ as a delimiter.  The array must end with a NULL pointer.
done: 
	No

28.
name: 
	ft_itoa
prototype: 
	char *ft_itoa(int n);
turn in files:
	-
parameters:
	n:  the integer to convert.
return value:
	The string representing the integer.
	NULL if the allocation fails.
external functions:
	malloc
description:
	Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled.
done: 
	No

29.
name: 
	ft_strmapi
prototype:
	char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
turn in files:
	-
parameters:
	s:  The string on which to iterate.
	f:  The function to apply to each character.
return value:
	The string created from the successive applications of ’f’.
	Returns NULL if the allocation fails.
external functions:
	malloc
description: 
	Applies the function 'f' to each character of the string 's', and passing its index as first argument to create a new string (with malloc(3)) resulting from successive applications of ’f’.
done: 
	No

30.
name: 
	ft_striteri
prototype:
	void ft_striteri(char *s, void (*f)(unsigned int, char*));
turn in files:
	-
parameters:
	s:  The string on which to iterate.
	f:  The function to apply to each character.
return value:
	None
external functions:
	None
description: 
	Applies the function 'f' on each character of the string passed as argument, passing its index as first argument.  Each character is passed by address to ’f’ to be modified if necessary.
done: 
	No

31.
name: 
	ft_putchar_fd
prototype:
	void ft_putchar_fd(char c, int fd);
turn in files:
	-
parameters:
	c:  The character to output.
	fd:  The file descriptor on which to write.
return value:
	None
external functions:
	write
description:
	Outputs the character 'c' to the given file descriptor.
done: 
	No (~Yes)

32.
name: 
	ft_putstr_fd
prototype:
	void ft_putstr_fd(char *s, int fd);
turn in files:
	-
parameters:
	s:  The string to output.
	fd:  The file descriptor on which to write.
return value:
	None
external functions:
	write
description: 
	Outputs the string 's' to the given file descriptor.
done: 
	No (~Yes)

33.
name: 
	ft_putendl_fd
prototype:
	void ft_putendl_fd(char *s, int fd);
turn in files:
	-
parameters:
	s:  The string to output.
	fd:  The file descriptor on which to write.
return value:
	None
external functions:
	write
description:
	Outputs the string 's' to the given file descriptor followed by a newline.
done: 
	No

34.
name: 
	ft_putnbr_fd
prototype: 
	void ft_putnbr_fd(int n, int fd);
turn in files:
	-
parameters: 
	n:  The integer to output.
	fd:  The file descriptor on which to write.
return value:
	None
external functions:
	write
description:
	Outputs the integer 'n' to the given file descriptor
done: 
	No (~Yes)

