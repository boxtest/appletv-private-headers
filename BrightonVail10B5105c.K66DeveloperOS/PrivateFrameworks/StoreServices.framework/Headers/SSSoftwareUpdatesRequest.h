/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"

@class SSSoftwareUpdatesContext;
@protocol SSSoftwareUpdatesRequestDelegate;

@interface SSSoftwareUpdatesRequest : SSRequest {
	SSSoftwareUpdatesContext *_context;	// 28 = 0x1c
}
@property(assign, nonatomic) id<SSSoftwareUpdatesRequestDelegate> delegate;	// @dynamic
@property(readonly, assign) SSSoftwareUpdatesContext *updateQueueContext;	// G=0x3584d6e1; 
- (id)initWithUpdateQueueContext:(id)updateQueueContext;	// 0x3584d3c5
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x3584d99d
- (id)copyXPCEncoding;	// 0x3584d969
- (void)dealloc;	// 0x3584d419
- (BOOL)start;	// 0x3584d719
- (void)startWithCompletionBlock:(id)completionBlock;	// 0x3584d8f1
- (void)startWithUpdatesResponseBlock:(id)updatesResponseBlock;	// 0x3584d465
// declared property getter: - (id)updateQueueContext;	// 0x3584d6e1
@end
