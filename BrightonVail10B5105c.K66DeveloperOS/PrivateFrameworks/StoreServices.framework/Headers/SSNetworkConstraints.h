/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "SSXPCCoding.h"
#import "StoreServices-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface SSNetworkConstraints : NSObject <NSCoding, SSXPCCoding, NSCopying> {
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 4 = 0x4
	NSMutableDictionary *_sizeLimits;	// 8 = 0x8
}
@property(readonly, assign, getter=isAnyNetworkTypeEnabled) BOOL anyNetworkTypeEnabled;	// G=0x3584fd75; 
+ (void)_addNetworkConstraintsToDictionary:(id)dictionary forNetworkType:(int)networkType legacyDictionary:(id)dictionary3;	// 0x35850c4d
+ (id)_newLegacyNetworkConstraintsWithDictionary:(id)dictionary;	// 0x35850f49
+ (id)_newModernNetworkConstraintsWithArray:(id)array;	// 0x35851009
+ (id)newNetworkConstraintsByDownloadKindFromURLBag:(id)urlbag;	// 0x3585086d
- (id)init;	// 0x3584fa99
- (id)initWithCoder:(id)coder;	// 0x358517b9
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x35851a59
- (id)_copySizeLimits;	// 0x35851321
- (void)_disableAllNetworkTypes;	// 0x35851425
- (void)_setSizeLimit:(long long)limit forNetworkType:(int)networkType;	// 0x358515ad
- (long long)_sizeLimitForNetworkType:(int)networkType;	// 0x35851699
- (id)copyWithZone:(NSZone *)zone;	// 0x35851955
- (id)copyXPCEncoding;	// 0x35851b1d
- (void)dealloc;	// 0x3584fb09
- (id)description;	// 0x35850151
- (void)disableCellularNetworkTypes;	// 0x3584fb6d
- (void)encodeWithCoder:(id)coder;	// 0x35851891
- (BOOL)hasSizeLimitForNetworkType:(int)networkType;	// 0x3584fc35
// declared property getter: - (BOOL)isAnyNetworkTypeEnabled;	// 0x3584fd75
- (BOOL)isEqual:(id)equal;	// 0x35850665
- (void)setAllNetworkTypesDisabled;	// 0x3584ff39
- (void)setSizeLimit:(long long)limit forNetworkType:(int)networkType;	// 0x3584ffb5
- (void)setSizeLimitsWithStoreConstraintDictionary:(id)storeConstraintDictionary;	// 0x3585093d
- (long long)sizeLimitForNetworkType:(int)networkType;	// 0x35850061
@end
