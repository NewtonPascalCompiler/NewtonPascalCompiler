#include "analyze.h"

/*void traverse(TreeNode * t,void (* preProc) (TreeNode *),void (* postPorc) (TreeNode *))
{
	if(t!=NULL)
	{
		preProc(t);
		{
			int i;
			for(i=0; i<MAXCHILDREN; i++)
				traverse(t->child[i], preProc, postProc);
		}
		postProc(t);
		traverse(t->sibling, preProc, postProc)i;
	}
}
*/

void nullProc(TreeNode * t)
{
	if(t==NULL)
		return ;
	else
		return;
}


