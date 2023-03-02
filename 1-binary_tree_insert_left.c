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

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	if (parent->left)
	{
		new->left = parent->left;
		parent->left->parent = new;
		parent->left = new;
		new->parent = parent;
		new->n = value;
		new->right = NULL;
	}
	else
	{
		new->parent = parent;
		new->n = value;
		new->right = NULL;
		parent->left = new;
		new->left = NULL;
	}

	return (new);
}
