/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSXPCCoding.h"
#import "StoreServices-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSMutableDictionary;

@interface SSPurchaseHistoryItem : NSObject <SSXPCCoding, NSCopying> {
	NSMutableDictionary *_properties;	// 4 = 0x4
}
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x37844f19
- (id)copyWithZone:(NSZone *)zone;	// 0x37844e79
- (id)copyXPCEncoding;	// 0x37844ee5
- (void)dealloc;	// 0x37844ced
- (id)description;	// 0x37844ff1
- (unsigned)hash;	// 0x37845059
- (BOOL)isEqual:(id)equal;	// 0x37845079
- (void)setValue:(id)value forProperty:(id)property;	// 0x37844d39
- (id)valueForProperty:(id)property;	// 0x37844e31
@end
