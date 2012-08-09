/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADBaseStyles, OADDefaultProperties;

@interface OADTheme : NSObject {
	OADBaseStyles *mBaseStyles;	// 4 = 0x4
	OADDefaultProperties *mShapeDefaults;	// 8 = 0x8
	OADDefaultProperties *mLineDefaults;	// 12 = 0xc
	OADDefaultProperties *mTextDefaults;	// 16 = 0x10
}
- (id)init;	// 0x36f145d9
- (void)addDefaults;	// 0x37150799
- (id)addLineDefaults;	// 0x36f16261
- (id)addShapeDefaults;	// 0x36f148b1
- (id)addTextDefaults;	// 0x36f162b1
- (id)baseStyles;	// 0x36f19a7d
- (void)dealloc;	// 0x36f8513d
- (id)lineDefaults;	// 0x37150861
- (id)shapeDefaults;	// 0x36f163a9
- (id)textDefaults;	// 0x36f197c9
@end
