#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) {
        val = value;
        left = nullptr;
        right = nullptr;
    }
};

class Solution {
private:
    // Builds child-to-parent links so fire
    // can also spread upward.
    void buildParentTrack(
        TreeNode* root,
        unordered_map<TreeNode*, TreeNode*>& parentTrack
    ) {
        queue<TreeNode*> nodesQueue;
        nodesQueue.push(root);

        // The root has no parent, so nullptr
        // marks the end of upward movement.
        parentTrack[root] = nullptr;

        while (!nodesQueue.empty()) {
            TreeNode* node =
                nodesQueue.front();

            nodesQueue.pop();

            if (node->left != nullptr) {
                parentTrack[node->left] = node;
                nodesQueue.push(node->left);
            }

            if (node->right != nullptr) {
                parentTrack[node->right] = node;
                nodesQueue.push(node->right);
            }
        }
    }

public:
    // Simulates the fire using left,
    // right, and parent connections.
    int minTime(
        TreeNode* root,
        TreeNode* target
    ) {
        if (root == nullptr) {
            return 0;
        }

        unordered_map<TreeNode*, TreeNode*> parentTrack;

        buildParentTrack(
            root,
            parentTrack
        );

        queue<TreeNode*> nodesQueue;
        unordered_set<TreeNode*> burned;

        nodesQueue.push(target);
        burned.insert(target);

        int time = 0;

        while (!nodesQueue.empty()) {
            int levelSize =
                nodesQueue.size();

            // spread tells whether fire moved
            // to at least one new node.
            bool spread = false;

            // levelSize represents all nodes
            // burning during the current second.
            for (int i = 0; i < levelSize; i++) {
                TreeNode* node =
                    nodesQueue.front();

                nodesQueue.pop();

                if (
                    node->left != nullptr &&
                    burned.find(node->left) == burned.end()
                ) {
                    burned.insert(node->left);
                    nodesQueue.push(node->left);
                    spread = true;
                }

                if (
                    node->right != nullptr &&
                    burned.find(node->right) == burned.end()
                ) {
                    burned.insert(node->right);
                    nodesQueue.push(node->right);
                    spread = true;
                }

                TreeNode* parent =
                    parentTrack[node];

                // parentTrack supplies the upward
                // connection missing from the tree.
                if (
                    parent != nullptr &&
                    burned.find(parent) == burned.end()
                ) {
                    burned.insert(parent);
                    nodesQueue.push(parent);
                    spread = true;
                }
            }

            // One second is counted only if
            // at least one new node burns.
            if (spread) {
                time++;
            }
        }

        return time;
    }
};

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);

    TreeNode* target = root->left;

    Solution solution;

    cout << solution.minTime(root, target) << endl;

    return 0;
}