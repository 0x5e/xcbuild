// Copyright 2013-present Facebook. All Rights Reserved.

#include <pbxspec/XC/ToolSpecificationCompilationDatabaseGenerator.h>

using pbxspec::XC::ToolSpecificationCompilationDatabaseGenerator;

ToolSpecificationCompilationDatabaseGenerator::ToolSpecificationCompilationDatabaseGenerator(bool isDefault) :
    Tool(isDefault, ISA::XCToolSpecificationCompilationDatabaseGenerator)
{
}