#include "binary_tree.h"

/**
 * binary_tree_insert_left - insert a node as the left-child
 * 
 * @parent: pointer to the parent
 * @value: value 
 *
 * Return: return pointer to the created node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if(parent == NULL)
	return (NULL);
	
	new = calloc(1,sizeof(binary_tree_t));

	if (!new)
		return (NULL);
	new->left = NULL;
	new->right = NULL;
	new->n = value;
	if (!parent->left)
	{
		parent->left = new;
		new->parent = parent;
	}
	else
	{
		temp = parent->left;
		parent->left = new;
		new->parent = parent;
		new->left = temp;
		temp->parent = new;
	}
	return (new);
}
