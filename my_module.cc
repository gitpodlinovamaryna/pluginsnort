#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "my_module.h"

using namespace snort;

MyModule::MyModule() : Module(MY_NAME, MY_HELP)
{
}

static const RuleMap My_rules[] =
{
    { 0, nullptr }
};

const RuleMap* MyModule::get_rules() const
{
    return My_rules;
}