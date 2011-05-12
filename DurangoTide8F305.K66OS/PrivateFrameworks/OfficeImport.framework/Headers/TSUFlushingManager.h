/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSCondition, TSUMemoryWatcher, NSThread, TSURetainedPointerKeyDictionary, TSUPointerKeyDictionary;
@protocol TSUFlushable;

__attribute__((visibility("hidden")))
@interface TSUFlushingManager : NSObject {
@private
	TSURetainedPointerKeyDictionary *_objects;	// 4 = 0x4
	set<TSUFlushableObjectInfo*,TSUFlushableObjectInfoPointerFlushingOrderLess,std::allocator<TSUFlushableObjectInfo*> > *_sortedObjects;	// 8 = 0x8
	set<TSUFlushableObjectInfo*,TSUFlushableObjectInfoPointerTimeStampLess,std::allocator<TSUFlushableObjectInfo*> > *_sortedNewObjects;	// 12 = 0xc
	TSUPointerKeyDictionary *_inactiveObjects;	// 16 = 0x10
	unsigned _clock;	// 20 = 0x14
	BOOL _alwaysFlushing;	// 24 = 0x18
	BOOL _stopFlushing;	// 25 = 0x19
	BOOL _isFlushing;	// 26 = 0x1a
	id<TSUFlushable> _flushingObject;	// 28 = 0x1c
	BOOL _isWaitingForFlush;	// 32 = 0x20
	NSCondition *_cond;	// 36 = 0x24
	NSCondition *_isFlushingCond;	// 40 = 0x28
	TSUMemoryWatcher *_memoryWatcher;	// 44 = 0x2c
	NSThread *_bgThread;	// 48 = 0x30
}
+ (id)_singletonAlloc;	// 0x344bc0b5
+ (id)allocWithZone:(NSZone *)zone;	// 0x3464405d
+ (id)sharedManager;	// 0x343a4c75
- (id)init;	// 0x344bc0e1
- (void)_backgroundThread:(id)thread;	// 0x346444bd
- (void)_didUseObject:(id)object;	// 0x34643631
- (void)_startFlushingObjects;	// 0x3464389d
- (void)_stopFlushingObjects;	// 0x34643751
- (void)addObject:(id)object;	// 0x343aa649
- (void)advanceClock;	// 0x343aa82d
- (id)autorelease;	// 0x34643629
- (BOOL)controlsActiveObject:(id)object;	// 0x34643729
- (BOOL)controlsInactiveObject:(id)object;	// 0x34643701
- (id)copyWithZone:(NSZone *)zone;	// 0x3464362d
- (void)dealloc;	// 0x346440d9
- (void)doneWithObject:(id)object;	// 0x34643d61
- (TSUFlushableObjectInfo *)eraseInfoForObject:(id)object;	// 0x343a4f89
- (void)insertObjectInfo:(TSUFlushableObjectInfo *)info;	// 0x346449c9
- (BOOL)isNewObject:(TSUFlushableObjectInfo *)object;	// 0x343be351
- (void)memoryLevelDecreased:(int)decreased was:(int)was;	// 0x34644779
- (void)memoryLevelIncreased:(int)increased was:(int)was;	// 0x346448a1
- (void)protectObject:(id)object;	// 0x34643f81
- (void)release;	// 0x34643625
- (void)removeObject:(id)object;	// 0x343a4db1
- (id)retain;	// 0x34643619
- (unsigned)retainCount;	// 0x3464361d
- (void)safeToFlush:(id)flush wasAccessed:(BOOL)accessed;	// 0x346439bd
- (void)stopProtectingObject:(id)object;	// 0x34643e3d
- (void)transferNewObjects;	// 0x343aa851
- (void)unsafeToFlush:(id)flush;	// 0x34643b3d
@end
