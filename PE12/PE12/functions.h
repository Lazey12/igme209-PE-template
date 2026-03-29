#pragma once
#include <memory>
#include "Level.h"

void UseNormalPointer();

std::shared_ptr<Level> CreateSharedPointer();

std::unique_ptr<Level> CreateUniquePointer();

void UseSmartPointers();