/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADBulletProperties.h"


@interface OADAutoNumberBulletProperties : OADBulletProperties {
	int mSchemeType;	// 4 = 0x4
	int mStartIndex;	// 8 = 0x8
}
- (id)initWithAutoNumberSchemeType:(int)autoNumberSchemeType startIndex:(unsigned)index;	// 0x33aae271
- (int)autoNumberSchemeType;	// 0x33aae335
- (BOOL)isEqual:(id)equal;	// 0x33aae2c1
- (unsigned)startIndex;	// 0x33b9c6dd
@end
