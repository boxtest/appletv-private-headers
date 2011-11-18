/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "Symbolication-Structs.h"


@protocol SafeVMUProcInfoProtocol
+ (id)getProcessIds;
+ (BOOL)isProcessRunning:(int)running;
+ (int)processParentId:(int)anId;
- (id)arguments;
- (int)compare:(id)compare;
- (int)compareByName:(id)name;
- (int)cpuType;
- (id)description;
- (id)firstArgument;
- (unsigned)hash;
- (BOOL)isApp;
- (BOOL)isCFM;
- (BOOL)isEqual:(id)equal;
- (BOOL)isMachO;
- (BOOL)isNative;
- (BOOL)isRunning;
- (id)name;
- (int)pid;
- (int)ppid;
- (id)procTableName;
- (id)realAppName;
- (id)requestedAppName;
- (timeval)startTime;
- (unsigned)task;
- (id)userAppName;
@end

