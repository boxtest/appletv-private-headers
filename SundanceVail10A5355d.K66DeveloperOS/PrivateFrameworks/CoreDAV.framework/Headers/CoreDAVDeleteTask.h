/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVActionBackedTask.h"

@class NSString;
@protocol CoreDAVTaskDelegate;

@interface CoreDAVDeleteTask : CoreDAVActionBackedTask {
	NSString *_previousETag;	// 140 = 0x8c
}
@property(assign, nonatomic) id<CoreDAVTaskDelegate> delegate;	// @dynamic
@property(retain) NSString *previousETag;	// G=0x3047b565; S=0x3047b579; @synthesize=_previousETag
- (id)additionalHeaderValues;	// 0x3047b311
- (void)dealloc;	// 0x3047b1f1
- (id)description;	// 0x3047b23d
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x3047b3cd
- (id)httpMethod;	// 0x3047b305
// declared property getter: - (id)previousETag;	// 0x3047b565
- (id)requestBody;	// 0x3047b3c9
// declared property setter: - (void)setPreviousETag:(id)tag;	// 0x3047b579
@end

