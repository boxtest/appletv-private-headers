/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDColorReference, EDResources;

__attribute__((visibility("hidden")))
@interface EDBorder : NSObject {
@private
	EDResources *mResources;	// 4 = 0x4
	int mType;	// 8 = 0x8
	EDColorReference *mColorReference;	// 12 = 0xc
	int mDiagonalType;	// 16 = 0x10
}
@property(assign) int diagonalType;	// G=0x30ddc2e5; S=0x30e2ee7d; converted property
@property(assign) int type;	// G=0x30ce0c79; S=0x30e2ee6d; converted property
+ (id)borderWithType:(int)type color:(id)color diagonalType:(int)type3 resources:(id)resources;	// 0x30e2ee8d
+ (id)borderWithType:(int)type color:(id)color resources:(id)resources;	// 0x30e2eec1
+ (id)borderWithType:(int)type colorReference:(id)reference diagonalType:(int)type3 resources:(id)resources;	// 0x30cc1895
+ (id)borderWithType:(int)type colorReference:(id)reference resources:(id)resources;	// 0x30cc1785
+ (id)borderWithType:(int)type resources:(id)resources;	// 0x30cc17c5
- (id)initWithResources:(id)resources;	// 0x30cc1821
- (id)color;	// 0x30ce0dc1
- (id)colorReference;	// 0x30ddc2d5
- (void)dealloc;	// 0x30cc9495
// converted property getter: - (int)diagonalType;	// 0x30ddc2e5
- (unsigned)hash;	// 0x30e2ef2d
- (BOOL)isEqual:(id)equal;	// 0x30cc1ae5
- (BOOL)isEqualToBorder:(id)border;	// 0x30cc1b41
// converted property setter: - (void)setDiagonalType:(int)type;	// 0x30e2ee7d
// converted property setter: - (void)setType:(int)type;	// 0x30e2ee6d
// converted property getter: - (int)type;	// 0x30ce0c79
@end

