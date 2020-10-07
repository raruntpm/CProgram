/* this program is to explain the fibonnaci 
 * series program ....
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
