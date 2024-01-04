#include "binary_trees.h"

/**
 * tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size.
 *
 * Return: 0 if tree is NULL, else size of the tree.
 */
size_t tree_size(const binary_tree_t *tree)
{
	size_t btree_size = 0;

	if (tree != NULL)
	{
		btree_size = tree_size(tree->left) + tree_size(tree->right) + 1;
	}

	return (btree_size);
}
