/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRBackgroundTask.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVRedDotCachingTask : BRBackgroundTask {
	NSMutableArray *_fetchKeys;	// 44 = 0x2c
	BOOL _isCancelled;	// 48 = 0x30
	BOOL _isRunning;	// 49 = 0x31
	NSMutableArray *_favorites;	// 52 = 0x34
}
@property(retain) NSMutableArray *favorites;	// G=0x3b1c75; S=0x3b1c89; @synthesize=_favorites
@property(retain) NSMutableArray *fetchKeys;	// G=0x3b1bf1; S=0x3b1c05; @synthesize=_fetchKeys
@property(assign) BOOL isCancelled;	// G=0x3b1c15; S=0x3b1c2d; @synthesize=_isCancelled
@property(assign) BOOL isRunning;	// G=0x3b1c45; S=0x3b1c5d; @synthesize=_isRunning
+ (void)startPeriodicUpdateTaskIfNeeded;	// 0x3b1b35
- (id)initWithInterval:(double)interval delay:(double)delay userInfo:(id)info taskType:(int)type;	// 0x3b1521
- (void).cxx_destruct;	// 0x3b1c99
- (void)_fetchStoreFavorites;	// 0x3b1639
- (void)_finish;	// 0x3b1ab5
- (void)_processFavorites;	// 0x3b17e1
// declared property getter: - (id)favorites;	// 0x3b1c75
// declared property getter: - (id)fetchKeys;	// 0x3b1bf1
// declared property getter: - (BOOL)isCancelled;	// 0x3b1c15
// declared property getter: - (BOOL)isRunning;	// 0x3b1c45
- (BOOL)perform:(id)perform;	// 0x3b15a5
// declared property setter: - (void)setFavorites:(id)favorites;	// 0x3b1c89
// declared property setter: - (void)setFetchKeys:(id)keys;	// 0x3b1c05
// declared property setter: - (void)setIsCancelled:(BOOL)cancelled;	// 0x3b1c2d
// declared property setter: - (void)setIsRunning:(BOOL)running;	// 0x3b1c5d
- (void)stop;	// 0x3b1601
@end

