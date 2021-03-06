/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSCopying.h"
#import "MusicLibrary-Structs.h"


@interface ML3Predicate : NSObject <NSCoding, NSCopying> {
}
- (id)initWithCoder:(id)coder;	// 0x3547ca2d
- (id)SQLForEntityClass:(Class)entityClass;	// 0x3547cad5
- (id)SQLJoinClausesForClass:(Class)aClass;	// 0x3547cac9
- (void)appendSQLToMutableString:(id)mutableString entityClass:(Class)aClass;	// 0x3547cacd
- (void)bindToStatement:(id)statement bindingIndex:(inout int *)index;	// 0x3547cad1
- (id)copyWithZone:(NSZone *)zone;	// 0x3547cac5
- (void)encodeWithCoder:(id)coder;	// 0x3547ca69
- (unsigned)hash;	// 0x3547ca9d
- (BOOL)isDynamicForEntityClass:(Class)entityClass;	// 0x3547cb21
- (BOOL)isEqual:(id)equal;	// 0x3547ca6d
@end

