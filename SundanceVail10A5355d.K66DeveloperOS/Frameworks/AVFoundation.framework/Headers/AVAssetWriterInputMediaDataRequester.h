/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class AVAssetWriterInputWritingHelper;
@protocol OS_dispatch_queue;

@interface AVAssetWriterInputMediaDataRequester : NSObject {
	AVAssetWriterInputWritingHelper *_writingHelper;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_requestQueue;	// 8 = 0x8
	id _requestBlock;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) id requestBlock;	// G=0x32688705; @synthesize=_requestBlock
@property(readonly, assign, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;	// G=0x326886f5; @synthesize=_requestQueue
- (id)init;	// 0x32688159
- (id)initWithAssetWriterInputWritingHelper:(id)assetWriterInputWritingHelper requestQueue:(id)queue requestBlock:(id)block;	// 0x32687fe5
- (void)_requestMediaDataIfReady;	// 0x32688461
- (void)dealloc;	// 0x3268817d
- (void)finalize;	// 0x326881c1
- (void)invalidate;	// 0x32688281
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x32688371
// declared property getter: - (id)requestBlock;	// 0x32688705
// declared property getter: - (id)requestQueue;	// 0x326886f5
- (void)startRequestingMediaData;	// 0x32688205
@end

