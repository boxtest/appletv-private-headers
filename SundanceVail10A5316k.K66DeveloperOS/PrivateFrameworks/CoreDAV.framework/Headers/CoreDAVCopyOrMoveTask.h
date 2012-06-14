/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@class NSURL;

@interface CoreDAVCopyOrMoveTask : CoreDAVTask {
	int _overwrite;	// 132 = 0x84
	NSURL *_destinationURL;	// 136 = 0x88
}
@property(retain) NSURL *destinationURL;	// G=0x35f6bff9; S=0x35f6c00d; @synthesize=_destinationURL
@property(assign) int overwrite;	// G=0x35f6bfcd; S=0x35f6bfe1; @synthesize=_overwrite
+ (id)stringFromOverwriteValue:(int)overwriteValue;	// 0x35f6bf91
- (id)initWithSourceURL:(id)sourceURL destinationURL:(id)url;	// 0x35f6b9b1
- (id)initWithSourceURL:(id)sourceURL destinationURL:(id)url andOverwrite:(int)overwrite;	// 0x35f6b9d5
- (id)initWithURL:(id)url;	// 0x35f6b9ad
- (void)_callBackToDelegateWithResponses:(id)responses error:(id)error;	// 0x35f6bf8d
- (id)additionalHeaderValues;	// 0x35f6bced
- (void)dealloc;	// 0x35f6bb41
- (id)description;	// 0x35f6bb8d
// declared property getter: - (id)destinationURL;	// 0x35f6bff9
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x35f6be1d
// declared property getter: - (int)overwrite;	// 0x35f6bfcd
- (id)requestBody;	// 0x35f6bce9
// declared property setter: - (void)setDestinationURL:(id)url;	// 0x35f6c00d
// declared property setter: - (void)setOverwrite:(int)overwrite;	// 0x35f6bfe1
@end
