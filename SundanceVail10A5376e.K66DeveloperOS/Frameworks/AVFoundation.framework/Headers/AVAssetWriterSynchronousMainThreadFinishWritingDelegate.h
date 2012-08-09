/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"
#import "AVAssetWriterFinishWritingHelperDelegate.h"


@interface AVAssetWriterSynchronousMainThreadFinishWritingDelegate : NSObject <AVAssetWriterFinishWritingHelperDelegate> {
}
- (void)finishWritingHelper:(id)helper didInitiateFinishWritingForFigAssetWriter:(OpaqueFigAssetWriter *)figAssetWriter;	// 0x368bbba5
- (void)finishWritingHelperDidCancelFinishWriting:(id)finishWritingHelper;	// 0x368bbc1d
- (void)finishWritingHelperDidFail:(id)finishWritingHelper;	// 0x368bbc21
- (BOOL)shouldHelperPrepareInputs;	// 0x368bbc25
@end
