/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "SSPurchaseRequestDelegate.h"
#import "MediaPlayer-Structs.h"

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface MPCloudPurchaseRequest : NSObject <SSPurchaseRequestDelegate> {
	NSArray *_mediaItems;	// 4 = 0x4
	dispatch_queue_s *_requestsQueue;	// 8 = 0x8
	NSMutableDictionary *_requestsByMediaItemPID;	// 12 = 0xc
	NSMutableArray *_waitingRequests;	// 16 = 0x10
	NSMutableArray *_servicedRequests;	// 20 = 0x14
	int _purchaseReason;	// 24 = 0x18
	BOOL _purchaseReasonIdenticalForAll;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSArray *mediaItems;	// G=0x31a7d87d; @synthesize=_mediaItems
@property(readonly, assign, nonatomic) int purchaseReason;	// G=0x31a7d88d; @synthesize=_purchaseReason
- (id)initWithMediaItem:(id)mediaItem purchaseReason:(int)reason;	// 0x31a7bfb9
- (id)initWithMediaItems:(id)mediaItems;	// 0x31a7bff9
- (id)_initWithMediaItems:(id)mediaItems purchaseReason:(int)reason;	// 0x31a7c00d
- (id)_purchaseForMediaItem:(id)mediaItem;	// 0x31a7d579
- (BOOL)_shouldCancelRemainingRequestForError:(id)error;	// 0x31a7c399
- (void)dealloc;	// 0x31a7c2dd
// declared property getter: - (id)mediaItems;	// 0x31a7d87d
- (void)prioritizeMediaItem:(id)item forPlayback:(BOOL)playback purchaseCompletionHandler:(id)handler;	// 0x31a7d1d9
// declared property getter: - (int)purchaseReason;	// 0x31a7d88d
- (int)purchaseReasonForMediaItemPersistentID:(id)mediaItemPersistentID;	// 0x31a7d5e9
- (void)runOnQueue:(dispatch_queue_s *)queue withCompletionHandler:(id)completionHandler;	// 0x31a7c3e1
- (void)setDownloadHandler:(id)handler forMediaItem:(id)mediaItem;	// 0x31a7d721
@end
