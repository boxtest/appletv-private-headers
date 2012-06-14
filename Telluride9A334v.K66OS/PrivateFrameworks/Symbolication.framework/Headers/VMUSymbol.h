/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "Symbolication-Structs.h"
#import "NSCopying.h"
#import "VMUAddressRange.h"

@class VMUSymbolOwner, NSString;

@interface VMUSymbol : VMUAddressRange <NSCopying> {
	NSString *_name;	// 20 = 0x14
	NSString *_mangledName;	// 24 = 0x18
	VMUSymbolOwner *_owner;	// 28 = 0x1c
	unsigned _flags;	// 32 = 0x20
}
@property(readonly, assign) unsigned flags;	// G=0x35bd9b49; converted property
@property(readonly, retain) NSString *mangledName;	// G=0x35bd9b01; converted property
@property(readonly, retain) NSString *name;	// G=0x35bda241; converted property
@property(retain) VMUSymbolOwner *owner;	// G=0x35bd9b39; S=0x35bda2bd; converted property
+ (id)symbolWithName:(id)name mangledName:(id)name2 addressRange:(VMURange)range owner:(id)owner flags:(unsigned)flags;	// 0x35bd9d29
- (id)initWithName:(id)name mangledName:(id)name2 addressRange:(VMURange)range owner:(id)owner flags:(unsigned)flags;	// 0x35bd9c61
- (VMURange)addressRange;	// 0x35bd9b11
- (int)compare:(id)compare;	// 0x35bd9c01
- (id)copyWithZone:(NSZone *)zone;	// 0x35bd9d99
- (void)dealloc;	// 0x35bd9e49
- (id)description;	// 0x35bd9ec1
// converted property getter: - (unsigned)flags;	// 0x35bd9b49
- (BOOL)isArm;	// 0x35bd9be5
- (BOOL)isDwarf;	// 0x35bd9bd1
- (BOOL)isDyldStub;	// 0x35bd9b95
- (BOOL)isEqualToSymbol:(id)symbol;	// 0x35bd9f3d
- (BOOL)isExternal;	// 0x35bd9ba9
- (BOOL)isFunction;	// 0x35bd9b59
- (BOOL)isJavaMethod;	// 0x35bd9b81
- (BOOL)isObjcMethod;	// 0x35bd9b6d
- (BOOL)isStab;	// 0x35bd9bbd
- (BOOL)isThumb;	// 0x35bd9bfd
// converted property getter: - (id)mangledName;	// 0x35bd9b01
// converted property getter: - (id)name;	// 0x35bda241
// converted property getter: - (id)owner;	// 0x35bd9b39
// converted property setter: - (void)setOwner:(id)owner;	// 0x35bda2bd
- (id)sourceInfoForAddress:(unsigned long long)address;	// 0x35bda189
- (id)sourceInfos;	// 0x35bda1f5
- (id)sourceInfosInAddressRange:(VMURange)addressRange;	// 0x35bda0f9
- (id)text;	// 0x35bda095
@end
