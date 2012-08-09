/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVPlayer.h"
#import "AVFoundation-Structs.h"

@class AVQueuePlayerInternal;

@interface AVQueuePlayer : AVPlayer {
	AVQueuePlayerInternal *_queuePlayer;	// 8 = 0x8
}
+ (void)initialize;	// 0x32672855
+ (id)playerWithPlayerItem:(id)playerItem;	// 0x326728ed
+ (id)playerWithURL:(id)url;	// 0x32672931
+ (id)queuePlayerWithItems:(id)items;	// 0x326728a5
- (id)init;	// 0x32672975
- (id)initWithItems:(id)items;	// 0x32672a09
- (int)_defaultActionAtItemEnd;	// 0x32672b41
- (void)_enqueueModification:(id)modification;	// 0x32672c39
- (BOOL)_shouldEnqueueModifications;	// 0x32672c11
- (void)advanceToNextItem;	// 0x32672b85
- (void)beginModifications;	// 0x32672fd5
- (BOOL)canInsertItem:(id)item afterItem:(id)item2;	// 0x32672bb5
- (void)commitModifications;	// 0x32672ff9
- (void)dealloc;	// 0x32672ad9
- (void)insertItem:(id)item afterItem:(id)item2;	// 0x32672cdd
- (id)items;	// 0x32672b75
- (void)removeAllItems;	// 0x32672f2d
- (void)removeItem:(id)item;	// 0x32672e15
- (void)setActionAtItemEnd:(int)itemEnd;	// 0x32672b45
@end
