/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "NSMutableCopying.h"

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface SKPayment : NSObject <NSCopying, NSMutableCopying> {
@private
	id _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *productIdentifier;	// G=0x35f2b299; 
@property(readonly, assign, nonatomic) int quantity;	// G=0x35f2b2dd; 
@property(readonly, assign, nonatomic) NSData *requestData;	// G=0x35f2b2fd; 
+ (id)paymentWithProduct:(id)product;	// 0x35f2b119
+ (id)paymentWithProductIdentifier:(id)productIdentifier;	// 0x35f2b195
- (id)init;	// 0x35f2af61
- (id)copyWithZone:(NSZone *)zone;	// 0x35f2b019
- (void)dealloc;	// 0x35f2afc5
- (BOOL)isEqual:(id)equal;	// 0x35f2b201
- (OpaqueJSValue *)jsCopyObjectWithContext:(OpaqueJSContext *)context withException:(const OpaqueJSValue **)exception;	// 0x35f26035
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x35f2b099
// declared property getter: - (id)productIdentifier;	// 0x35f2b299
// declared property getter: - (int)quantity;	// 0x35f2b2dd
// declared property getter: - (id)requestData;	// 0x35f2b2fd
@end

