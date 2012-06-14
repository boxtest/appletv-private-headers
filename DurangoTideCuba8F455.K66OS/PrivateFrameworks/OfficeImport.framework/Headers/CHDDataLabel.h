/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDResources, OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDDataLabel : NSObject {
@private
	EDResources *mResources;	// 4 = 0x4
	unsigned mStringIndex;	// 8 = 0x8
	unsigned mContentFormatId;	// 12 = 0xc
	int mPosition;	// 16 = 0x10
	bool mShowLeaderLines;	// 20 = 0x14
	bool mShowCategoryName;	// 21 = 0x15
	bool mShowSeriesName;	// 22 = 0x16
	bool mShowPercent;	// 23 = 0x17
	bool mShowValue;	// 24 = 0x18
	bool mShowLegendKey;	// 25 = 0x19
	bool mIsPositionAffineTransform;	// 26 = 0x1a
	double mRotation;	// 28 = 0x1c
	OADGraphicProperties *mGraphicProperties;	// 36 = 0x24
}
@property(retain) id contentFormat;	// G=0x32d0d279; S=0x32d0d1ed; converted property
@property(assign) unsigned contentFormatId;	// G=0x32d0d1dd; S=0x32cbce21; converted property
@property(retain) id graphicProperties;	// G=0x32d0d17d; S=0x32c472cd; converted property
@property(assign) bool isPositionAffineTransform;	// G=0x32d0d19d; S=0x32d0d18d; converted property
@property(assign) int position;	// G=0x32d0d11d; S=0x32c92e41; converted property
@property(assign) double rotationAngle;	// G=0x32d0d1ad; S=0x32c92ee5; converted property
@property(assign, getter=isShowCategoryName) bool showCategoryName;	// G=0x32d0d13d; S=0x32c4729d; converted property
@property(assign, getter=isShowLeaderLines) bool showLeaderLines;	// G=0x32d0d12d; S=0x32c4728d; converted property
@property(assign, getter=isShowLegendKey) bool showLegendKey;	// G=0x32d0d16d; S=0x32c92ddd; converted property
@property(assign, getter=isShowPercent) bool showPercent;	// G=0x32d0d15d; S=0x32c472ad; converted property
@property(assign, getter=isShowSeriesName) bool showSeriesName;	// G=0x32d0d14d; S=0x32c92ded; converted property
@property(assign, getter=isShowValue) bool showValue;	// G=0x32c94869; S=0x32c472bd; converted property
@property(retain) id string;	// G=0x32d0d2b5; S=0x32c92e51; converted property
@property(assign) unsigned stringIndex;	// G=0x32d0d1bd; S=0x32d0d1cd; converted property
+ (id)dataLabelWithResources:(id)resources;	// 0x32c47165
- (id)initWithResources:(id)resources;	// 0x32c471a9
// converted property getter: - (id)contentFormat;	// 0x32d0d279
// converted property getter: - (unsigned)contentFormatId;	// 0x32d0d1dd
- (void)dealloc;	// 0x32c49099
// converted property getter: - (id)graphicProperties;	// 0x32d0d17d
// converted property getter: - (bool)isPositionAffineTransform;	// 0x32d0d19d
// converted property getter: - (bool)isShowCategoryName;	// 0x32d0d13d
// converted property getter: - (bool)isShowLeaderLines;	// 0x32d0d12d
// converted property getter: - (bool)isShowLegendKey;	// 0x32d0d16d
// converted property getter: - (bool)isShowPercent;	// 0x32d0d15d
// converted property getter: - (bool)isShowSeriesName;	// 0x32d0d14d
// converted property getter: - (bool)isShowValue;	// 0x32c94869
// converted property getter: - (int)position;	// 0x32d0d11d
// converted property getter: - (double)rotationAngle;	// 0x32d0d1ad
// converted property setter: - (void)setContentFormat:(id)format;	// 0x32d0d1ed
// converted property setter: - (void)setContentFormatId:(unsigned)anId;	// 0x32cbce21
// converted property setter: - (void)setGraphicProperties:(id)properties;	// 0x32c472cd
// converted property setter: - (void)setIsPositionAffineTransform:(bool)transform;	// 0x32d0d18d
// converted property setter: - (void)setPosition:(int)position;	// 0x32c92e41
// converted property setter: - (void)setRotationAngle:(double)angle;	// 0x32c92ee5
// converted property setter: - (void)setShowCategoryName:(bool)name;	// 0x32c4729d
// converted property setter: - (void)setShowLeaderLines:(bool)lines;	// 0x32c4728d
// converted property setter: - (void)setShowLegendKey:(bool)key;	// 0x32c92ddd
// converted property setter: - (void)setShowPercent:(bool)percent;	// 0x32c472ad
// converted property setter: - (void)setShowSeriesName:(bool)name;	// 0x32c92ded
// converted property setter: - (void)setShowValue:(bool)value;	// 0x32c472bd
// converted property setter: - (void)setString:(id)string;	// 0x32c92e51
// converted property setter: - (void)setStringIndex:(unsigned)index;	// 0x32d0d1cd
// converted property getter: - (id)string;	// 0x32d0d2b5
// converted property getter: - (unsigned)stringIndex;	// 0x32d0d1bd
@end
