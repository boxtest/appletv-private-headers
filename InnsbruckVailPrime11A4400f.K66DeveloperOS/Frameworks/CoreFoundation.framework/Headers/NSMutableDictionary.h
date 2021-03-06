/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSDictionary.h"


@interface NSMutableDictionary : NSDictionary {
}
+ (id)dictionaryWithCapacity:(unsigned)capacity;	// 0x2d271cd1
+ (id)dictionaryWithSharedKeySet:(id)sharedKeySet;	// 0x2d2f7211
- (id)initWithCapacity:(unsigned)capacity;	// 0x2d2f6e65
- (id)initWithObjects:(const id *)objects forKeys:(const id *)keys count:(unsigned)count;	// 0x2d2f6e89
- (void)__addObject:(id)object forKey:(id)key;	// 0x2d27f4c5
- (void)__setObject:(id)object forKey:(id)key;	// 0x2d2f6d71
- (void)_mutate;	// 0x2d27357d
- (void)addEntriesFromDictionary:(id)dictionary;	// 0x2d267e35
- (void)addObject:(id)object forKey:(id)key;	// 0x2d2f578d
- (void)addObjects:(id)objects forKeys:(id)keys;	// 0x2d2f5a41
- (void)addObjects:(const id *)objects forKeys:(const id *)keys count:(unsigned)count;	// 0x2d2f5869
- (void)invert;	// 0x2d2f5c05
- (void)removeAllObjects;	// 0x2d2f5d3d
- (void)removeEntriesInDictionary:(id)dictionary;	// 0x2d2f5ef9
- (void)removeEntriesPassingTest:(id)test;	// 0x2d2f6299
- (void)removeEntriesWithOptions:(unsigned)options passingTest:(id)test;	// 0x2d2f607d
- (void)removeKeysForObject:(id)object;	// 0x2d2f6325
- (void)removeObjectForKey:(id)key;	// 0x2d2f5769
- (void)removeObjectsForKeys:(id)keys;	// 0x2d273411
- (void)replaceObject:(id)object forKey:(id)key;	// 0x2d2f64b9
- (void)replaceObjects:(id)objects forKeys:(id)keys;	// 0x2d2f66f9
- (void)replaceObjects:(const id *)objects forKeys:(const id *)keys count:(unsigned)count;	// 0x2d2f6595
- (void)setDictionary:(id)dictionary;	// 0x2d283859
- (void)setEntriesFromDictionary:(id)dictionary;	// 0x2d2f68bd
- (void)setObject:(id)object forKey:(id)key;	// 0x2d2f5745
- (void)setObject:(id)object forKeyedSubscript:(id)keyedSubscript;	// 0x2d28eacd
- (void)setObjects:(id)objects forKeys:(id)keys;	// 0x2d2f6bad
- (void)setObjects:(const id *)objects forKeys:(const id *)keys count:(unsigned)count;	// 0x2d2f6a49
@end

