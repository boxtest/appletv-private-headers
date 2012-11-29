/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@protocol CoreDAVOptionsTaskDelegate;

@interface CoreDAVOptionsTask : CoreDAVTask {
}
@property(assign, nonatomic) id<CoreDAVOptionsTaskDelegate> delegate;	// @dynamic
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x3340b9a5
- (id)httpMethod;	// 0x3340b995
- (id)requestBody;	// 0x3340b9a1
@end
