/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVCopyOrMoveTask.h"

@protocol CoreDAVCopyTaskDelegate;

@interface CoreDAVCopyTask : CoreDAVCopyOrMoveTask {
}
@property(assign, nonatomic) id<CoreDAVCopyTaskDelegate> delegate;	// @dynamic
- (void)_callBackToDelegateWithResponses:(id)responses error:(id)error;	// 0x3006c4c5
- (void)dealloc;	// 0x3006c3fd
- (id)httpMethod;	// 0x3006c3f1
- (BOOL)validate:(id *)validate;	// 0x3006c441
@end
