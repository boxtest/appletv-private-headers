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
@property(readonly, assign) SSSoftwareUpdatesContext *updateQueueContext;	// G=0x319169d9; 
- (id)initWithUpdateQueueContext:(id)updateQueueContext;	// 0x319166bd
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x31916c95
- (id)copyXPCEncoding;	// 0x31916c61
- (void)dealloc;	// 0x31916711
- (BOOL)start;	// 0x31916a11
- (void)startWithCompletionBlock:(id)completionBlock;	// 0x31916be9
- (void)startWithUpdatesResponseBlock:(id)updatesResponseBlock;	// 0x3191675d
// declared property getter: - (id)updateQueueContext;	// 0x319169d9
@end

