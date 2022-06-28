#ifdef MY_MODULE_H
#define MY_MODULE_H

// Interface

#include "framework/module.h"

#define GID_MY     555

#define MY_NAME    "myname module"
#define MY_HELP    "myname inspection"

extern THREAD_LOCAL snort::ProfileStats myPerfStats;


class MyModule : public snort::module
{
    MyModule();
    ~MyModule() override;

    unsigned get_gid() const override
    {
        return GID_MY;
    } 

    //const snort::RuleMap* get_rules() const override;
    //const PegInfo* get_pegs() const override;
   // PegCount* get_counts() const override;
    //snort::ProfileStats* get_profile() const override;
    
    Usage get_usage() const override
    {
        return INSPECT;
    }

    bool is_bindable() const override
    {
        return true;
    }
};

#endif
