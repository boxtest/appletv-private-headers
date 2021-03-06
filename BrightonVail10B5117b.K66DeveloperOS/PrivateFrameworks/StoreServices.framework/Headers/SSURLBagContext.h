/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "StoreServices-Structs.h"
#import "SSXPCCoding.h"
#import "NSCopying.h"

@class NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface SSURLBagContext : NSObject <SSXPCCoding, NSCopying> {
	int _allowedRetryCount;	// 4 = 0x4
	BOOL _allowsExpiredBags;	// 8 = 0x8
	int _bagType;	// 12 = 0xc
	NSMutableDictionary *_httpHeaders;	// 16 = 0x10
	BOOL _ignoresDiskCache;	// 20 = 0x14
	NSNumber *_userIdentifier;	// 24 = 0x18
	BOOL _usesCachedBagsOnly;	// 28 = 0x1c
}
@property(copy, nonatomic) NSDictionary *allHTTPHeaders;	// G=0x356bf045; S=0x356bf0fd; 
@property(assign, nonatomic) int allowedRetryCount;	// G=0x356bf9d1; S=0x356bf9e1; @synthesize=_allowedRetryCount
@property(assign, nonatomic) BOOL allowsExpiredBags;	// G=0x356bf9f1; S=0x356bfa01; @synthesize=_allowsExpiredBags
@property(assign, nonatomic) int bagType;	// G=0x356bfa11; S=0x356bfa21; @synthesize=_bagType
@property(readonly, assign, nonatomic) NSString *cacheKey;	// G=0x356bf07d; 
@property(readonly, assign, nonatomic) CFStringRef diskCacheExpirationTimeKey;	// G=0x356bf4a5; 
@property(readonly, assign, nonatomic) NSString *diskCacheKey;	// G=0x356bf4ed; 
@property(readonly, assign, nonatomic) NSString *diskCachePath;	// G=0x356bf575; 
@property(assign, nonatomic) BOOL ignoresDiskCache;	// G=0x356bfa31; S=0x356bfa41; @synthesize=_ignoresDiskCache
@property(retain, nonatomic) NSNumber *userIdentifier;	// G=0x356bfa51; S=0x356bfa61; @synthesize=_userIdentifier
@property(assign, nonatomic) BOOL usesCachedBagsOnly;	// G=0x356bfa71; S=0x356bfa81; @synthesize=_usesCachedBagsOnly
+ (id)contextWithBagType:(int)bagType;	// 0x356beff1
+ (id)diskCacheDirectoryPath;	// 0x356bf401
- (id)init;	// 0x356bef4d
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x356bf73d
// declared property getter: - (id)allHTTPHeaders;	// 0x356bf045
// declared property getter: - (int)allowedRetryCount;	// 0x356bf9d1
// declared property getter: - (BOOL)allowsExpiredBags;	// 0x356bf9f1
// declared property getter: - (int)bagType;	// 0x356bfa11
// declared property getter: - (id)cacheKey;	// 0x356bf07d
- (id)copyWithZone:(NSZone *)zone;	// 0x356bf65d
- (id)copyXPCEncoding;	// 0x356bf8d1
- (void)dealloc;	// 0x356bef8d
- (id)description;	// 0x356bf219
// declared property getter: - (CFStringRef)diskCacheExpirationTimeKey;	// 0x356bf4a5
// declared property getter: - (id)diskCacheKey;	// 0x356bf4ed
// declared property getter: - (id)diskCachePath;	// 0x356bf575
- (unsigned)hash;	// 0x356bf2ad
// declared property getter: - (BOOL)ignoresDiskCache;	// 0x356bfa31
- (BOOL)isEqual:(id)equal;	// 0x356bf2fd
// declared property setter: - (void)setAllHTTPHeaders:(id)headers;	// 0x356bf0fd
// declared property setter: - (void)setAllowedRetryCount:(int)count;	// 0x356bf9e1
// declared property setter: - (void)setAllowsExpiredBags:(BOOL)bags;	// 0x356bfa01
// declared property setter: - (void)setBagType:(int)type;	// 0x356bfa21
// declared property setter: - (void)setIgnoresDiskCache:(BOOL)cache;	// 0x356bfa41
// declared property setter: - (void)setUserIdentifier:(id)identifier;	// 0x356bfa61
// declared property setter: - (void)setUsesCachedBagsOnly:(BOOL)only;	// 0x356bfa81
- (void)setValue:(id)value forHTTPHeaderField:(id)httpheaderField;	// 0x356bf141
// declared property getter: - (id)userIdentifier;	// 0x356bfa51
// declared property getter: - (BOOL)usesCachedBagsOnly;	// 0x356bfa71
- (id)valueForHTTPHeaderField:(id)httpheaderField;	// 0x356bf1d1
@end

