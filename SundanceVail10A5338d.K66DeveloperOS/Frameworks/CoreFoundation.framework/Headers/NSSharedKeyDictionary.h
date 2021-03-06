/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSMutableDictionary.h"
#import "CoreFoundation-Structs.h"

@class NSSharedKeySet;

@interface NSSharedKeyDictionary : NSMutableDictionary {
	NSSharedKeySet *_keyMap;	// 4 = 0x4
	unsigned _count;	// 8 = 0x8
	id *_values;	// 12 = 0xc
	/*function-pointer*/ void *_ifkIMP;	// 16 = 0x10
	NSMutableDictionary *_sideDic;	// 20 = 0x14
	unsigned long _mutations;	// 24 = 0x18
}
@property(readonly, assign) unsigned count;	// G=0x36a6b759; converted property
+ (id)sharedKeyDictionaryWithKeySet:(id)keySet;	// 0x36a6be79
- (id)initWithCoder:(id)coder;	// 0x36a6c3c1
- (id)initWithKeySet:(id)keySet;	// 0x36a6bdf9
- (Class)classForCoder;	// 0x36a6c159
- (id)copyWithZone:(NSZone *)zone;	// 0x36a6c065
// converted property getter: - (unsigned)count;	// 0x36a6b759
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x36a6c6f9
- (void)dealloc;	// 0x36a6beb5
- (void)encodeWithCoder:(id)coder;	// 0x36a6c175
- (void)finalize;	// 0x36a6bf89
- (id)keyEnumerator;	// 0x36a6b80d
- (id)keySet;	// 0x36a6bde9
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x36a6c149
- (id)objectForKey:(id)key;	// 0x36a6b78d
- (void)removeObjectForKey:(id)key;	// 0x36a6bcb9
- (void)setObject:(id)object forKey:(id)key;	// 0x36a6bb29
@end

