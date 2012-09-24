/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "__NSCFType.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSCFCharacterSet : __NSCFType {
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x33acc3e9
- (BOOL)_isDeallocating;	// 0x33acc399
- (BOOL)_tryRetain;	// 0x33acc389
- (void)addCharactersInRange:(NSRange)range;	// 0x33a9bb5d
- (void)addCharactersInString:(id)string;	// 0x33a7b9fd
- (id)bitmapRepresentation;	// 0x33acc40d
- (BOOL)characterIsMember:(unsigned short)member;	// 0x33a7c34d
- (Class)classForCoder;	// 0x33acc451
- (id)copyWithZone:(NSZone *)zone;	// 0x33aa05c5
- (void)encodeWithCoder:(id)coder;	// 0x33acc481
- (void)finalize;	// 0x33acc3a9
- (void)formIntersectionWithCharacterSet:(id)characterSet;	// 0x33acc43d
- (void)formUnionWithCharacterSet:(id)characterSet;	// 0x33a7afb5
- (BOOL)hasMemberInPlane:(unsigned char)plane;	// 0x33acc3fd
- (unsigned)hash;	// 0x33acc381
- (void)invert;	// 0x33a7ae45
- (id)invertedSet;	// 0x33a89229
- (BOOL)isEqual:(id)equal;	// 0x33acc369
- (BOOL)isSupersetOfSet:(id)set;	// 0x33acc3ed
- (BOOL)longCharacterIsMember:(unsigned long)member;	// 0x33aa0a0d
- (void)makeCharacterSetCompact;	// 0x33acc449
- (void)makeCharacterSetFast;	// 0x33acc44d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x33a7ae21
- (oneway void)release;	// 0x33a7bced
- (void)removeCharactersInRange:(NSRange)range;	// 0x33aa4d0d
- (void)removeCharactersInString:(id)string;	// 0x33aa4a15
- (id)retain;	// 0x33a7bcdd
- (unsigned)retainCount;	// 0x33acc3a5
@end
