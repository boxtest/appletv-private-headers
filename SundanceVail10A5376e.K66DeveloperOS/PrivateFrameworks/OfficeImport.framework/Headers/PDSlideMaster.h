/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PDSlideBase.h"

@class OADTheme, OADTextListStyle, NSMutableArray, OADColorMap;

@interface PDSlideMaster : PDSlideBase {
	NSMutableArray *mSlideLayouts;	// 32 = 0x20
	OADTheme *mTheme;	// 36 = 0x24
	OADColorMap *mColorMap;	// 40 = 0x28
	OADTextListStyle *mTitleTextStyle;	// 44 = 0x2c
	OADTextListStyle *mBodyTextStyle;	// 48 = 0x30
	OADTextListStyle *mOtherTextStyle;	// 52 = 0x34
}
@property(retain) id bodyTextStyle;	// G=0x36f67a21; S=0x36f1c411; converted property
@property(retain) id otherTextStyle;	// G=0x37032f2d; S=0x36f1c45d; converted property
@property(retain, nonatomic) NSMutableArray *slideLayouts;	// G=0x37182ed5; S=0x37182ee5; @synthesize=mSlideLayouts
@property(retain) id theme;	// G=0x36f19665; S=0x37182d4d; converted property
@property(retain) id titleTextStyle;	// G=0x36f6792d; S=0x36f1c175; converted property
- (id)init;	// 0x36f19271
- (id)initWithDefaultsAndTheme:(id)defaultsAndTheme;	// 0x37182aa1
- (id)addSlideLayout;	// 0x36f6c045
- (void)addSlideLayout:(id)layout;	// 0x36f6c165
// converted property getter: - (id)bodyTextStyle;	// 0x36f67a21
- (id)colorMap;	// 0x36f1c4ad
- (id)colorScheme;	// 0x36f72f1d
- (void)dealloc;	// 0x36f86219
- (id)defaultTheme;	// 0x3708814d
- (void)doneWithContent;	// 0x37182d91
- (id)drawingTheme;	// 0x37182e69
- (id)fontScheme;	// 0x370334dd
- (id)masterGraphicForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x36f67a19
// converted property getter: - (id)otherTextStyle;	// 0x37032f2d
- (id)parentShapePropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x36f67a15
- (id)parentSlideBase;	// 0x37182d8d
- (id)parentTextBodyPropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x36f67a0d
- (id)parentTextStyleForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index defaultTextListStyle:(id)style overrideIndex:(BOOL)index4;	// 0x36f678d9
- (id)parentTextStyleForTables;	// 0x3708dfb5
- (id)placeholderWithType:(int)type placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x36f6c2c9
// converted property setter: - (void)setBodyTextStyle:(id)style;	// 0x36f1c411
// converted property setter: - (void)setOtherTextStyle:(id)style;	// 0x36f1c45d
// declared property setter: - (void)setSlideLayouts:(id)layouts;	// 0x37182ee5
// converted property setter: - (void)setTheme:(id)theme;	// 0x37182d4d
// converted property setter: - (void)setTitleTextStyle:(id)style;	// 0x36f1c175
- (id)slideLayoutAtIndex:(unsigned)index;	// 0x36f6e50d
- (unsigned)slideLayoutCount;	// 0x36f6e4ed
- (id)slideLayoutOfType:(int)type;	// 0x36f6e7ad
// declared property getter: - (id)slideLayouts;	// 0x37182ed5
- (id)styleMatrix;	// 0x37060c55
// converted property getter: - (id)theme;	// 0x36f19665
// converted property getter: - (id)titleTextStyle;	// 0x36f6792d
@end
