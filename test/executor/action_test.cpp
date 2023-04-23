#include <ActionNode.h>
#include <gtest/gtest.h>

using namespace BehaviourTree;

TEST(RegisterTest, Functions)
{

    auto function1 = [](int a)
    {
        std::cout << "action2: " << a << '\n';
        return true;
    };
    ActionNodePtr action = std::make_shared<ActionNode>();

    EXPECT_EQ(1, action->registerAction(function1, 2));
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}