#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 * Return: 0 if tree is NULL, else return height of node.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_nod = 0, right_nod = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_nod = 1 + binary_tree_height(tree->left);

	if (tree->right)
		right_nod = 1 + binary_tree_height(tree->right);

	if (left_nod > right_nod)
		return (left_nod);
	else
		return (right_nod);
}
