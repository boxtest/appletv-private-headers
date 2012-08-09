/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSMutableDictionary.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSCFDictionary : NSMutableDictionary {
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x346a1481
- (BOOL)_isDeallocating;	// 0x346a10c9
- (BOOL)_tryRetain;	// 0x346a10b9
- (Class)classForCoder;	// 0x346a1115
- (id)copyWithZone:(NSZone *)zone;	// 0x346a114d
- (unsigned)count;	// 0x346a11a9
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x346a11bd
- (void)finalize;	// 0x346a10d5
- (void)getObjects:(id *)objects andKeys:(id *)keys;	// 0x346a13fd
- (unsigned)hash;	// 0x346a109d
- (BOOL)isEqual:(id)equal;	// 0x346a1051
- (id)keyEnumerator;	// 0x346a11cd
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x346a1189
- (id)objectForKey:(id)key;	// 0x346a11ad
- (oneway void)release;	// 0x346a10b1
- (void)removeAllObjects;	// 0x346a1425
- (void)removeObjectForKey:(id)key;	// 0x346a134d
- (id)retain;	// 0x346a10a1
- (unsigned)retainCount;	// 0x346a10b5
- (void)setObject:(id)object forKey:(id)key;	// 0x346a1229
- (void)setObservationInfo:(void *)info;	// 0x346a1485
@end
