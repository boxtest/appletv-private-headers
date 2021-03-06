/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import "Symbolication-Structs.h"
#import "VMUAddressRange.h"

@class VMUSymbolOwner, NSString;

@interface VMURegion : VMUAddressRange <NSCoding, NSCopying> {
	VMUSymbolOwner *_owner;	// 20 = 0x14
	NSString *_name;	// 24 = 0x18
}
@property(readonly, retain) NSString *name;	// G=0x34eb537d; converted property
@property(retain) VMUSymbolOwner *owner;	// G=0x34eb536d; S=0x34eb5949; converted property
+ (id)regionWithOwner:(id)owner name:(id)name addressRange:(VMURange)range;	// 0x34eb51c1
- (id)initWithCoder:(id)coder;	// 0x34eb52b5
- (id)initWithOwner:(id)owner name:(id)name addressRange:(VMURange)range;	// 0x34eb521d
- (VMURange)addressRange;	// 0x34eb538d
- (int)compare:(id)compare;	// 0x34eb53b5
- (id)copyWithZone:(NSZone *)zone;	// 0x34eb5635
- (void)dealloc;	// 0x34eb55e5
- (id)description;	// 0x34eb5555
- (void)encodeWithCoder:(id)coder;	// 0x34eb531d
- (unsigned)hash;	// 0x34eb5511
- (BOOL)isEqual:(id)equal;	// 0x34eb549d
- (BOOL)isEqualToRegion:(id)region;	// 0x34eb5415
// converted property getter: - (id)name;	// 0x34eb537d
// converted property getter: - (id)owner;	// 0x34eb536d
// converted property setter: - (void)setOwner:(id)owner;	// 0x34eb5949
@end

