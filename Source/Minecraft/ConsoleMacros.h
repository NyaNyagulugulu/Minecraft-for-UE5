// ConsoleMacros.h - 用于解决委托声明的辅助头文件

#pragma once

#include "CoreMinimal.h"
#include "UObject/ScriptDelegate.h"
#include "UObject/WeakObjectPtr.h"
#include "UObject/WeakObjectPtrTemplates.h"

// 确保委托声明宏可用
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNewLogMessage, const FString&, LogMessage);