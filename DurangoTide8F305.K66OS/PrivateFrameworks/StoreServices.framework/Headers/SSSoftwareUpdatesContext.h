/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface SSSoftwareUpdatesContext : NSObject <NSCopying, NSMutableCopying> {
@private
	NSString *_clientIdentifierHeader;	// 4 = 0x4
	BOOL _forced;	// 8 = 0x8
}
@property(readonly, copy, nonatomic) NSString *clientIdentifierHeader;	// G=0x324cde8d; @synthesize=_clientIdentifierHeader
@property(readonly, assign, nonatomic, getter=isForced) BOOL forced;	// G=0x324cde7d; @synthesize=_forced
@property(readonly, assign) NSString *queueIdentifier;	// G=0x324cde6d; 
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x324ce059
// declared property getter: - (id)clientIdentifierHeader;	// 0x324cde8d
- (id)copyPropertyListEncoding;	// 0x324cdfb9
- (id)copyWithZone:(NSZone *)zone;	// 0x324cdf51
- (void)dealloc;	// 0x324ce011
// declared property getter: - (BOOL)isForced;	// 0x324cde7d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x324cdee9
// declared property getter: - (id)queueIdentifier;	// 0x324cde6d
@end
