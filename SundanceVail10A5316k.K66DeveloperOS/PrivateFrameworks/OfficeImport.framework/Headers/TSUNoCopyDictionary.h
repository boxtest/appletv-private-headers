/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSMutableDictionary.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface TSUNoCopyDictionary : NSMutableDictionary {
@private
	CFDictionaryRef mDictionary;	// 4 = 0x4
}
- (id)init;	// 0x31008fb9
- (id)initWithCFDictionary:(CFDictionaryRef)cfdictionary;	// 0x311ba209
- (id)initWithCapacity:(unsigned)capacity;	// 0x31008fcd
- (id)allKeys;	// 0x310fb3dd
- (id)allValues;	// 0x31163d5d
- (id)copyWithZone:(NSZone *)zone;	// 0x312dc8ed
- (unsigned)count;	// 0x312dc8fd
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x312dc97d
- (void)dealloc;	// 0x3108a77d
- (void)getObjects:(id *)objects andKeys:(id *)keys;	// 0x312dc911
- (id)keyEnumerator;	// 0x312dc955
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x311ba1b9
- (id)objectEnumerator;	// 0x31163d35
- (id)objectForKey:(id)key;	// 0x31075b61
- (void)removeAllObjects;	// 0x3111e769
- (void)removeObjectForKey:(id)key;	// 0x310ba50d
- (void)setObject:(id)object forKey:(id)key;	// 0x3102378d
@end
