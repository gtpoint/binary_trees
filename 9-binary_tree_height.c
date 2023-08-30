#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
  size_t l_size = 0, r_size = 0;
  
  if (tree == NULL)
    return (0);

  l_size = binary_tree_height(tree->left) ? l_size++ : 0;
  r_size = binary_tree_height(tree->right) ? r_size++ : 0;
  return ((l_size > r_size) ? l_size : r_size);
}
