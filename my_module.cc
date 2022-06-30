#include "my_module.h"


snort::MyModule::MyModule() : Module(MY_NAME, MY_HELP)
{
}

snort::MyModule::~MyModule(){}
//static const RuleMap My_rules[] =
//{
//    { 0, nullptr }
//};

/*const RuleMap* MyModule::get_rules() const
{
    return My_rules;
}

const PegInfo* MyModule::get_pegs() const
{
    return my_peg_names;
}

PegCount* MyModule::get_counts() const
{ 
    return (PegCount*)&mystats; 
}

ProfileStats* MyModule::get_profile() const
{
    return &myPerfStats; 
}
*/

