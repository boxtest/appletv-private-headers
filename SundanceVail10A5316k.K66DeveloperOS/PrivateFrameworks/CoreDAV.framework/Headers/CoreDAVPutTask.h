/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVPostOrPutTask.h"

@class NSString;
@protocol CoreDAVTaskDelegate;

@interface CoreDAVPutTask : CoreDAVPostOrPutTask {
	NSString *_nextETag;	// 164 = 0xa4
}
@property(assign, nonatomic) id<CoreDAVTaskDelegate> delegate;	// @dynamic
@property(retain) NSString *nextETag;	// G=0x35f5fb8d; S=0x35f5fba1; @synthesize=_nextETag
- (void)dealloc;	// 0x35f5f8fd
- (id)description;	// 0x35f5f949
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x35f5fa1d
- (id)httpMethod;	// 0x35f5fa11
// declared property getter: - (id)nextETag;	// 0x35f5fb8d
// declared property setter: - (void)setNextETag:(id)tag;	// 0x35f5fba1
@end
