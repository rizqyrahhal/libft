#include "libft.h"
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n\n-------------*****---PART 1 - LIBC FUNCTIONS---*****-------------\n\n");


    printf("-------- TEST FT_IS_ALPHA FUNCTIN --------\n");
    printf("TEST 1 = 8\n");
    printf("ft_isalpha: %d\n", ft_isalpha('8'));
    printf("isalpha: %d\n", isalpha('8'));
    printf("TEST 2 = F\n");
    printf("ft_isalpha: %d\n", ft_isalpha('F'));
    printf("isalpha: %d\n", isalpha('F'));
    printf("TEST 3 = ,\n");
    printf("ft_isalpha: %d\n", ft_isalpha(','));
    printf("isalpha: %d\n", isalpha(','));
    printf("TEST 4 = a\n");
    printf("ft_isalpha: %d\n", ft_isalpha('a'));
    printf("isalpha: %d\n", isalpha('a'));
    printf("\n---------------------------\n\n");

    printf("-------- TEST FT_IS_DIGIT FUNCTION --------\n");
    printf("TEST 1 = 8\n");
    printf("ft_isdigit: %d\n", ft_isdigit('8'));
    printf("isdigit: %d\n", isdigit('8'));
    printf("TEST 2 = r\n");
    printf("ft_isdigit: %d\n", ft_isdigit('r'));
    printf("isdigit: %d\n", isdigit('r'));
    printf("TEST 3 = ~\n");
    printf("ft_isdigit: %d\n", ft_isdigit('~'));
    printf("isdigit: %d\n", isdigit('~'));
    printf("\n---------------------------\n\n");

    printf("-------- TEST FT_IS_ALNUM FUNCTION --------\n");
    printf("TEST 1 = 8\n");
    printf("ft_isalnum: %d\n", ft_isalnum('8'));
    printf("isalnum: %d\n", isalnum('8'));
    printf("TEST 2 = r\n");
    printf("ft_isalnum: %d\n", ft_isalnum('r'));
    printf("isalnum: %d\n", isalnum('r'));
    printf("TEST 3 = D\n");
    printf("ft_isalnum: %d\n", ft_isalnum('D'));
    printf("isalnum: %d\n", isalnum('D'));
    printf("TEST 4 = @\n");
    printf("ft_isalnum: %d\n", ft_isalnum('@'));
    printf("isalnum: %d\n", isalnum('@'));
    printf("\n---------------------------\n\n");

    printf("-------- TEST FT_IS_ASCII FUNCTION --------\n");
    printf("TEST 1 = ~\n");
    printf("ft_isascii: %d\n", ft_isascii('~'));
    printf("isascii: %d\n", isascii('~'));
    printf("TEST 2 = ©\n");
    printf("ft_isascii: %d\n", ft_isascii(u'©'));
    printf("isascii: %d\n", isascii(u'©'));
    printf("\n---------------------------\n\n");

    printf("-------- TEST FT_IS_PRINT FUNCTION --------\n");
    printf("TEST 1 = ~\n");
    printf("ft_isprint: %d\n", ft_isprint('~'));
    printf("isprint: %d\n", isprint('~'));
    printf("TEST 2 = ¥\n");
    printf("ft_isprint: %d\n", ft_isprint(u'¥'));
    printf("isprint: %d\n", isprint(u'¥'));
    printf("TEST 3 = ¥\n");
    printf("\n---------------------------\n\n");

    printf("-------- TEST FT_STRLEN FUNCTION --------\n");
    printf("TEST 1 = 9abilandhabil\n");
    printf("ft_strlen: %zu\n", ft_strlen("9abilandhabil"));
    printf("strlen: %zu\n", ft_strlen("9abilandhabil"));
    printf("\n---------------------------\n\n");

    printf("-------- TEST FT_MEMSET FUNCTION --------\n");
    printf("TEST 1 = testmemsetfunction\n");
    char array01[] = "testmemsetfunction";
    char array02[] = "testmemsetfunction";
    ft_memset(array01, '*', 5);
    memset(array02, '*', 5);
    printf("ft_memset: %s\nmemset: %s\n", array01, array02);
    /*printf("TEST 2 = nothing\n");
    char array03[] = "testmemsetfunction";
    char array04[] = "testmemsetfunction";
    ft_memset(array03, '*', 0);
    memset(array04, '*', 0);
    printf("ft_memset: %s\nmemset: %s\n", array03, array04);*/
    printf("\n---------------------------\n\n");

    printf("-------- TEST FT_BZERO FUNCTION --------\n");
    printf("TEST 1 = abcdefgh\n");
    char array1[] = "abcdefgh";
    char array2[] = "abcdefgh";
    ft_bzero(array1, 8);
    bzero(array2, 8);
    printf("ft_bezro: %s\n", array1);
    printf("bezro: %s\n", array2);
    /*printf("TEST 2 = nothing\n");
    char array3[] = "";
    char array4[] = "";
    ft_bzero(array3, 0);
    bzero(array4, 0);
    printf("ft_bezro: %s\n", array3);
    printf("bezro: %s\n", array4);*/
    printf("\n---------------------------\n\n");

    printf("-------- TEST FT_MEMCPY FUNCTION --------\n");
    printf("TEST 1 = (src: ab) (dst: )\n");
    char    src1[] = "ab";
    char    dst1[30];
    ft_memcpy(dst1, src1, 5);
    printf("ft_memcpy: %s\n", dst1);
    char    src11[] = "ab";
    char    dst11[30];
    memcpy(dst11, src11, 5);
    printf("memcpy: %s\n", dst11);
    printf("TEST 2 = (src: sjfhrfhslfj) (dst:jjjjjjjjjjjjjj)\n");
    char    src2[] = "sjfhrfhslfj";
    char    dst2[30] = "jjjjjjjjjjjjjj";
    ft_memcpy(dst2, src2, 0);
    printf("ft_memcpy: %s\n", dst2);
    char    src22[] = "sjfhrfhslfj";
    char    dst22[30] ="jjjjjjjjjjjjjj";
    memcpy(dst22, src22, 0);
    printf("memcpy: %s\n", dst22);
    printf("TEST 3 = (src: zyk'null'jhfgxkh) (dst:jjjjjjjjjjjjjj)\n");
    char    src3[] = "zyk\0jhfgxkh";
    char    dst3[30] = "jjjjjjjjjjjjjj";
    ft_memcpy(dst3, src3, 6);
    printf("ft_memcpy: %s\n", dst3);
    char    src33[] = "zyk\0jhfgxkh";
    char    dst33[30] ="jjjjjjjjjjjjjj";
    memcpy(dst33, src33, 6);
    printf("memcpy: %s\n", dst33);
    printf("TEST 4 = (src: zykjhfgxk'null'h) (dst:jjjjjjjjjjjjjj)\n");
    char    src4[] = "zykjhfgxk\0h";
    char    dst4[30] = "jjjjjjjjjjjjjj";
    ft_memcpy(dst4, src4, 6);
    printf("ft_memcpy: %s\n", dst4);
    char    src44[] = "zykjhfgxk\0h";
    char    dst44[30] ="jjjjjjjjjjjjjj";
    memcpy(dst44, src44, 6);
    printf("memcpy: %s\n", dst44);
    printf("\n---------------------------\n\n");

    printf("-------- TEST FT_MEMMOVE FUNCTION --------\n");
    printf("TEST 1 = (src: ab) (dst: )\n");
    char    src01[] = "ab";
    char    dst01[30];
    ft_memmove(dst01, src01, 5);
    printf("ft_memmove: %s\n", dst01);
    char    src011[] = "ab";
    char    dst011[30];
    memmove(dst011, src011, 5);
    printf("memmove: %s\n", dst011);
    printf("TEST 2 = (src: sjfhrfhslfj) (dst:jjjjjjjjjjjjjj)\n");
    char    src02[] = "sjfhrfhslfj";
    char    dst02[30] = "jjjjjjjjjjjjjj";
    ft_memmove(dst02, src02, 0);
    printf("ft_memmove: %s\n", dst2);
    char    src022[] = "sjfhrfhslfj";
    char    dst022[30] ="jjjjjjjjjjjjjj";
    memmove(dst022, src022, 0);
    printf("memmove: %s\n", dst022);
    printf("TEST 3 = (src: zykjhf'null'gxkh) (dst:jjjjjjjjjjjjjj)\n");
    char    src03[] = "zykjhf\0gxkh";
    char    dst03[30] = "jjjjjjjjjjjjjj";
    ft_memmove(dst03, src03, 6);
    printf("ft_memmove: %s\n", dst03);
    char    src033[] = "zykjhf\0gxkh";
    char    dst033[30] ="jjjjjjjjjjjjjj";
    memmove(dst033, src033, 6);
    printf("memmove: %s\n", dst033);
    printf("TEST 4 = (src: zykjh'null'fgxkh) (dst:jjjjjjjjjjjjjj)\n");
    char    src04[] = "zykjh\0fgxkh";
    char    dst04[30] = "jjjjjjjjjjjjjj";
    ft_memmove(dst04, src04, 6);
    printf("ft_memmove: %s\n", dst04);
    char    src044[] = "zykjh\0fgxkh";
    char    dst044[30] ="jjjjjjjjjjjjjj";
    memmove(dst044, src044, 6);
    printf("memmove: %s\n", dst044);
    printf("\n---------------------------\n\n");

    printf("-------- TEST FT_STRLCPY FUNCTION --------\n");
    printf("TEST 1 = (src: rizqy) (dst: )\n");
	char dst001[20];
	const char src001[6] = "rizqy";
	printf("return valus of ft_strlcpy : %zu\n", ft_strlcpy(dst001, src001, 6));
	printf("dst : %s\nsrc : %s\n", dst001, src001);
	char dst0011[20];
	const char src0011[6] = "rizqy";
	printf("return valus of strlcpy : %zu\n", strlcpy(dst0011, src0011, 6));
	printf("dst : %s\nsrc : %s\n", dst0011, src0011);
    printf("\n---------------------------\n\n");

    printf("-------- TEST FT_STRLCAT FUNCTION --------\n");
    printf("TEST 1 = \n");
    char *catdest = malloc(sizeof(char) * 5);
    strcpy(catdest, "hakam");
    printf("=== %lu\n", ft_strlcat(catdest, "hello test", 3));
    printf("=== %s\n", catdest);
    char *catdest1 = malloc(sizeof(char) * 5);
    strcpy(catdest1, "hakam");
    printf("=== %lu\n", strlcat(catdest1, "hello test", 3));
    printf("=== %s\n", catdest1);
    printf("\n---------------------------\n\n");

    printf("-------- TEST FT_TOUPPER FUNCTION --------\n");
    printf("TEST 1 = a\n");
    printf("return value of ft_toupper function : %c\n", ft_toupper('a'));
    printf("return value of toupper function : %c\n", ft_toupper('a'));
    printf("TEST 2 = G\n");
    printf("return value of ft_toupper function : %c\n", ft_toupper('G'));
    printf("return value of toupper function : %c\n", toupper('G'));
    printf("\n---------------------------\n\n");

    printf("-------- TEST FT_TOLOWER FUNCTION --------\n");
    printf("TEST 1 = b\n");
    printf("return value of ft_tolower function : %c\n", ft_tolower('b'));
    printf("return value of tolower function : %c\n", ft_tolower('b'));
    printf("TEST 2 = F\n");
    printf("return value of ft_tolower function : %c\n", ft_tolower('F'));
    printf("return value of tolower function : %c\n", tolower('F'));
    printf("\n---------------------------\n\n");

    printf("-------- TEST FT_STRCHR FUNCTION --------\n");
    printf("TEST 1 = s:(hello 42 networking) c:(n)\n");
    printf("return valus of ft_strchr function : %s\n", ft_strchr("hello 42 networking", 'n'));
    printf("return valus of strchr function : %s\n", strchr("hello 42 networking", 'n'));
    printf("TEST 2 = s:(hello 42 networking) c:(f)\n");
    printf("return valus of ft_strchr function : %s\n", ft_strchr("hello 42 networking", 'f'));
    printf("return valus of strchr function : %s\n", strchr("hello 42 networking", 'f'));
    printf("TEST 3 = s:(hell'null'o 42 networking) c:(w)\n");
    printf("return valus of ft_strchr function : %s\n", ft_strchr("hell\0o 42 networking", 'w'));
    printf("return valus of strchr function : %s\n", strchr("hell\0o 42 networking", 'w'));
    printf("TEST 4 = s: '\\0' c: h\n");
    printf("return valus of ft_strchr function : %s\n", ft_strchr("\0", 'h'));
    printf("return valus of strchr function : %s\n", strchr("\0", 'h'));
    printf("TEST 5 = s: 'fffff' c: 'null'\n");
    printf("return valus of ft_strchr function : %s\n", ft_strchr("fffff", '\0'));
    printf("return valus of strchr function : %s\n", strchr("fffff", '\0'));
    printf("TEST 6 = s: 'bonjour' c: 'b'\n");
    printf("return valus of ft_strchr function : %s\n", ft_strchr("bonjour", 'b'));
    printf("return valus of strchr function : %s\n", strchr("bonjour", 'b'));
    printf("\n---------------------------\n\n");

    printf("-------- TEST FT_STRRCHR FUNCTION --------\n");
    printf("TEST 1 = s:(hello 42 networking) c:(n)\n");
    printf("return valus of ft_strrchr function : %s\n", ft_strrchr("hello 42 networking", 'n'));
    printf("return valus of strrchr function : %s\n", strrchr("hello 42 networking", 'n'));
    printf("TEST 2 = s:(hello 42 networking) c:(f)\n");
    printf("return valus of ft_strrchr function : %s\n", ft_strrchr("hello 42 networking", 'f'));
    printf("return valus of strrchr function : %s\n", strrchr("hello 42 networking", 'f'));
    printf("TEST 3 = s:(hell'null'o 42 networking) c:(w)\n");
    printf("return valus of ft_strrchr function : %s\n", ft_strrchr("hell\0o 42 networking", 'w'));
    printf("return valus of strrchr function : %s\n", strrchr("hell\0o 42 networking", 'w'));
    printf("TEST 4 = s: 'null' c: h\n");
    printf("return valus of ft_strrchr function : %s\n", ft_strrchr("\0", 'h'));
    printf("return valus of strrchr function : %s\n", strrchr("\0", 'h'));
    printf("TEST 5 = s: 'fffff' c: 'null'\n");
    printf("return valus of ft_strrchr function : %s\n", ft_strrchr("fffff", '\0'));
    printf("return valus of strrchr function : %s\n", strrchr("fffff", '\0'));
    printf("TEST 6 = s: 'bonjour' c: 'b'\n");
    printf("return valus of ft_strrchr function : %s\n", ft_strrchr("bonjour", 'b'));
    printf("return valus of strrchr function : %s\n", strrchr("bonjour", 'b'));
    printf("TEST 7 = s: 'bonjobur' c: 'b'\n");
    printf("return valus of ft_strrchr function : %s\n", ft_strrchr("bonjobur", 'b'));
    printf("return valus of strrchr function : %s\n", strrchr("bonjobur", 'b'));
    printf("\n---------------------------\n\n");

    printf("-------- TEST FT_STRNCMP FUNCTION --------\n");
    printf("TEST 1 = s1:(hello 42 networking) s2:(hello 42 networking) n: 5\n");
    printf("return valus of ft_strncmp function === %d\n", ft_strncmp("hello 42 networking", "hello 42 networking", 5));
    printf("return valus of strncmp function === %d\n", strncmp("hello 42 networking", "hello 42 networking", 5));
    printf("TEST 2 = s1:(test\\200) s2:(test\\0) n: 6\n");
    printf("return valus of ft_strncmp function === %d\n", ft_strncmp("test\200", "test\0", 6));
    printf("return valus of strncmp function === %d\n", strncmp("test\200", "test\0", 6));
    printf("TEST 3 = s1:(test) s2:(testss) n: 7\n");
    printf("return valus of ft_strncmp function === %d\n", ft_strncmp("test", "testss", 7));
    printf("return valus of strncmp function === %d\n", strncmp("test", "testss", 7));
    printf("TEST 4 = s1:(testss) s2:(test) n: 7\n");
    printf("return valus of ft_strncmp function === %d\n", ft_strncmp("testss", "test", 7));
    printf("return valus of strncmp function === %d\n", strncmp("testss", "test", 7));
    printf("TEST 5 = s1:(abcdefgh) s2:() n: 0\n");
    printf("return valus of ft_strncmp function === %d\n", ft_strncmp("abcdefgh", "", 0));
    printf("return valus of strncmp function === %d\n", strncmp("abcdefgh", "", 0));
    printf("TEST 6 = s1:(zyxbcdefgh) s2:(abcdwxyz) n: 0\n");
    printf("return valus of ft_strncmp function === %d\n", ft_strncmp("zyxbcdefgh", "abcdwxyz", 0));
    printf("return valus of strncmp function === %d\n", strncmp("zyxbcdefgh", "abcdwxyz", 0));
    printf("TEST 7 = s1:(abcdefgh) s2:(abcdwxyz) n: 4\n");
    printf("return valus of ft_strncmp function === %d\n", ft_strncmp("abcdefgh", "abcdwxyz", 4));
    printf("return valus of strncmp function === %d\n", strncmp("abcdefgh", "abcdwxyz", 4));
    printf("\n---------------------------\n\n");

    printf("-------- TEST FT_STRNCMP FUNCTION --------\n");
    printf("TEST 1 = s:(hello 42 networking) c:(o) n: 5\n");
    printf("return valus of ft_memchr function === %s\n", ft_memchr("hello 42 networking", 'o', 5));
    printf("return valus of memchr function === %s\n", memchr("hello 42 networking", 'o', 5));
    printf("TEST 2 = s:(bonjourno) c:(n) n: 2\n");
    printf("return valus of ft_memchr function === %s\n", ft_memchr("bonjourno", 'n', 2));
    printf("return valus of memchr function === %s\n", memchr("bonjourno", 'n', 2));
    printf("TEST 3 = s = tab c:(-1) n: 7\n");
    int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
    printf("return valus of ft_memchr function === %s\n", ft_memchr(tab, -1, 7));
    printf("return valus of memchr function === %s\n", memchr(tab, -1, 7));
    printf("\n---------------------------\n\n");

    printf("-------- TEST FT_MEMCMP FUNCTION --------\n");
    printf("TEST 1 = s1:(hello 42 networking) s2:(hello) n: 7\n");
    printf("return valus of ft_memcmp function === %d\n", ft_memcmp("hello 42 networking", "hello", 7));
    printf("return valus of memcmp function === %d\n", memcmp("hello 42 networking", "hello", 7));
    printf("TEST 2 = s1:(hello) s2:(hello) n: 5\n");
    printf("return valus of ft_memcmp function === %d\n", ft_memcmp("hello", "hello", 5));
    printf("return valus of memcmp function === %d\n", memcmp("hello", "hello", 5));
    printf("TEST 3 = s1:(hello) s2:(hello) n: 0\n");
    printf("return valus of ft_memcmp function === %d\n", ft_memcmp("hello", "hello", 0));
    printf("return valus of memcmp function === %d\n", memcmp("hello", "hello", 0));
    printf("TEST 4 = s1:(hello) s2:() n: 5\n");
    printf("return valus of ft_memcmp function === %d\n", ft_memcmp("hello", "", 5));
    printf("return valus of memcmp function === %d\n", memcmp("hello", "", 5));
    printf("TEST 5 = s1:() s2:(hello) n: 5\n");
    printf("return valus of ft_memcmp function === %d\n", ft_memcmp("", "hello", 5));
    printf("return valus of memcmp function === %d\n", memcmp("", "hello", 5));
    printf("\n---------------------------\n\n");

    printf("-------- TEST FT_STRNSTR FUNCTION --------\n");
    printf("TEST 1 = haystack:(hello) needle:() len: 5\n");
    printf("return valus of ft_strnstr function === %s\n", ft_strnstr("hello", "", 5));
    printf("return valus of strnstr function === %s\n", strnstr("hello", "", 5));
    printf("TEST 2 = haystack:() needle:(he) len: 5\n");
    printf("return valus of ft_strnstr function === %s\n", ft_strnstr("", "he", 5));
    printf("return valus of strnstr function === %s\n", strnstr("", "he", 5));
    printf("TEST 3 = haystack:(hello) needle:(el) len: 5\n");
    printf("return valus of ft_strnstr function === %s\n", ft_strnstr("hello", "el", 5));
    printf("return valus of strnstr function === %s\n", strnstr("hello", "el", 5));
    printf("TEST 4 = haystack:(hello) needle:(el) len: 0\n");
    printf("return valus of ft_strnstr function === %s\n", ft_strnstr("hello", "el", 0));
    printf("return valus of strnstr function === %s\n", strnstr("hello", "el", 0));
    printf("TEST 5 = haystack:(lorem ipsum dolor sit amet) needle:(ipsumm) len: 30\n");
    printf("return valus of ft_strnstr function === %s\n", ft_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30));
    printf("return valus of strnstr function === %s\n", strnstr("lorem ipsum dolor sit amet", "ipsumm", 30));
    printf("TEST 6 = haystack:(lorem ipsum dolor sit amet) needle:(dolor) len: 15\n");
    printf("return valus of ft_strnstr function === %s\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));
    printf("return valus of strnstr function === %s\n", strnstr("lorem ipsum dolor sit amet", "dolor", 15));
    printf("\n---------------------------\n\n");

    printf("-------- TEST FT_ATOI FUNCTION --------\n");
    printf("TEST 1 = str : ""      			-123544ab567""\n");
    printf("ft_atio return value === %d\n", ft_atoi("      			-123544ab567"));
	printf("atio return value === %d\n", atoi("      			-123544ab567"));
	printf("TEST 2 = str : ""0""\n");
    printf("ft_atio return value === %d\n", ft_atoi("0"));
	printf("atio return value === %d\n", atoi("0"));
	printf("TEST 3 = str : ""		    ++++----11244hjsdgjhgsd""\n");
    printf("ft_atio return value === %d\n", ft_atoi("		    ++++----11244hjsdgjhgsd"));
	printf("atio return value === %d\n", atoi("		    ++++----11244hjsdgjhgsd"));
	printf("TEST 4 = str : ""    		1457vsfdjc""\n");
    printf("ft_atio return value === %d\n", ft_atoi("    		1457vsfdjc"));
	printf("atio return value === %d\n", atoi("    		1457vsfdjc"));
	printf("TEST 5 = str : ""  		a5464565djhdf""\n");
    printf("ft_atio return value === %d\n", ft_atoi("  		a5464565djhdf"));
	printf("atio return value === %d\n", atoi("  		a5464565djhdf"));
	printf("TEST 6 = str : ""546:5""\n");
    printf("ft_atio return value === %d\n", ft_atoi("546:5"));
	printf("atio return value === %d\n", atoi("546:5"));
	printf("TEST 7 = str : ""+548""\n");
    printf("ft_atio return value === %d\n", ft_atoi("+548"));
	printf("atio return value === %d\n", atoi("+548"));
    printf("\n---------------------------\n\n");

    printf("-------- TEST FT_CALLOC FUNCTION --------\n");
    printf("TEST 1 = pstr && ptstr : aaaaaa\n");
    char *ptstr = "aaaaaa";
    printf("pstr countene : %s\n", ptstr);
    ptstr = (char *)ft_calloc(6, 100);
    printf("pstr countene after use ft_calloc function: %s\n", ptstr);
    char *pstr = "aaaaaa";
    printf("pstr countene : %s\n", pstr);
    pstr = (char *)calloc(6, 100);
    printf("pstr countene after use calloc function: %s\n", pstr);
    printf("TEST 2 = !str \n");
    printf("return value of ft_calloc function : %s\n", (char *)ft_calloc(5, 20));
    printf("return value of calloc function : %s\n", (char *)calloc(5, 20));
    printf("\n---------------------------\n\n");

    printf("-------- TEST FT_STRDUP FUNCTION --------\n");
    printf("TEST 1 = source : strdupstrdup\n");
    char    source[] = "strdupstrdup";
    char    *target = ft_strdup(source);
    char    *target1 = strdup(source);
    printf("target use ft_strdup === %s\ntarget1 use strdup === %s\n", target, target1);
    printf("TEST 2 = source2 : NULL\n");
    char    source2[] = "\0";
    char    *target0 = ft_strdup(source2);
    char    *target01 = strdup(source2);
    printf("target0 use ft_strdup === %s\ntarget01 use strdup === %s\n", target0, target01);
    printf("\n---------------------------\n\n");


    printf("\n\n--***----------*****---PART 2 - ADDITIONAL FUNCTIONS---*****----------***--\n\n");

    printf("-------- TEST FT_SUBSTR FUNCTION --------\n");

    printf("\n---------------------------\n\n");


    
    





    return 0;
}