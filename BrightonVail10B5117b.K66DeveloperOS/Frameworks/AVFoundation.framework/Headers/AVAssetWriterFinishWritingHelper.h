/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVAssetWriterHelper.h"
#import "AVFoundation-Structs.h"

@class NSObject, AVWeakReference;
@protocol AVAssetWriterFinishWritingHelperDelegate, OS_dispatch_queue;

@interface AVAssetWriterFinishWritingHelper : AVAssetWriterHelper {
	id<AVAssetWriterFinishWritingHelperDelegate> _delegate;	// 12 = 0xc
	OpaqueFigAssetWriter *_figAssetWriter;	// 16 = 0x10
	NSObject<OS_dispatch_queue> *_figAssetWriterAccessQueue;	// 20 = 0x14
	AVWeakReference *_weakReferenceToSelf;	// 24 = 0x18
}
- (id)initWithConfigurationState:(id)configurationState figAssetWriter:(OpaqueFigAssetWriter *)writer delegate:(id)delegate;	// 0x3027667d
- (OpaqueFigAssetWriter *)_retainedFigAssetWriter;	// 0x30276cf1
- (void)cancelWriting;	// 0x30276a31
- (void)dealloc;	// 0x3027674d
- (void)finalize;	// 0x302767d9
- (void)finishOperationCompletedSuccessfully:(BOOL)successfully withError:(id)error;	// 0x302769ad
- (void)performFinishOperation;	// 0x30276831
- (int)status;	// 0x30276ced
@end
