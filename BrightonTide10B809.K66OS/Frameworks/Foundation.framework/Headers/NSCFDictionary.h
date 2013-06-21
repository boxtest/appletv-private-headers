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
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x31915e95
- (BOOL)_isDeallocating;	// 0x31915add
- (BOOL)_tryRetain;	// 0x31915acd
- (Class)classForCoder;	// 0x31915b29
- (id)copyWithZone:(NSZone *)zone;	// 0x31915b61
- (unsigned)count;	// 0x31915bbd
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x31915bd1
- (void)finalize;	// 0x31915ae9
- (void)getObjects:(id *)objects andKeys:(id *)keys;	// 0x31915e11
- (unsigned)hash;	// 0x31915ab1
- (BOOL)isEqual:(id)equal;	// 0x31915a65
- (id)keyEnumerator;	// 0x31915be1
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x31915b9d
- (id)objectForKey:(id)key;	// 0x31915bc1
- (oneway void)release;	// 0x31915ac5
- (void)removeAllObjects;	// 0x31915e39
- (void)removeObjectForKey:(id)key;	// 0x31915d61
- (id)retain;	// 0x31915ab5
- (unsigned)retainCount;	// 0x31915ac9
- (void)setObject:(id)object forKey:(id)key;	// 0x31915c3d
- (void)setObservationInfo:(void *)info;	// 0x31915e99
@end
