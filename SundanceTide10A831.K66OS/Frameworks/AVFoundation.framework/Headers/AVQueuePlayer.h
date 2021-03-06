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
+ (void)initialize;	// 0x341e6ddd
+ (id)playerWithPlayerItem:(id)playerItem;	// 0x341e6e41
+ (id)playerWithURL:(id)url;	// 0x341e6e85
+ (id)queuePlayerWithItems:(id)items;	// 0x341e6df9
- (id)init;	// 0x341e6ec9
- (id)initWithItems:(id)items;	// 0x341e6f5d
- (int)_defaultActionAtItemEnd;	// 0x341e7095
- (void)_enqueueModification:(id)modification;	// 0x341e718d
- (BOOL)_shouldEnqueueModifications;	// 0x341e7165
- (void)advanceToNextItem;	// 0x341e70d9
- (void)beginModifications;	// 0x341e74b5
- (BOOL)canInsertItem:(id)item afterItem:(id)item2;	// 0x341e7109
- (void)commitModifications;	// 0x341e74d9
- (void)dealloc;	// 0x341e702d
- (void)insertItem:(id)item afterItem:(id)item2;	// 0x341e7231
- (id)items;	// 0x341e70c9
- (void)removeAllItems;	// 0x341e740d
- (void)removeItem:(id)item;	// 0x341e732d
- (void)setActionAtItemEnd:(int)itemEnd;	// 0x341e7099
@end

