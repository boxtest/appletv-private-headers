/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FactoryTest.framework/FactoryTest
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface Processes : NSObject {
	NSMutableDictionary *_processes;	// 4 = 0x4
}
- (id)init;	// 0x343e1825
- (void)dealloc;	// 0x343e17d9
- (id)getCachedProcesses;	// 0x343e1b7d
- (void)prettyPrintToLog;	// 0x343e1b8d
- (id)refreshProcesses;	// 0x343e1879
- (id)taskInfoForPID:(int)pid;	// 0x343e133d
- (id)threadInfoForPort:(unsigned)port withUsageAccumulator:(double *)usageAccumulator;	// 0x343e158d
@end

