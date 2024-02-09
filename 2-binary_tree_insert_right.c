#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the
 *			right-child of another node.
 * @parent: Pointer to the node to insert the right-child in.
 * @value: Value to store in the new node.
 *
 * Return: Pointer to created node, otherwise NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *temp_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL || parent == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		temp_node = parent->right;
		parent->right = new_node;
		new_node->right = temp_node;
	}
	else
	{
		parent->right = new_node;
	}

	return (new_node);
}
