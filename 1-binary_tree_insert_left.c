#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node.
 * @parent: Pointer to the node to insert the left-child in.
 * @value: Value to store in the new node.
 *
 * Return: A pointer to the created node, or NULL on failure.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nu_nod, *left;

	nu_nod = binary_tree_node(parent, value);

	if (!parent)
		return (NULL);

	if (!nu_nod)
		return (NULL);

	left = parent->left;

	if (left)
	{
		nu_nod->left = left;
		left->parent = nu_nod;
	}

	parent->left = nu_nod;

	return (nu_nod);
}
