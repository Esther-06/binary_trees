#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree
 *
 *@tree: pointer to tree
 *
 *Return: depth, 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree);
{
	if (!tree)
		return(0);
	else
	{
		size_t 1_Depth = 0;

		if(tree->parent)
		{
			1_Depth = 1 + binary_tree_depth(tree->parent);
		}
		else
			1_Depth = 0;
		return (1_Depth);
	}
}
