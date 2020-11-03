/* this program is to explain the fibonnaci 
 * series program ....
*  1 2 3 5 8 13 21
 */
#include <stdio.h>

int main()
{
	int old_num =1,cur_num =1,next_num ;
	
	while (cur_num <100)
	{
		printf("%d\n",cur_num);
		next_num = cur_num + old_num;
		old_num = cur_num;
		cur_num = next_num;
	}
	return (0);
}
