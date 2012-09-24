/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "NSCopying.h"
#import "Symbolication-Structs.h"
#import "VMUAddressRange.h"

@class VMUSymbolOwner, NSString;

@interface VMUSymbol : VMUAddressRange <NSCopying> {
	NSString *_name;	// 20 = 0x14
	NSString *_mangledName;	// 24 = 0x18
	VMUSymbolOwner *_owner;	// 28 = 0x1c
	unsigned _flags;	// 32 = 0x20
}
@property(readonly, assign) unsigned flags;	// G=0x36dd3c51; converted property
@property(readonly, retain) NSString *mangledName;	// G=0x36dd3a5d; converted property
@property(readonly, retain) NSString *name;	// G=0x36dd39dd; converted property
@property(retain) VMUSymbolOwner *owner;	// G=0x36dd3a95; S=0x36dd40b9; converted property
+ (id)symbolWithName:(id)name mangledName:(id)name2 addressRange:(VMURange)range owner:(id)owner flags:(unsigned)flags;	// 0x36dd38ad
- (id)initWithName:(id)name mangledName:(id)name2 addressRange:(VMURange)range owner:(id)owner flags:(unsigned)flags;	// 0x36dd391d
- (VMURange)addressRange;	// 0x36dd3a6d
- (int)compare:(id)compare;	// 0x36dd3d09
- (id)copyWithZone:(NSZone *)zone;	// 0x36dd4019
- (void)dealloc;	// 0x36dd3fa1
- (id)description;	// 0x36dd3f21
// converted property getter: - (unsigned)flags;	// 0x36dd3c51
- (BOOL)isArm;	// 0x36dd3ced
- (BOOL)isDwarf;	// 0x36dd3cd9
- (BOOL)isDyldStub;	// 0x36dd3c9d
- (BOOL)isEqualToSymbol:(id)symbol;	// 0x36dd3dcd
- (BOOL)isExternal;	// 0x36dd3cb1
- (BOOL)isFunction;	// 0x36dd3c61
- (BOOL)isJavaMethod;	// 0x36dd3c89
- (BOOL)isObjcMethod;	// 0x36dd3c75
- (BOOL)isStab;	// 0x36dd3cc5
- (BOOL)isThumb;	// 0x36dd3d05
// converted property getter: - (id)mangledName;	// 0x36dd3a5d
// converted property getter: - (id)name;	// 0x36dd39dd
// converted property getter: - (id)owner;	// 0x36dd3a95
// converted property setter: - (void)setOwner:(id)owner;	// 0x36dd40b9
- (id)sourceInfoForAddress:(unsigned long long)address;	// 0x36dd3aed
- (id)sourceInfos;	// 0x36dd3aa5
- (id)sourceInfosInAddressRange:(VMURange)addressRange;	// 0x36dd3b5d
- (id)text;	// 0x36dd3bed
@end
