#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: A pointer to the root node of the tree to count the number of leaves.
 * Return: 0 if tree is NULL, elsee return number of leaves in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_left = 0, leaves_right = 0, tree_leaves = 0;

	if (tree == NULL)
		return (0);

	leaves_left = binary_tree_leaves(tree->left);
	leaves_right = binary_tree_leaves(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		tree_leaves = 1;

	tree_leaves += leaves_left + leaves_right;

	return (tree_leaves);
}
