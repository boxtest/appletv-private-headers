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
@property(readonly, assign) unsigned flags;	// G=0x31f6cb49; converted property
@property(readonly, retain) NSString *mangledName;	// G=0x31f6cb01; converted property
@property(readonly, retain) NSString *name;	// G=0x31f6d241; converted property
@property(retain) VMUSymbolOwner *owner;	// G=0x31f6cb39; S=0x31f6d2bd; converted property
+ (id)symbolWithName:(id)name mangledName:(id)name2 addressRange:(VMURange)range owner:(id)owner flags:(unsigned)flags;	// 0x31f6cd29
- (id)initWithName:(id)name mangledName:(id)name2 addressRange:(VMURange)range owner:(id)owner flags:(unsigned)flags;	// 0x31f6cc61
- (VMURange)addressRange;	// 0x31f6cb11
- (int)compare:(id)compare;	// 0x31f6cc01
- (id)copyWithZone:(NSZone *)zone;	// 0x31f6cd99
- (void)dealloc;	// 0x31f6ce49
- (id)description;	// 0x31f6cec1
// converted property getter: - (unsigned)flags;	// 0x31f6cb49
- (BOOL)isArm;	// 0x31f6cbe5
- (BOOL)isDwarf;	// 0x31f6cbd1
- (BOOL)isDyldStub;	// 0x31f6cb95
- (BOOL)isEqualToSymbol:(id)symbol;	// 0x31f6cf3d
- (BOOL)isExternal;	// 0x31f6cba9
- (BOOL)isFunction;	// 0x31f6cb59
- (BOOL)isJavaMethod;	// 0x31f6cb81
- (BOOL)isObjcMethod;	// 0x31f6cb6d
- (BOOL)isStab;	// 0x31f6cbbd
- (BOOL)isThumb;	// 0x31f6cbfd
// converted property getter: - (id)mangledName;	// 0x31f6cb01
// converted property getter: - (id)name;	// 0x31f6d241
// converted property getter: - (id)owner;	// 0x31f6cb39
// converted property setter: - (void)setOwner:(id)owner;	// 0x31f6d2bd
- (id)sourceInfoForAddress:(unsigned long long)address;	// 0x31f6d189
- (id)sourceInfos;	// 0x31f6d1f5
- (id)sourceInfosInAddressRange:(VMURange)addressRange;	// 0x31f6d0f9
- (id)text;	// 0x31f6d095
@end
