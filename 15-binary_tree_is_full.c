#include "binary_trees.h"

/**
 * binary_tree_is_full - this function that Checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If tree is NULL or is not full - 0.
 *         Otherwise - 1.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

  if (tree->left == NULL && tree->right == NULL)
        return (0);

  if ((tree->left) && (tree->right))
        return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

  return (1);
}
