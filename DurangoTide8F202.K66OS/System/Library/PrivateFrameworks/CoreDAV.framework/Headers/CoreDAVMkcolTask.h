/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@class NSSet;
@protocol CoreDAVTaskDelegate;

@interface CoreDAVMkcolTask : CoreDAVTask {
	NSSet *_propertiesToSet;	// 104 = 0x68
	BOOL _sendOrder;	// 108 = 0x6c
	int _order;	// 112 = 0x70
}
@property(assign, nonatomic) id<CoreDAVTaskDelegate> delegate;	// @dynamic
@property(assign, nonatomic) int order;	// G=0x317b090d; S=0x317b08f1; @synthesize=_order
@property(retain) NSSet *propertiesToSet;	// G=0x317b0ff9; S=0x317b1011; @synthesize=_propertiesToSet
- (id)initWithPropertiesToSet:(id)set atURL:(id)url;	// 0x317b0bbd
- (id)initWithURL:(id)url;	// 0x317b0a29
- (id)additionalHeaderValues;	// 0x317b09ad
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x317b091d
- (void)dealloc;	// 0x317b0b81
- (id)description;	// 0x317b0a41
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x317b0ded
- (id)httpMethod;	// 0x317b08e5
// declared property getter: - (int)order;	// 0x317b090d
// declared property getter: - (id)propertiesToSet;	// 0x317b0ff9
- (id)requestBody;	// 0x317b0c01
// declared property setter: - (void)setOrder:(int)order;	// 0x317b08f1
// declared property setter: - (void)setPropertiesToSet:(id)set;	// 0x317b1011
@end

