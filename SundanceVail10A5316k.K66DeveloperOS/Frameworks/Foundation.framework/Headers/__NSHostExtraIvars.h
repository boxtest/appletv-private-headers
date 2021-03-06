/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface __NSHostExtraIvars : NSObject {
@private
	NSString *thingToResolve;	// 4 = 0x4
	int resolveType;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *resolveQueue;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *cacheAccessQueue;	// 16 = 0x10
	NSObject<OS_dispatch_queue> *callbackQueue;	// 20 = 0x14
	BOOL startedResolving;	// 24 = 0x18
}
@property(readonly, assign) NSObject<OS_dispatch_queue> *cacheAccessQueue;	// G=0x31a5a54d; @synthesize
@property(readonly, assign) NSObject<OS_dispatch_queue> *callbackQueue;	// G=0x31a5a561; @synthesize
@property(readonly, assign) NSObject<OS_dispatch_queue> *resolveQueue;	// G=0x31a5a539; @synthesize
@property(assign, nonatomic) int resolveType;	// G=0x31a5a4f9; S=0x31a5a509; @synthesize
@property(assign) BOOL startedResolving;	// G=0x31a5a575; S=0x31a5a58d; @synthesize
@property(retain, nonatomic) NSString *thingToResolve;	// G=0x31a5a519; S=0x31a5a529; @synthesize
- (id)init;	// 0x31a5a395
// declared property getter: - (id)cacheAccessQueue;	// 0x31a5a54d
// declared property getter: - (id)callbackQueue;	// 0x31a5a561
- (void)cleanup;	// 0x31a5a419
- (void)dealloc;	// 0x31a5a499
- (void)finalize;	// 0x31a5a459
// declared property getter: - (id)resolveQueue;	// 0x31a5a539
// declared property getter: - (int)resolveType;	// 0x31a5a4f9
// declared property setter: - (void)setResolveType:(int)type;	// 0x31a5a509
// declared property setter: - (void)setStartedResolving:(BOOL)resolving;	// 0x31a5a58d
// declared property setter: - (void)setThingToResolve:(id)resolve;	// 0x31a5a529
// declared property getter: - (BOOL)startedResolving;	// 0x31a5a575
// declared property getter: - (id)thingToResolve;	// 0x31a5a519
@end

