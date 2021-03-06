/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import </libobjc.A.h>

@class TSUPointerKeyDictionary, TSURetainedPointerKeyDictionary, NSThread, NSCondition, TSUMemoryWatcher;
@protocol TSUFlushable;

@interface TSUFlushingManager : NSObject {
	TSURetainedPointerKeyDictionary *_objects;	// 4 = 0x4
	set<TSUFlushableObjectInfo *, TSUFlushableObjectInfoPointerFlushingOrderLess, std::__1::allocator<TSUFlushableObjectInfo *> > *_sortedObjects;	// 8 = 0x8
	set<TSUFlushableObjectInfo *, TSUFlushableObjectInfoPointerTimeStampLess, std::__1::allocator<TSUFlushableObjectInfo *> > *_sortedNewObjects;	// 12 = 0xc
	TSUPointerKeyDictionary *_inactiveObjects;	// 16 = 0x10
	unsigned long _clock;	// 20 = 0x14
	BOOL _alwaysFlushing;	// 24 = 0x18
	BOOL _stopFlushing;	// 25 = 0x19
	BOOL _stopFlushingWhenQueueEmpty;	// 26 = 0x1a
	BOOL _isFlushing;	// 27 = 0x1b
	id<TSUFlushable> _flushingObject;	// 28 = 0x1c
	NSCondition *_cond;	// 32 = 0x20
	NSCondition *_isFlushingCond;	// 36 = 0x24
	TSUMemoryWatcher *_memoryWatcher;	// 40 = 0x28
	NSThread *_bgThread;	// 44 = 0x2c
	unsigned _backgroundTransitionTaskId;	// 48 = 0x30
	unsigned _activeBgThreadTask;	// 52 = 0x34
}
+ (id)_singletonAlloc;	// 0x3179c2a5
+ (id)allocWithZone:(NSZone *)zone;	// 0x31970735
+ (id)sharedManager;	// 0x3179c121
- (id)init;	// 0x3179c2d5
- (void)_backgroundThread:(id)thread;	// 0x31971805
- (void)_bgTaskFinished;	// 0x31971f25
- (void)_bgTaskStarted;	// 0x31971d51
- (void)_bgThreadActive;	// 0x31972025
- (void)_bgThreadInactive;	// 0x319721f9
- (void)_didUseObject:(id)object;	// 0x31971c61
- (void)_flushAllEligible;	// 0x319714cd
- (void)_startFlushingObjects;	// 0x319715e1
- (void)_stopFlushingObjects;	// 0x319716a9
- (void)addObject:(id)object;	// 0x317a0739
- (void)advanceClock;	// 0x317a099d
- (id)autorelease;	// 0x319707c1
- (BOOL)controlsActiveObject:(id)object;	// 0x31971c09
- (BOOL)controlsInactiveObject:(id)object;	// 0x31971c35
- (id)copyWithZone:(NSZone *)zone;	// 0x319707c5
- (void)dealloc;	// 0x319707c9
- (void)didEnterBackground;	// 0x319712a1
- (void)didReceiveMemoryWarning;	// 0x319712b5
- (void)doneWithObject:(id)object;	// 0x31970d5d
- (TSUFlushableObjectInfo *)eraseInfoForObject:(id)object;	// 0x3179c8a9
- (void)insertObjectInfo:(TSUFlushableObjectInfo *)info;	// 0x31971b3d
- (BOOL)isNewObject:(TSUFlushableObjectInfo *)object;	// 0x317a5529
- (void)memoryLevelDecreased:(int)decreased was:(int)was;	// 0x319713fd
- (void)memoryLevelIncreased:(int)increased was:(int)was;	// 0x3197132d
- (void)protectObject:(id)object;	// 0x31970ae9
- (oneway void)release;	// 0x319707bd
- (void)removeObject:(id)object;	// 0x3179c6a9
- (id)retain;	// 0x319707b1
- (unsigned)retainCount;	// 0x319707b5
- (void)safeToFlush:(id)flush wasAccessed:(BOOL)accessed;	// 0x319710c9
- (void)stopProtectingObject:(id)object;	// 0x31970be5
- (void)transferNewObjects;	// 0x317a09c1
- (void)unsafeToFlush:(id)flush;	// 0x31970e59
- (void)willEnterForeground;	// 0x319712b1
@end

