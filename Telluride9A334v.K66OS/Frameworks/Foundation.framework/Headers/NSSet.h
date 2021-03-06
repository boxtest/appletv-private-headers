/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSSet.h> // Unknown library


@interface NSSet (NSKeyValueCoding)
- (id)_avgForKeyPath:(id)keyPath;	// 0x306752a9
- (id)_countForKeyPath:(id)keyPath;	// 0x30675319
- (id)_distinctUnionOfArraysForKeyPath:(id)keyPath;	// 0x306754e5
- (id)_distinctUnionOfObjectsForKeyPath:(id)keyPath;	// 0x306755c9
- (id)_distinctUnionOfSetsForKeyPath:(id)keyPath;	// 0x306756ad
- (id)_maxForKeyPath:(id)keyPath;	// 0x30675351
- (id)_minForKeyPath:(id)keyPath;	// 0x3067541d
- (id)_sumForKeyPath:(id)keyPath;	// 0x3067517d
- (void)setValue:(id)value forKey:(id)key;	// 0x30675a41
- (id)valueForKey:(id)key;	// 0x30675791
- (id)valueForKeyPath:(id)keyPath;	// 0x30675add
@end

@interface NSSet (NSKeyValueObserverRegistration)
- (void)addObserver:(id)observer forKeyPath:(id)keyPath options:(unsigned)options context:(void *)context;	// 0x3067c575
- (void)removeObserver:(id)observer forKeyPath:(id)keyPath;	// 0x3067c615
- (void)removeObserver:(id)observer forKeyPath:(id)keyPath context:(void *)context;	// 0x3067c5c5
@end

@interface NSSet (NSSet)
- (id)initWithCoder:(id)coder;	// 0x3060c925
- (Class)classForCoder;	// 0x306939ad
- (void)encodeWithCoder:(id)coder;	// 0x3062cc4d
@end

@interface NSSet (NSKeyValueSorting)
- (id)sortedArrayUsingDescriptors:(id)descriptors;	// 0x30695f75
@end

@interface NSSet (NSPredicateSupport)
- (id)filteredSetUsingPredicate:(id)predicate;	// 0x306ce451
@end

