#include <stdio.h>

#define ABS(a) ((a)<0?-(a):a)

/*
 * FIXME
 *
 * Still haven't solved this.
 *
 * http://groups-beta.google.com/group/comp.lang.c/browse_thread/thread/355864013e23345d/638f4488098445a9
 *
 * <boris``> ABS(1,2?-1:1) == ((1,2?-1:1) < 0 ? (1,2?-1:1) : 1,2?-1:1) == ((-1) < 0 ? (-1) : 1, 2?-1:1) == -1.
 * <Baughn> sjmorgan: You know, the author is a Bastard.
 * <Baughn> sjmorgan: The author who expected a newbie to catch that was insane. It's obvious how to avoid it, though, so don't bother trying to debug it.
 */

int main() {
	printf("%d\n", ABS(0));
	return 0;
}

