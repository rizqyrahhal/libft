#include "libft.h"
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h> 
#include <errno.h> 

char mapi(unsigned int i, char c)
{
    c = c + 1;
    return (c);
}
void iteri(unsigned int i, char *c)
{
    *c = *c + 1;
}

int main()
{
    printf("\n\n--***----------*****---PART 1 - LIBC FUNCTIONS---*****----------***--\n\n");


    printf("**+-------- TEST FT_IS_ALPHA FUNCTIN --------+**\n");
    printf("\nTEST 1 = 8\n");
    printf("ft_isalpha: %d\n", ft_isalpha('8'));
    printf("isalpha: %d\n", isalpha('8'));
    printf("\nTEST 2 = F\n");
    printf("ft_isalpha: %d\n", ft_isalpha('F'));
    printf("isalpha: %d\n", isalpha('F'));
    printf("\nTEST 3 = ,\n");
    printf("ft_isalpha: %d\n", ft_isalpha(','));
    printf("isalpha: %d\n", isalpha(','));
    printf("\nTEST 4 = a\n");
    printf("ft_isalpha: %d\n", ft_isalpha('a'));
    printf("isalpha: %d\n", isalpha('a'));
    printf("\n|*|---------------------------|*|\n\n");

    printf("**+-------- TEST FT_IS_DIGIT FUNCTION --------+**\n");
    printf("\nTEST 1 = 8\n");
    printf("ft_isdigit: %d\n", ft_isdigit('8'));
    printf("isdigit: %d\n", isdigit('8'));
    printf("\nTEST 2 = r\n");
    printf("ft_isdigit: %d\n", ft_isdigit('r'));
    printf("isdigit: %d\n", isdigit('r'));
    printf("\nTEST 3 = ~\n");
    printf("ft_isdigit: %d\n", ft_isdigit('~'));
    printf("isdigit: %d\n", isdigit('~'));
    printf("\n|*|---------------------------|*|\n\n");

    printf("**+-------- TEST FT_IS_ALNUM FUNCTION --------+**\n");
    printf("\nTEST 1 = 8\n");
    printf("ft_isalnum: %d\n", ft_isalnum('8'));
    printf("isalnum: %d\n", isalnum('8'));
    printf("\nTEST 2 = r\n");
    printf("ft_isalnum: %d\n", ft_isalnum('r'));
    printf("isalnum: %d\n", isalnum('r'));
    printf("\nTEST 3 = D\n");
    printf("ft_isalnum: %d\n", ft_isalnum('D'));
    printf("isalnum: %d\n", isalnum('D'));
    printf("\nTEST 4 = @\n");
    printf("ft_isalnum: %d\n", ft_isalnum('@'));
    printf("isalnum: %d\n", isalnum('@'));
    printf("\n|*|---------------------------|*|\n\n");

    printf("**+-------- TEST FT_IS_ASCII FUNCTION --------+**\n");
    printf("\nTEST 1 = ~\n");
    printf("ft_isascii: %d\n", ft_isascii('~'));
    printf("isascii: %d\n", isascii('~'));
    printf("\nTEST 2 = ©\n");
    printf("ft_isascii: %d\n", ft_isascii(u'©'));
    printf("isascii: %d\n", isascii(u'©'));
    printf("\n|*|---------------------------|*|\n\n");

    printf("**+-------- TEST FT_IS_PRINT FUNCTION --------+**\n");
    printf("\nTEST 1 = ~\n");
    printf("ft_isprint: %d\n", ft_isprint('~'));
    printf("isprint: %d\n", isprint('~'));
    printf("\nTEST 2 = ¥\n");
    printf("ft_isprint: %d\n", ft_isprint(u'¥'));
    printf("isprint: %d\n", isprint(u'¥'));
    printf("\n|*|---------------------------|*|\n\n");

    printf("**+-------- TEST FT_STRLEN FUNCTION --------+**\n");
    printf("\nTEST 1 = 9abilandhabil\n");
    printf("ft_strlen: %zu\n", ft_strlen("9abilandhabil"));
    printf("strlen: %zu\n", ft_strlen("9abilandhabil"));
    printf("\n|*|---------------------------|*|\n\n");

    printf("**+-------- TEST FT_MEMSET FUNCTION --------+**\n");
    printf("\nTEST 1 = (strg :testmemsetfunction) (c : *) (len : 5)\n");
    char array01[] = "testmemsetfunction";
    char array02[] = "testmemsetfunction";
    ft_memset(array01, '*', 5);
    memset(array02, '*', 5);
    printf("ft_memset: %s\nmemset: %s\n", array01, array02);
    printf("\nTEST 2 = (strg : testmemsetfunction) (c : '\\0') (len : 5)\n");
    char array0101[] = "testmemsetfunction";
    char array0202[] = "testmemsetfunction";
    ft_memset(array0101, '\0', 5);
    memset(array0202, '\0', 5);
    printf("ft_memset: %s\nmemset: %s\n", array0101, array0202);
    printf("============ NEW TEST ============= HAKAM\n");
    int arrayint[2] = {1000, 0};
    memset(arrayint, 'A', 4);
    printf("RESULT == %d\n", arrayint[0]);
    /*printf("TEST 2 = nothing\n");
    char array03[] = "testmemsetfunction";
    char array04[] = "testmemsetfunction";
    ft_memset(array03, '*', 0);
    memset(array04, '*', 0);
    printf("ft_memset: %s\nmemset: %s\n", array03, array04);*/
    printf("\n|*|---------------------------|*|\n\n");

    printf("**+-------- TEST FT_BZERO FUNCTION --------+**\n");
    printf("\nTEST 1 = (strg : abcdefgh) (n : 8)\n");
    char array1[] = "abcdefgh";
    char array2[] = "abcdefgh";
    ft_bzero(array1, 8);
    bzero(array2, 8);
    printf("ft_bezro: %s\n", array1);
    printf("bezro: %s\n", array2);
    printf("\nTEST 2 = (strg : abcdefgh) (n : 2)\n");
    char array15[] = "abcdefgh";
    char array25[] = "abcdefgh";
    ft_bzero(array15, 2);
    bzero(array25, 2);
    printf("ft_bezro: %s\n", array15);
    printf("bezro: %s\n", array25);
    /*printf("TEST 2 = nothing\n");
    char array3[] = "";
    char array4[] = "";
    ft_bzero(array3, 0);
    bzero(array4, 0);
    printf("ft_bezro: %s\n", array3);
    printf("bezro: %s\n", array4);*/
    printf("\n|*|---------------------------|*|\n\n");

    printf("**+-------- TEST FT_MEMCPY FUNCTION --------+**\n");
    printf("\nTEST 1 = (src: ab) (dst: ) (n : 5)\n");
    char    src1[] = "ab";
    char    dst1[30];
    ft_memcpy(dst1, src1, 5);
    printf("ft_memcpy: %s\n", dst1);
    char    src11[] = "ab";
    char    dst11[30];
    memcpy(dst11, src11, 5);
    printf("memcpy: %s\n", dst11);
    printf("\nTEST 2 = (src: sjfhrfhslfj) (dst:jjjjjjjjjjjjjj) (n : 0)\n");
    char    src2[] = "sjfhrfhslfj";
    char    dst2[30] = "jjjjjjjjjjjjjj";
    ft_memcpy(dst2, src2, 0);
    printf("ft_memcpy: %s\n", dst2);
    char    src22[] = "sjfhrfhslfj";
    char    dst22[30] ="jjjjjjjjjjjjjj";
    memcpy(dst22, src22, 0);
    printf("memcpy: %s\n", dst22);
    printf("\nTEST 3 = (src: zyk'null'jhfgxkh) (dst:jjjjjjjjjjjjjj) (n : 6)\n");
    char    src3[] = "zyk\0jhfgxkh";
    char    dst3[30] = "jjjjjjjjjjjjjj";
    ft_memcpy(dst3, src3, 6);
    printf("ft_memcpy: %s\n", dst3);
    char    src33[] = "zyk\0jhfgxkh";
    char    dst33[30] ="jjjjjjjjjjjjjj";
    memcpy(dst33, src33, 6);
    printf("memcpy: %s\n", dst33);
    printf("\nTEST 4 = (src: zykjhfgxk'null'h) (dst:jjjjjjjjjjjjjj) (n : 6)\n");
    char    src4[] = "zykjhfgxk\0h";
    char    dst4[30] = "jjjjjjjjjjjjjj";
    ft_memcpy(dst4, src4, 6);
    printf("ft_memcpy: %s\n", dst4);
    char    src44[] = "zykjhfgxk\0h";
    char    dst44[30] ="jjjjjjjjjjjjjj";
    memcpy(dst44, src44, 6);
    printf("memcpy: %s\n", dst44);
    printf("\nTEST 5 = (src: '&str78524[0]') (dst: '&str78524[2]') (len : 9)\n");
    char str785243[] = "abcdefghljk";
    printf("ft_memcpy: %s\n", ft_memcpy(&str785243[2],&str785243[0],9));
    printf("\nTEST 6 = (src: '') (dst: '') (len : 5)\n");
    printf("ft_memcpy: %s\n", ft_memcpy("", "", 5));
    printf("\n|*|---------------------------|*|\n\n");

    printf("**+-------- TEST FT_MEMMOVE FUNCTION --------+**\n");
    printf("\nTEST 1 = (src: ab) (dst: ) (len : 5)\n");
    char    src01[] = "ab";
    char    dst01[30];
    ft_memmove(dst01, src01, 5);
    printf("ft_memmove: %s\n", dst01);
    char    src011[] = "ab";
    char    dst011[30];
    memmove(dst011, src011, 5);
    printf("memmove: %s\n", dst011);
    printf("\nTEST 2 = (src: sjfhrfhslfj) (dst:jjjjjjjjjjjjjj) (len : 0)\n");
    char    src02[] = "sjfhrfhslfj";
    char    dst02[30] = "jjjjjjjjjjjjjj";
    ft_memmove(dst02, src02, 0);
    printf("ft_memmove: %s\n", dst2);
    char    src022[] = "sjfhrfhslfj";
    char    dst022[30] ="jjjjjjjjjjjjjj";
    memmove(dst022, src022, 0);
    printf("memmove: %s\n", dst022);
    printf("\nTEST 3 = (src: zykjhf'null'gxkh) (dst:jjjjjjjjjjjjjj) (len : 6)\n");
    char    src03[] = "zykjhf\0gxkh";
    char    dst03[30] = "jjjjjjjjjjjjjj";
    ft_memmove(dst03, src03, 6);
    printf("ft_memmove: %s\n", dst03);
    char    src033[] = "zykjhf\0gxkh";
    char    dst033[30] ="jjjjjjjjjjjjjj";
    memmove(dst033, src033, 6);
    printf("memmove: %s\n", dst033);
    printf("\nTEST 4 = (src: zykjh'null'fgxkh) (dst:jjjjjjjjjjjjjj) (len : 6)\n");
    char    src04[] = "zykjh\0fgxkh";
    char    dst04[30] = "jjjjjjjjjjjjjj";
    ft_memmove(dst04, src04, 6);
    printf("ft_memmove: %s\n", dst04);
    char    src044[] = "zykjh\0fgxkh";
    char    dst044[30] ="jjjjjjjjjjjjjj";
    memmove(dst044, src044, 6);
    printf("memmove: %s\n", dst044);
    printf("\nTEST 5 = (src: '&str78524[0]') (dst: '&str78524[2]') (len : 9)\n");
    char str78524[] = "abcdefghljk";
    printf("ft_memmove: %s\n", ft_memmove(&str78524[2],&str78524[0],9));
    printf("\nTEST 6 = (src: '') (dst: '') (len : 5)\n");
    printf("ft_memmove: %s\n", ft_memmove("", "", 5));
    printf("\n|*|---------------------------|*|\n\n");

    printf("**+-------- TEST FT_STRLCPY FUNCTION --------+**\n");
    printf("\nTEST 1 = (src: rizqy) (dst: ) (dstsize : 6)\n");
	char dst001[20];
	const char src001[6] = "rizqy";
	printf("return valus of ft_strlcpy : %zu\n", ft_strlcpy(dst001, src001, 6));
	printf("dst : %s\nsrc : %s\n", dst001, src001);
	char dst0011[20];
	const char src0011[6] = "rizqy";
	printf("return valus of strlcpy : %zu\n", strlcpy(dst0011, src0011, 6));
	printf("dst : %s\nsrc : %s\n", dst0011, src0011);
    printf("\nTEST 2 = (src: rizqyfffffffff) (dst: ) (dstsize : 6)\n");
	char dst00101[20];
	const char src00101[] = "rizqyfffffffff";
	printf("return valus of ft_strlcpy : %zu\n", ft_strlcpy(dst00101, src00101, 6));
	printf("dst : %s\nsrc : %s\n", dst00101, src00101);
	char dst001101[20];
	const char src001101[] = "rizqyfffffffff";
	printf("return valus of strlcpy : %zu\n", strlcpy(dst001101, src001101, 6));
	printf("dst : %s\nsrc : %s\n", dst001101, src001101);
    printf("\n|*|---------------------------|*|\n\n");

    printf("**+-------- TEST FT_STRLCAT FUNCTION --------+**\n");
    printf("\nTEST 1 = (dest : hakam) (src : hello test) (dstsize : 3)\n");
    char *catdest = malloc(sizeof(char) * 5);
    strcpy(catdest, "hakam");
    printf("=== %lu\n", ft_strlcat(catdest, "hello test", 3));
    printf("=== %s\n", catdest);
    char *catdest1 = malloc(sizeof(char) * 5);
    strcpy(catdest1, "hakam");
    printf("=== %lu\n", strlcat(catdest1, "hello test", 3));
    printf("=== %s\n", catdest1);
    printf("\nTEST 2 = (dest : hakam) (src : hello test) (dstsize : 12)\n");
    char *catdest0 = malloc(sizeof(char) * 5);
    strcpy(catdest0, "hakam");
    printf("=== %lu\n", ft_strlcat(catdest0, " hello test", 12));
    printf("=== %s\n", catdest0);
    char *catdest01 = malloc(sizeof(char) * 5);
    strcpy(catdest01, "hakam");
    printf("=== %lu\n", strlcat(catdest01, " hello test", 12));
    printf("=== %s\n", catdest01);
    printf("\n|*|---------------------------|*|\n\n");

    printf("**+-------- TEST FT_TOUPPER FUNCTION --------+**\n");
    printf("\nTEST 1 = a\n");
    printf("return value of ft_toupper function : %c\n", ft_toupper('a'));
    printf("return value of toupper function : %c\n", ft_toupper('a'));
    printf("\nTEST 2 = G\n");
    printf("return value of ft_toupper function : %c\n", ft_toupper('G'));
    printf("return value of toupper function : %c\n", toupper('G'));
    // printf("\nTEST 3 = 5\n");
    // printf("return value of ft_toupper function : %c\n", ft_toupper('5'));
    // printf("return value of toupper function : %c\n", toupper('5'));
    printf("\n|*|---------------------------|*|\n\n");

    printf("**+-------- TEST FT_TOLOWER FUNCTION --------+**\n");
    printf("\nTEST 1 = b\n");
    printf("return value of ft_tolower function : %c\n", ft_tolower('b'));
    printf("return value of tolower function : %c\n", ft_tolower('b'));
    printf("\nTEST 2 = F\n");
    printf("return value of ft_tolower function : %c\n", ft_tolower('F'));
    printf("return value of tolower function : %c\n", tolower('F'));
    // printf("\nTEST 3 = ~\n");
    // printf("return value of ft_tolower function : %c\n", ft_tolower('~'));
    // printf("return value of tolower function : %c\n", tolower('~'));
    printf("\n|*|---------------------------|*|\n\n");

    printf("**+-------- TEST FT_STRCHR FUNCTION --------+**\n");
    printf("\nTEST 1 = s:(hello 42 networking) c:(n)\n");
    printf("return valus of ft_strchr function : %s\n", ft_strchr("hello 42 networking", 'n'));
    printf("return valus of strchr function : %s\n", strchr("hello 42 networking", 'n'));
    printf("\nTEST 2 = s:(hello 42 networking) c:(f)\n");
    printf("return valus of ft_strchr function : %s\n", ft_strchr("hello 42 networking", 'f'));
    printf("return valus of strchr function : %s\n", strchr("hello 42 networking", 'f'));
    printf("\nTEST 3 = s:(hell'null'o 42 networking) c:(w)\n");
    printf("return valus of ft_strchr function : %s\n", ft_strchr("hell\0o 42 networking", 'w'));
    printf("return valus of strchr function : %s\n", strchr("hell\0o 42 networking", 'w'));
    printf("\nTEST 4 = s: '\\0' c: h\n");
    printf("return valus of ft_strchr function : %s\n", ft_strchr("\0", 'h'));
    printf("return valus of strchr function : %s\n", strchr("\0", 'h'));
    printf("\nTEST 5 = s: 'fffff' c: 'null'\n");
    printf("return valus of ft_strchr function : %s\n", ft_strchr("fffff", '\0'));
    printf("return valus of strchr function : %s\n", strchr("fffff", '\0'));
    printf("\nTEST 6 = s: 'bonjour' c: 'b'\n");
    printf("return valus of ft_strchr function : %s\n", ft_strchr("bonjour", 'b'));
    printf("return valus of strchr function : %s\n", strchr("bonjour", 'b'));
    printf("\nTEST 7 = s: 'tripouille' c: 't' + 256\n");
    printf("return valus of ft_strchr function : %s\n", ft_strchr("tripouille", 't' + 256));
    printf("return valus of strchr function : %s\n", strchr("tripouille", 't' + 256));
    printf("\n|*|---------------------------|*|\n\n");

    printf("**+-------- TEST FT_STRRCHR FUNCTION --------+**\n");
    printf("\nTEST 1 = s:(hello 42 networking) c:(n)\n");
    printf("return valus of ft_strrchr function : %s\n", ft_strrchr("hello 42 networking", 'n'));
    printf("return valus of strrchr function : %s\n", strrchr("hello 42 networking", 'n'));
    printf("\nTEST 2 = s:(hello 42 networking) c:(f)\n");
    printf("return valus of ft_strrchr function : %s\n", ft_strrchr("hello 42 networking", 'f'));
    printf("return valus of strrchr function : %s\n", strrchr("hello 42 networking", 'f'));
    printf("\nTEST 3 = s:(hell'null'o 42 networking) c:(w)\n");
    printf("return valus of ft_strrchr function : %s\n", ft_strrchr("hell\0o 42 networking", 'w'));
    printf("return valus of strrchr function : %s\n", strrchr("hell\0o 42 networking", 'w'));
    printf("\nTEST 4 = s: 'null' c: h\n");
    printf("return valus of ft_strrchr function : %s\n", ft_strrchr("\0", 'h'));
    printf("return valus of strrchr function : %s\n", strrchr("\0", 'h'));
    printf("\nTEST 5 = s: 'fffff' c: 'null'\n");
    printf("return valus of ft_strrchr function : %s\n", ft_strrchr("fffff", '\0'));
    printf("return valus of strrchr function : %s\n", strrchr("fffff", '\0'));
    printf("\nTEST 6 = s: 'bonjour' c: 'b'\n");
    printf("return valus of ft_strrchr function : %s\n", ft_strrchr("bonjour", 'b'));
    printf("return valus of strrchr function : %s\n", strrchr("bonjour", 'b'));
    printf("\nTEST 7 = s: 'bonjobur' c: 'b'\n");
    printf("return valus of ft_strrchr function : %s\n", ft_strrchr("bonjobur", 'b'));
    printf("return valus of strrchr function : %s\n", strrchr("bonjobur", 'b'));
    printf("\nTEST 8 = s: 'tripouille' c: 't' + 256\n");
    printf("return valus of ft_strchr function : %s\n", ft_strrchr("tripouille", 't' + 256));
    printf("return valus of strchr function : %s\n", strrchr("tripouille", 't' + 256));
    printf("\n|*|---------------------------|*|\n\n");

    printf("**+-------- TEST FT_STRNCMP FUNCTION --------+**\n");
    printf("\nTEST 1 = s1:(hello 42 networking) s2:(hello 42 networking) n: 5\n");
    printf("return valus of ft_strncmp function === %d\n", ft_strncmp("hello 42 networking", "hello 42 networking", 5));
    printf("return valus of strncmp function === %d\n", strncmp("hello 42 networking", "hello 42 networking", 5));
    printf("\nTEST 2 = s1:(test\\200) s2:(test\\0) n: 6\n");
    printf("return valus of ft_strncmp function === %d\n", ft_strncmp("test\200", "test\0", 6));
    printf("return valus of strncmp function === %d\n", strncmp("test\200", "test\0", 6));
    printf("\nTEST 3 = s1:(test) s2:(testss) n: 7\n");
    printf("return valus of ft_strncmp function === %d\n", ft_strncmp("test", "testss", 7));
    printf("return valus of strncmp function === %d\n", strncmp("test", "testss", 7));
    printf("\nTEST 4 = s1:(testss) s2:(test) n: 7\n");
    printf("return valus of ft_strncmp function === %d\n", ft_strncmp("testss", "test", 7));
    printf("return valus of strncmp function === %d\n", strncmp("testss", "test", 7));
    printf("\nTEST 5 = s1:(abcdefgh) s2:() n: 0\n");
    printf("return valus of ft_strncmp function === %d\n", ft_strncmp("abcdefgh", "", 0));
    printf("return valus of strncmp function === %d\n", strncmp("abcdefgh", "", 0));
    printf("\nTEST 6 = s1:(zyxbcdefgh) s2:(abcdwxyz) n: 0\n");
    printf("return valus of ft_strncmp function === %d\n", ft_strncmp("zyxbcdefgh", "abcdwxyz", 0));
    printf("return valus of strncmp function === %d\n", strncmp("zyxbcdefgh", "abcdwxyz", 0));
    printf("\nTEST 7 = s1:(abc\\0defgh) s2:(abc\\0dwxyz) n: 4\n");
    printf("return valus of ft_strncmp function === %d\n", ft_strncmp("abc\0defgh", "abc\0dwxyz", 4));
    printf("return valus of strncmp function === %d\n", strncmp("abc\0defgh", "abc\0dwxyz", 4));
    printf("\nTEST 8 = s1:(test) s2:(test\\0) n: 6\n");
    printf("return valus of ft_strncmp function === %d\n", ft_strncmp("test", "test\0", 6));
    printf("return valus of strncmp function === %d\n", strncmp("test", "test\0", 6));
    printf("\nTEST 9 = s1:(s2[]) s2:(s3[]) n: 4\n");
    char s2[] = {0, 0, 127, 0};
    char s3[] = {0, 0, 42, 0};
    printf("return valus of ft_strncmp function === %d\n", ft_strncmp(s2, s3, 4));
    printf("return valus of strncmp function === %d\n", strncmp(s2, s3, 4));
    printf("\nTEST 10 = s1:(t\\0est) s2:(test) n: 5\n");
    printf("return valus of ft_strncmp function === %d\n", ft_strncmp("t\0est", "t\200est", 5));
    printf("return valus of strncmp function === %d\n", strncmp("t\0est", "t\200est", 5));
    printf("\n|*|---------------------------|*|\n\n");

    printf("**+-------- TEST FT_MEMCHR FUNCTION --------+**\n");
    printf("\nTEST 1 = (s : hello 42 networking) (c : o) (n : 5)\n");
    printf("return valus of ft_memchr function === %s\n", ft_memchr("hello 42 networking", 'o', 5));
    printf("return valus of memchr function === %s\n", memchr("hello 42 networking", 'o', 5));
    printf("\nTEST 2 = (s : bonjourno) (c : n) (n : 2)\n");
    printf("return valus of ft_memchr function === %s\n", ft_memchr("bonjourno", 'n', 2));
    printf("return valus of memchr function === %s\n", memchr("bonjourno", 'n', 2));
    printf("\nTEST 3 = (s : tab[7] = {-49, 49, 1, -1, 0, -2, 2}) (c : -1) (n : 7)\n");
    int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
    printf("return valus of ft_memchr function === %s\n", ft_memchr(tab, -1, 7));
    printf("return valus of memchr function === %s\n", memchr(tab, -1, 7));
    printf("\nTEST 4 = (s : bonjourno) (c : w) (n : 10)\n");
    printf("return valus of ft_memchr function === %s\n", ft_memchr("bonjourno", 'w', 10));
    printf("return valus of memchr function === %s\n", memchr("bonjourno", 'w', 10));
    printf("\n|*|---------------------------|*|\n\n");

    printf("**+-------- TEST FT_MEMCMP FUNCTION --------+**\n");
    printf("\nTEST 1 = s1:(hello 42 networking) s2:(hello) n: 7\n");
    printf("return valus of ft_memcmp function === %d\n", ft_memcmp("hello 42 networking", "hello", 7));
    printf("return valus of memcmp function === %d\n", memcmp("hello 42 networking", "hello", 7));
    printf("\nTEST 2 = s1:(hello) s2:(hello) n: 5\n");
    printf("return valus of ft_memcmp function === %d\n", ft_memcmp("hello", "hello", 5));
    printf("return valus of memcmp function === %d\n", memcmp("hello", "hello", 5));
    printf("\nTEST 3 = s1:(hello) s2:(hello) n: 0\n");
    printf("return valus of ft_memcmp function === %d\n", ft_memcmp("hello", "hello", 0));
    printf("return valus of memcmp function === %d\n", memcmp("hello", "hello", 0));
    printf("\nTEST 4 = s1:(hello) s2:() n: 5\n");
    printf("return valus of ft_memcmp function === %d\n", ft_memcmp("hello", "", 5));
    printf("return valus of memcmp function === %d\n", memcmp("hello", "", 5));
    printf("\nTEST 5 = s1:() s2:(hello) n: 5\n");
    printf("return valus of ft_memcmp function === %d\n", ft_memcmp("", "hello", 5));
    printf("return valus of memcmp function === %d\n", memcmp("", "hello", 5));
    printf("\nTEST 6 = s1:(test\\0) s2:(test\\200) n: 6\n");
    printf("return valus of ft_memcmp function === %d\n", ft_memcmp("test\0", "test\200", 6));
    printf("return valus of memcmp function === %d\n", memcmp("test\0", "test\200", 6));
    printf("\nTEST 7 = s1:(test\\200) s2:(test\\0) n: 6\n");
    printf("return valus of ft_memcmp function === %d\n", ft_memcmp("test\200", "test\0", 6));
    printf("return valus of memcmp function === %d\n", memcmp("test\200", "test\0", 6));
    printf("\nTEST 8 = s1:(test) s2:(test\\0) n: 5\n");
    printf("return valus of ft_memcmp function === %d\n", ft_memcmp("test", "test\0", 5));
    printf("return valus of memcmp function === %d\n", memcmp("test", "test\0", 5));
    printf("\n|*|---------------------------|*|\n\n");

    printf("**+-------- TEST FT_STRNSTR FUNCTION --------+**\n");
    printf("\nTEST 1 = haystack:(hello) needle:() len: 5\n");
    printf("return valus of ft_strnstr function === %s\n", ft_strnstr("hello", "", 5));
    printf("return valus of strnstr function === %s\n", strnstr("hello", "", 5));
    printf("\nTEST 2 = haystack:() needle:(he) len: 5\n");
    printf("return valus of ft_strnstr function === %s\n", ft_strnstr("", "he", 5));
    printf("return valus of strnstr function === %s\n", strnstr("", "he", 5));
    printf("\nTEST 3 = haystack:(hello) needle:(el) len: 5\n");
    printf("return valus of ft_strnstr function === %s\n", ft_strnstr("hello", "el", 5));
    printf("return valus of strnstr function === %s\n", strnstr("hello", "el", 5));
    printf("\nTEST 4 = haystack:(hello) needle:(el) len: 0\n");
    printf("return valus of ft_strnstr function === %s\n", ft_strnstr("hello", "el", 0));
    printf("return valus of strnstr function === %s\n", strnstr("hello", "el", 0));
    printf("\nTEST 5 = haystack:(lorem ipsum dolor sit amet) needle:(ipsumm) len: 30\n");
    printf("return valus of ft_strnstr function === %s\n", ft_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30));
    printf("return valus of strnstr function === %s\n", strnstr("lorem ipsum dolor sit amet", "ipsumm", 30));
    printf("\nTEST 6 = haystack:(lorem ipsum dolor sit amet) needle:(dolor) len: 15\n");
    printf("return valus of ft_strnstr function === %s\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));
    printf("return valus of strnstr function === %s\n", strnstr("lorem ipsum dolor sit amet", "dolor", 15));
    printf("\nTEST 7 = haystack:(yarbi dir chi tawil dlkhir ya rabi) needle:() len: -4\n");
    printf("return valus of ft_strnstr function === %s\n", ft_strnstr("yarbi dir chi tawil dlkhir ya rabi", "", -4));
    printf("return valus of strnstr function === %s\n", strnstr("yarbi dir chi tawil dlkhir ya rabi", "", -4));
    printf("\nTEST 8 = haystack:() needle:() len: 3\n");
    printf("return valus of ft_strnstr function === %s\n", ft_strnstr("", "", 3));
    printf("return valus of strnstr function === %s\n", strnstr("", "", 3));
    printf("\nTEST 9 = haystack:(yarbi dir chi tawil dlkhir ya rabi) needle:(dir) len: 10\n");
    printf("return valus of ft_strnstr function === %s\n", ft_strnstr("yarbi dir chi tawil dlkhir ya rabi", "dir", 10));
    printf("return valus of strnstr function === %s\n", strnstr("yarbi dir chi tawil dlkhir ya rabi", "dir", 10));
    printf("\nTEST 10 = haystack:(yarbi dir chi tawil dlkhir ya rabi) needle:(dir) len: 2\n");
    printf("return valus of ft_strnstr function === %s\n", ft_strnstr("yarbi dir chi tawil dlkhir ya rabi", "dir", 2));
    printf("return valus of strnstr function === %s\n", strnstr("yarbi dir chi tawil dlkhir ya rabi", "dir", 2));
    // printf("\nTEST 8 = haystack:(NULL) needle:(NULL) len: 5\n");
    // printf("return valus of ft_strnstr function === %s\n", ft_strnstr(NULL, NULL, 5));
    // printf("return valus of strnstr function === %s\n", strnstr(NULL, NULL, 5));
    // printf("\nTEST 9 = haystack:('teststrnstr') needle:(NULL) len: 5\n");
    // printf("return valus of ft_strnstr function === %s\n", ft_strnstr("teststrnstr", NULL, 5));
    // printf("return valus of strnstr function === %s\n", strnstr("teststrnstr", NULL, 5));
    // printf("\nTEST 10 = haystack:(NULL) needle:('ser') len: 5\n");
    // printf("return valus of ft_strnstr function === %s\n", ft_strnstr(NULL, "ser", 5));
    // printf("return valus of strnstr function === %s\n", strnstr(NULL, "ser", 5));
    printf("\n|*|---------------------------|*|\n\n");

    printf("**+-------- TEST FT_ATOI FUNCTION --------+**\n");
    printf("\nTEST 1 = str : ""      			-123544ab567""\n");
    printf("ft_atio return value === %d\n", ft_atoi("      			-123544ab567"));
	printf("atio return value === %d\n", atoi("      			-123544ab567"));
	printf("\nTEST 2 = str : ""0""\n");
    printf("ft_atio return value === %d\n", ft_atoi("0"));
	printf("atio return value === %d\n", atoi("0"));
	printf("\nTEST 3 = str : ""		    ++++----11244hjsdgjhgsd""\n");
    printf("ft_atio return value === %d\n", ft_atoi("		    ++++----11244hjsdgjhgsd"));
	printf("atio return value === %d\n", atoi("		    ++++----11244hjsdgjhgsd"));
	printf("\nTEST 4 = str : ""    		1457vsfdjc""\n");
    printf("ft_atio return value === %d\n", ft_atoi("    		1457vsfdjc"));
	printf("atio return value === %d\n", atoi("    		1457vsfdjc"));
	printf("\nTEST 5 = str : ""  		a5464565djhdf""\n");
    printf("ft_atio return value === %d\n", ft_atoi("  		a5464565djhdf"));
	printf("atio return value === %d\n", atoi("  		a5464565djhdf"));
	printf("\nTEST 6 = str : ""546:5""\n");
    printf("ft_atio return value === %d\n", ft_atoi("546:5"));
	printf("atio return value === %d\n", atoi("546:5"));
	printf("\nTEST 7 = str : ""+548""\n");
    printf("ft_atio return value === %d\n", ft_atoi("+548"));
	printf("atio return value === %d\n", atoi("+548"));
    printf("\n|*|---------------------------|*|\n\n");

    printf("**+-------- TEST FT_CALLOC FUNCTION --------+**\n");
    printf("\nTEST 1 = pstr && ptstr : aaaaaa\n");
    char *ptstr = "aaaaaa";
    printf("pstr countene : %s\n", ptstr);
    ptstr = ft_calloc(6, 100);
    printf("pstr countene after use ft_calloc function: %s\n", ptstr);
    char *pstr = "aaaaaa";
    printf("pstr countene : %s\n", pstr);
    pstr = calloc(6, 100);
    printf("pstr countene after use calloc function: %s\n", pstr);
    printf("\nTEST 2 = !str \n");
    printf("return value of ft_calloc function : %s\n", (char *)ft_calloc(5, 20));
    printf("return value of calloc function : %s\n", (char *)calloc(5, 20));
    printf("\n|*|---------------------------|*|\n\n");

    printf("**+-------- TEST FT_STRDUP FUNCTION --------+**\n");
    printf("\nTEST 1 = source : 'strdupstrdup'\n");
    char    source[] = "strdupstrdup";
    char    *target = ft_strdup(source);
    char    *target1 = strdup(source);
    printf("target use ft_strdup === %s\ntarget1 use strdup === %s\n", target, target1);
    printf("\nTEST 2 = source2 : 'NULL'\n");
    char    source2[] = "\0";
    char    *target0 = ft_strdup(source2);
    char    *target01 = strdup(source2);
    printf("target0 use ft_strdup === %s\ntarget01 use strdup === %s\n", target0, target01);
    printf("\n|*|---------------------------|*|\n\n");


    printf("\n\n--***----------*****---PART 2 - ADDITIONAL FUNCTIONS---*****----------***--\n\n");


    printf("**+-------- TEST FT_SUBSTR FUNCTION --------+**\n");
    printf("\nTEST 1 = sourc : 'substrsubstr' index : 3  len : 6\n");
    char    sourc[] = "substrsubstr";
    printf("return value of ft_substr function === %s\n", ft_substr(sourc, 3, 6));
    printf("\nTEST 2 = sourc1 : 'sub str sub str' index : 0 len : 10\n");
    char    sourc1[] = "sub str sub str";
    printf("return value of ft_substr function === %s\n", ft_substr(sourc1, 0, 10));
    printf("\nTEST 3 = sourc2 : 'sub str sub str' index : 17 len : 10\n");
    char    sourc2[] = "sub str sub str";
    printf("return value of ft_substr function === %s\n", ft_substr(sourc2, 17, 10));
    printf("\nTEST 4 = source : 'tripouille' index : 1 len : 1\n");
    printf("return value of ft_substr function === %s\n", ft_substr("tripouille", 1, 1));
    printf("\nTEST 5 = source : '1 index : 42 len : 42000000\n");
    char * str = strdup("1");
    printf("return value of ft_substr function === %s\n", ft_substr(str, 42, 42000000));
    printf("\nTEST 6 = source : '0123456789' index : 9 len : 10\n");
    printf("return value of ft_substr function === %s\n", ft_substr("0123456789", 9, 10));
    printf("\nTEST 7 = source : 'tripouille' index : 1 len : 1\n");
    printf("return value of ft_substr function === %s\n", ft_substr("tripouille", 1, 1));
    printf("\nTEST 8 = source : '42' index : 0 len : 0\n");
    printf("return value of ft_substr function === %s\n", ft_substr("42", 0, 0));
    printf("\nTEST 9 = source : 'BONJOUR LES HARICOTS !' index : 8 len : 14\n");
    printf("return value of ft_substr function === %s\n", ft_substr("BONJOUR LES HARICOTS !", 8, 14));
    printf("\nTEST 10 = source : 'test' index : 1 len : 2\n");
    printf("return value of ft_substr function === %s\n", ft_substr("test", 1, 2));

    printf("\n|*|---------------------------|*|\n\n");

    printf("**+-------- TEST FT_STRJOIN FUNCTION --------+**\n");
    printf("\nTEST 1 = sourcc01 : 'strstrstr'  sourcc02 : 'joinjoinjoin'  \n");
    char    sourcc01[] = "strstrstr";
    char    sourcc02[] = "joinjoinjoin";
    printf("return value of ft_strjoin function === %s\n", ft_strjoin(sourcc01, sourcc02));
    printf("\nTEST 2 = sourcc011 : 'strstrstr'  sourcc022 : '' \n");
    char    sourcc011[] = "strstrstr";
    char    sourcc022[] = "";
    printf("return value of ft_strjoin function === %s\n", ft_strjoin(sourcc011, sourcc022));
    printf("\nTEST 3 = sourcc0111 : '\\0'  sourcc0222 : 'joinjoinjoin'  \n");
    char    sourcc0111[] = "\0";
    char    sourcc0222[] = "joinjoinjoin";
    printf("return value of ft_strjoin function === %s\n", ft_strjoin(sourcc0111, sourcc0222));
    printf("\nTEST 4 = sourcc01111 : '\\0'  sourcc02222 : '\\0'  \n");
    char    sourcc01111[] = "\0";
    char    sourcc02222[] = "\0";
    printf("return value of ft_strjoin function === %s\n", ft_strjoin(sourcc01111, sourcc02222));
    printf("\n|*|---------------------------|*|\n\n");

    printf("**+-------- TEST FT_STRTRIM FUNCTION --------+**\n");
    printf("\nTEST 1 = (s1 : 'tidolardolarti') (set : 'ti') \n");
    printf("return value of ft_strtrim function === %s\n", ft_strtrim("tidolardolarti", "ti"));
    printf("\nTEST 2 = (s1 : ' \\t\\n \\t    lorem ipsum dolor sit amet     \\t  \\n \\t') (set : '\\t \\n') \n");
    printf("return value of ft_strtrim function === %s\n", ft_strtrim(" \t\n \t    lorem ipsum dolor sit amet     \t  \n \t", "\t \n"));
    printf("\nTEST 3 = (s1 : '  \\n  \\t  lorem  ipsum  dolor  sit  amet  \\t \\n ') (set : '\\t \\n') \n");
    printf("return value of ft_strtrim function === %s\n", ft_strtrim("  \n  \t  lorem  ipsum  dolor  sit  amet  \t \n ", "\t \n"));
    printf("\nTEST 4 = (s1 : 'tidolardolarti') (set : 'i t') \n");
    printf("return value of ft_strtrim function === %s\n", ft_strtrim("tidolardolarti", "i t"));
    printf("\n|*|---------------------------|*|\n\n");

    printf("**+-------- TEST FT_SPLIT FUNCTION --------+**\n");
    printf("\nTEST 1 = (s : '   hello   world    again   ') (c : ' ')\n");
    char *ss = "   hello   world    again   ";
    char **sss = ft_split(ss, ' ');
    for (int i = 0; sss[i] != NULL; i++) {
        printf("|%s|\n", sss[i]);
    }
    printf("\nTEST 2 = (s : '--1-2--3---4----5-----42') (c : '-')\n");
    char *ss1 = "--1-2--3---4----5-----42";
    char **sss1 = ft_split(ss1, '-');
    for (int i = 0; sss1[i] != NULL; i++) {
        printf("|%s|\n", sss1[i]);
    }
    printf("\nTEST 3 = (s : '           ') (c : ' ')\n");
    char *ss3 = "           ";
    char **sss3 = ft_split(ss3, ' ');
    for (int i = 0; sss3[i] != NULL; i++) {
        printf("|%s|\n", sss3[i]);
    }
    printf("\nTEST 4 = (s : 'Tripouille') (c : ' ')\n");
    char *ss45 = ft_strdup("Tripouille");
    char **sss45 = ft_split(ss45, ' ');
    for (int i = 0; sss45[i] != NULL; i++) {
        printf("|%s|\n", sss45[i]);
    }
    printf("\nTEST 5 = (s : '  fir for far    inds  ') (c : ' ')\n");
    int i = -1;
    char **test = ft_split("  fir for far    inds  ", ' ');
    while (test[++i] != NULL)
        printf("return value of ft_split : |%s|\n", test[i]);
    printf("\n|*|---------------------------|*|\n\n");

    printf("**+-------- TEST FT_ITOA FUNCTION --------+**\n");
    printf("\nTEST 1 = n : 0\n");
    printf("return value of ft_itoa function ===  %s\n", ft_itoa(0));
    printf("\nTEST 2 = n : 5\n");
    printf("return value of ft_itoa function ===  %s\n", ft_itoa(5));
    printf("\nTEST 3 = n : 987654321\n");
    printf("return value of ft_itoa function ===  %s\n", ft_itoa(987654321));
    printf("\nTEST 4 = n : -123456789\n");
	printf("return value of ft_itoa function ===  %s\n", ft_itoa(-123456789));
    printf("\n|*|---------------------------|*|\n\n");

    printf("**+-------- TEST FT_STRMAPI FUNCTION --------+**\n");
    char str05[] = "abc";
    char *str055;
    str055 = ft_strmapi(str05, mapi);
    printf("%s\n", str055);
    printf("\n|*|---------------------------|*|\n\n");

    printf("**+-------- TEST FT_STRITERI FUNCTION --------+**\n");
    char st05[] = "abc";
    ft_striteri(st05, &iteri);
    printf("%s\n", st05);
    printf("\n|*|---------------------------|*|\n\n");

    int fd = open("fd.txt", O_WRONLY | O_CREAT, 0777);
    printf("**+-------- TEST FT_PUTCHAR_FD FUNCTION --------+**\n");
    printf("#### GO TO THE FILE DESCRIPTOR ####");
    ft_putendl_fd("FT_PUTCHRA_FD FUNCTION", fd);
    ft_putchar_fd('d', fd);
    ft_putchar_fd('\n', fd);
	ft_putchar_fd('@', fd);
    ft_putchar_fd('\n', fd);
	ft_putchar_fd('\%', fd);
    ft_putchar_fd('\n', fd);
	ft_putchar_fd('$', fd);
    ft_putchar_fd('\n', fd);
	ft_putchar_fd('\\', fd);
    ft_putchar_fd('\n', fd);
    ft_putchar_fd('1', fd);
    ft_putchar_fd('\n', fd);
    printf("\n|*|---------------------------|*|\n\n");

    printf("**+-------- TEST FT_PUTSTR_FD FUNCTION --------+**\n");
    printf("#### GO TO THE FILE DESCRIPTOR ####");
    ft_putendl_fd("FT_PUTSTR_FD FUNCTION", fd);
    ft_putstr_fd("hello world !\n", fd);
    ft_putchar_fd('\n', fd);
	ft_putstr_fd("23456789", fd);
    ft_putchar_fd('\n', fd);
	ft_putstr_fd("", fd);
    ft_putchar_fd('\n', fd);
    printf("\n|*|---------------------------|*|\n\n");

    printf("**+-------- TEST FT_PUTENDL_FD FUNCTION --------+**\n");
    printf("#### GO TO THE FILE DESCRIPTOR ####");
    ft_putendl_fd("FT_PUTENDL_FD FUNCTION", fd);
	ft_putendl_fd("abcdef", fd);
    ft_putchar_fd('\n', fd);
	ft_putendl_fd("", fd);
    ft_putchar_fd('\n', fd);
    printf("\n|*|---------------------------|*|\n\n");

    printf("**+-------- TEST FT_PUTNBR_FD FUNCTION --------+**\n");
    printf("#### GO TO THE FILE DESCRIPTOR ####");
    ft_putendl_fd("FT_PUTNBR_FD FUNCTION", fd);
	ft_putnbr_fd(123456789, fd);
    ft_putchar_fd('\n', fd);
	ft_putnbr_fd(1, fd);
    ft_putchar_fd('\n', fd);
	ft_putnbr_fd(-123456789, fd);
    ft_putchar_fd('\n', fd);
	ft_putnbr_fd(-1, fd);
    ft_putchar_fd('\n', fd);
	ft_putnbr_fd(0, fd);
    ft_putchar_fd('\n', fd);
	ft_putnbr_fd(-0, fd);
    ft_putchar_fd('\n', fd);
	ft_putnbr_fd((int)2147483648, fd);
    ft_putchar_fd('\n', fd);
	ft_putnbr_fd((int)2147483649, fd);
    ft_putchar_fd('\n', fd);
	ft_putnbr_fd((int)-2147483648, fd);
    ft_putchar_fd('\n', fd);
	ft_putnbr_fd((int)-2147483649, fd);
    ft_putchar_fd('\n', fd);
	ft_putnbr_fd(-0, fd);
    printf("\n|*|---------------------------|*|\n\n");
    close(fd);

    printf("\n##############################################################\n\n");
    printf("\n  La différence entre MEMMOVE() et MEMCPY() :\n");
    printf("\nTEST MEMMOVE()<>str7852435[] = 'abcdefghljk'<>(src: '&str78524[0]') (dst: '&str78524[2]') (len : 9)\n");
    printf("str785245[] = 'abcdefghljk'\n");
    char str785245[] = "abcdefghljk";
    printf("%s\n", ft_memmove(&str785245[2],&str785245[0],9));
    printf("\nTEST MEMCPY() = (src: '&str78524[0]') (dst: '&str78524[2]') (len : 9)\n");
    printf("str7852435[] = 'abcdefghljk'\n");
    char str7852435[] = "abcdefghljk";
    printf("%s\n", ft_memcpy(&str7852435[2],&str7852435[0],9));

    printf("\n---------------------------\n");

    printf("\n  La différence entre STRNCMP () et MEMCMP () :\n");
    printf("\nTEST 1 : s1:(aa[]) s2:(bb[]) n: 10\n");
    printf("aa[] = {'E','n','g','l','i','s','h',0,'A'}\nbb[] = {'E','n','g','l','i','s','h',0,'B'}\n");
    char aa[10] = {'E','n','g','l','i','s','h',0,'A'};
    char bb[10] = {'E','n','g','l','i','s','h',0,'B'};
    printf("return valus of ft_strncmp function === %d\n", ft_strncmp(aa, bb, 10));
    printf("return valus of strncmp function === %d\n", strncmp(aa, bb, 10));
    printf("return valus of ft_memcmp function === %d\n", ft_memcmp(aa, bb, 10));
    printf("return valus of memcmp function === %d\n", memcmp(aa, bb, 10));
    printf("\n##############################################################\n\n");





    return 0;
}