/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADColor.h"
#import "OfficeImport-Structs.h"


@interface OADIndexedColor : OADColor {
	int mIndex;	// 8 = 0x8
}
+ (id)indexedColorWithIndex:(int)index;	// 0x31cf30f5
- (id)initWithIndex:(int)index;	// 0x31cee54d
- (id)colorFromPalette:(id)palette;	// 0x31dcc845
- (id)copyWithZone:(NSZone *)zone;	// 0x31cf51d1
- (unsigned)hash;	// 0x31dcc869
- (int)index;	// 0x31d00abd
- (BOOL)isEqual:(id)equal;	// 0x31dcc8a5
@end
