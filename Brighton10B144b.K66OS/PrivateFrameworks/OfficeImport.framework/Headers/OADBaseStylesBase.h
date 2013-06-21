/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADColorScheme, OADFontScheme, OADStyleMatrix;

@interface OADBaseStylesBase : NSObject {
	OADColorScheme *mColorScheme;	// 4 = 0x4
	OADStyleMatrix *mStyleMatrix;	// 8 = 0x8
	OADFontScheme *mFontScheme;	// 12 = 0xc
}
@property(retain, nonatomic) OADFontScheme *fontScheme;	// G=0x3481da8d; S=0x3481da9d; @synthesize=mFontScheme
- (id)colorScheme;	// 0x34820499
- (void)dealloc;	// 0x34887255
// declared property getter: - (id)fontScheme;	// 0x3481da8d
// declared property setter: - (void)setFontScheme:(id)scheme;	// 0x3481da9d
- (id)styleMatrix;	// 0x348dbaa1
@end
