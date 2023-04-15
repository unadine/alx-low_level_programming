#include "main.h"
#include <stdio.h>
#include <string.h>
#define RIGHT_SIDE 1
#define TRUE (1 == 1)
#define FALSE !TRUE
#define MATCH 1

/**
 * movePointer - move pointer to 's' in 'dir' seeking 'match'
 * @s1: check point to stop in rare circumstances
 * @s2: input string to move pointer from
 * @s: s to find next match or find first non-match of
 * @dir: dir to move pointer
 *     forward (d = RIGHT_SIDE) or backwards (d = -1)
 * @match: find first match (m = MATCH) or non-match of c (m = 0)
 * Return: pointer to match in input string
 */
char *movePointer(char *s1, char *s2, char s, int dir, int match)
{
	if (s1 == s2
	    || (match == MATCH && *s2 == s)
	    || (match == 0 && *s2 != s))
		return (s2);
	return (movePointer(s1,
		       (dir == RIGHT_SIDE ? s2 + 1 : s2 - 1),
		       s,
		       dir,
		       match));
}
/**
 * wildcmp - checks is strings could be identical considering * wildcard
 * @s1: first string
 * @s2: second string
 * Return: boolean
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (TRUE);
	if (*s2 == '*')
	{
		s2 = movePointer(s1, s2, '*', RIGHT_SIDE, 0);
		if (*s2 == '\0')
			return (TRUE);
		if (*s1 == '\0')
			return (FALSE);
		if (wildcmp(movePointer(s1,
				   movePointer(s2, s1, '\0', RIGHT_SIDE, MATCH),
				   *s2,
				   -1,
				   MATCH),
			    s2) == TRUE)
			return (TRUE);
	}
	if (*s1 != *s2)
		return (FALSE);
	return (wildcmp(s1 + 1, s2 + 1));
}
