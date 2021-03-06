/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"
#import "SSXPCCoding.h"

@class NSArray;
@protocol SSPersonalizeOffersDelegate;

@interface SSPersonalizeOffersRequest : SSRequest <SSXPCCoding> {
	NSArray *_items;	// 28 = 0x1c
}
@property(assign, nonatomic) id<SSPersonalizeOffersDelegate> delegate;	// @dynamic
@property(readonly, assign, nonatomic) NSArray *items;	// G=0x354f592d; 
- (id)initWithItems:(id)items;	// 0x354f588d
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x354f60b9
- (id)copyXPCEncoding;	// 0x354f62e1
- (void)dealloc;	// 0x354f58e1
// declared property getter: - (id)items;	// 0x354f592d
- (BOOL)start;	// 0x354f5e69
- (void)startWithCompletionBlock:(id)completionBlock;	// 0x354f6041
- (void)startWithPersonalizedResponseBlock:(id)personalizedResponseBlock;	// 0x354f5965
@end

