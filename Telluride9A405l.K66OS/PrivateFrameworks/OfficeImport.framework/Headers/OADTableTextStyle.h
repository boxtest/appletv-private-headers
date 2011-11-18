/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADColor, OADFontReference;

__attribute__((visibility("hidden")))
@interface OADTableTextStyle : NSObject {
@private
	OADFontReference *mFontReference;	// 4 = 0x4
	OADColor *mColor;	// 8 = 0x8
	int mBold;	// 12 = 0xc
	int mItalic;	// 16 = 0x10
}
@property(assign) int bold;	// G=0x30dbdced; S=0x30d934ed; converted property
@property(retain) id color;	// G=0x30dbdcdd; S=0x30d93271; converted property
@property(retain) id fontReference;	// G=0x30e8920d; S=0x30d92ed5; converted property
@property(assign) int italic;	// G=0x30e8921d; S=0x30e8922d; converted property
+ (int)defaultBold;	// 0x30e8923d
+ (id)defaultColor;	// 0x30e89541
+ (id)defaultFontReference;	// 0x30e894b1
+ (int)defaultItalic;	// 0x30e89241
+ (id)defaultStyle;	// 0x30e893ad
- (id)init;	// 0x30d92e89
- (void)applyOverridesFrom:(id)from;	// 0x30e89589
// converted property getter: - (int)bold;	// 0x30dbdced
// converted property getter: - (id)color;	// 0x30dbdcdd
- (void)dealloc;	// 0x30d945a1
// converted property getter: - (id)fontReference;	// 0x30e8920d
// converted property getter: - (int)italic;	// 0x30e8921d
// converted property setter: - (void)setBold:(int)bold;	// 0x30d934ed
// converted property setter: - (void)setColor:(id)color;	// 0x30d93271
// converted property setter: - (void)setFontReference:(id)reference;	// 0x30d92ed5
// converted property setter: - (void)setItalic:(int)italic;	// 0x30e8922d
- (id)shallowCopy;	// 0x30e89671
@end

