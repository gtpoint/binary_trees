#include "binary_trees.h"

/**
 * binary_tree_leaves - this function that Counts the leaves in a binary tree.
 * @tree: A pointer to the root node of the tree to count the leaves of.
 *
 * Return: The number of leaves in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leafs = 0;

	if (tree)
	{
		leafs += (!tree->left && !tree->right) ? 1 : 0;
		leafs += binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	}
	return (leafs);
}
