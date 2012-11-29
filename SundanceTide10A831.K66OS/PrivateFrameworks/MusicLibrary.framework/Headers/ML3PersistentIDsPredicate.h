/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3Predicate.h"


@interface ML3PersistentIDsPredicate : ML3Predicate {
	unsigned _count;	// 4 = 0x4
	long long *_persistentIDs;	// 8 = 0x8
	BOOL _shouldContain;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) BOOL shouldContain;	// G=0x305c3c09; @synthesize=_shouldContain
+ (id)predicateWithPersistentIDs:(const long long *)persistentIDs count:(unsigned)count shouldContain:(BOOL)contain;	// 0x305c3541
- (id)initWithCoder:(id)coder;	// 0x305c365d
- (id)initWithPersistentIDs:(const long long *)persistentIDs count:(unsigned)count shouldContain:(BOOL)contain;	// 0x305c3589
- (void)appendSQLToMutableString:(id)mutableString entityClass:(Class)aClass;	// 0x305c3a8d
- (void)bindToStatement:(id)statement bindingIndex:(inout int *)index;	// 0x305c3b8d
- (void)dealloc;	// 0x305c3615
- (void)encodeWithCoder:(id)coder;	// 0x305c3839
- (unsigned)hash;	// 0x305c39ad
- (BOOL)isEqual:(id)equal;	// 0x305c39fd
// declared property getter: - (BOOL)shouldContain;	// 0x305c3c09
@end
