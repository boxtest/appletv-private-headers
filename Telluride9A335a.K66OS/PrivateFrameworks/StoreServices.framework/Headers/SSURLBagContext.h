/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSXPCCoding.h"
#import "SSCoding.h"
#import "StoreServices-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSString, NSDictionary, NSMutableDictionary, NSNumber;

@interface SSURLBagContext : NSObject <SSCoding, SSXPCCoding, NSCopying> {
@private
	int _bagType;	// 4 = 0x4
	NSMutableDictionary *_httpHeaders;	// 8 = 0x8
	NSNumber *_userIdentifier;	// 12 = 0xc
}
@property(copy, nonatomic) NSDictionary *allHTTPHeaders;	// G=0x30ecc065; S=0x30ecc11d; 
@property(assign, nonatomic) int bagType;	// G=0x30ecc701; S=0x30ecc711; @synthesize=_bagType
@property(readonly, assign, nonatomic) NSString *cacheKey;	// G=0x30ecc09d; 
@property(retain, nonatomic) NSNumber *userIdentifier;	// G=0x30ecc721; S=0x30ecc731; @synthesize=_userIdentifier
+ (id)contextWithBagType:(int)bagType;	// 0x30ecc011
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x30ecc45d
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x30ecc5d5
// declared property getter: - (id)allHTTPHeaders;	// 0x30ecc065
// declared property getter: - (int)bagType;	// 0x30ecc701
// declared property getter: - (id)cacheKey;	// 0x30ecc09d
- (id)copyPropertyListEncoding;	// 0x30ecc529
- (id)copyWithZone:(NSZone *)zone;	// 0x30ecc3b1
- (void *)copyXPCEncoding;	// 0x30ecc68d
- (void)dealloc;	// 0x30ecbfb1
- (id)description;	// 0x30ecc235
- (unsigned)hash;	// 0x30ecc2ad
- (BOOL)isEqual:(id)equal;	// 0x30ecc2fd
// declared property setter: - (void)setAllHTTPHeaders:(id)headers;	// 0x30ecc11d
// declared property setter: - (void)setBagType:(int)type;	// 0x30ecc711
// declared property setter: - (void)setUserIdentifier:(id)identifier;	// 0x30ecc731
- (void)setValue:(id)value forHTTPHeaderField:(id)httpheaderField;	// 0x30ecc161
// declared property getter: - (id)userIdentifier;	// 0x30ecc721
- (id)valueForHTTPHeaderField:(id)httpheaderField;	// 0x30ecc1ed
@end

