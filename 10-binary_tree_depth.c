#include "binary_trees.h"

/**
 * binary_tree_depth - this function that Measures
                      the depth of a node in a binary tree.
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: If tree is NULL - 0
          otherwise - return the depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
  if (tree){
    return (tree->parent ? 1 + binary_tree_depth(tree->parent) : 0);
  }
}
