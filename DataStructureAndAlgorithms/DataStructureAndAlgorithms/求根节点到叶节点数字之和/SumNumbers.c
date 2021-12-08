//
//  SumNumbers.c
//  DataStructureAndAlgorithms
//
//  Created by xiatian on 2021/12/8.
//

#include "SumNumbers.h"
#include <mm_malloc.h>

int sum(struct TreeNode *node,int num);


int sumNumbers(struct TreeNode* root) {
    int result = sum(root, 0);
    return result;
}

struct TreeNode *createTreeNode(int val) {
    struct TreeNode *node = malloc(sizeof(struct TreeNode));
    node->val = val;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void freeNode(struct TreeNode *node) {
    if (node->left == NULL) {
        if (node->right == NULL) {
            
        }else {
            freeNode(node->right);
        }
    }else {
        if (node->right == NULL) {
            freeNode(node->left);
        }else {
            freeNode(node->left);
            freeNode(node->right);
        }
    }
    free(node);
}

int sum(struct TreeNode *node,int num){
    int left = 0;
    int right = 0;
    
    if (node->left == NULL) {
        if (node->right == NULL) {
            return num * 10 + node->val;
        }else {
            return sum(node->right, num * 10 + node->val);
        }
    }else {
        if (node->right == NULL) {
            return sum(node->left, num * 10 + node->val);
        }else {
            left = sum(node->left, num * 10 + node->val);
            right = sum(node->right, num * 10 + node->val);
        }
    }
    
    int sum = left + right;
    return sum;
}
