/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADGraphic.h"
#import "OfficeImport-Structs.h"
#import "OADDrawableContainer.h"

@class CHDPlotArea, CHDLegend, EDWorkbook, EDSheet, OADGraphicProperties, CHDTitle, NSMutableArray, CHDDefaultTextProperties, CHDView3D;

@interface CHDChart : OADGraphic <OADDrawableContainer> {
	EDSheet *mSheet;	// 28 = 0x1c
	int mStyleId;	// 32 = 0x20
	bool mAutoTitleDeleted;	// 36 = 0x24
	bool mPlotVisibleCellsOnly;	// 37 = 0x25
	bool mMSGraph;	// 38 = 0x26
	bool mDirectionChanged;	// 39 = 0x27
	int mDisplayBlankCellsAs;	// 40 = 0x28
	CHDPlotArea *mPlotArea;	// 44 = 0x2c
	CHDView3D *mView3D;	// 48 = 0x30
	CHDTitle *mTitle;	// 52 = 0x34
	CHDLegend *mLegend;	// 56 = 0x38
	EDWorkbook *mExternalData;	// 60 = 0x3c
	OADGraphicProperties *mChartAreaGraphicProperties;	// 64 = 0x40
	OADGraphicProperties *mBackWallGraphicProperties;	// 68 = 0x44
	OADGraphicProperties *mSideWallGraphicProperties;	// 72 = 0x48
	OADGraphicProperties *mFloorGraphicProperties;	// 76 = 0x4c
	CHDDefaultTextProperties *mDefaultTextProperties;	// 80 = 0x50
	int mChartDirection;	// 84 = 0x54
	CGRect mLogicalBounds;	// 88 = 0x58
	NSMutableArray *mDrawables;	// 104 = 0x68
}
@property(assign, getter=isAutoTitleDeleted) bool autoTitleDeleted;	// G=0x3504bc75; S=0x34fd1131; converted property
@property(retain) id backWallGraphicProperties;	// G=0x3504bcd5; S=0x34fcb5f5; converted property
@property(retain) id chartAreaGraphicProperties;	// G=0x34fd6b19; S=0x34fc4a99; converted property
@property(retain) id defaultTextProperties;	// G=0x34fc7de1; S=0x3504bd11; converted property
@property(assign) int direction;	// G=0x34fd0bad; S=0x34fd26bd; converted property
@property(assign, getter=isDirectionChanged) bool directionChanged;	// G=0x3504c2bd; S=0x34fdcdc9; converted property
@property(assign) int displayBlankAs;	// G=0x3504bc9d; S=0x34fc4b15; converted property
@property(retain) id externalData;	// G=0x3504bcc5; S=0x34ffae05; converted property
@property(retain) id floorGraphicProperties;	// G=0x3504bcfd; S=0x34fcc365; converted property
@property(retain) id legend;	// G=0x34fd0001; S=0x34fcd099; converted property
@property(assign) CGRect logicalBounds;	// G=0x3504bd55; S=0x34fc3401; converted property
@property(assign, getter=isMSGraph) bool mSGraph;	// G=0x34fdb011; S=0x3504c2ad; converted property
@property(retain) id plotArea;	// G=0x34fc8a15; S=0x34fd0f35; converted property
@property(assign, getter=isPlotVisibleCellsOnly) bool plotVisibleCellsOnly;	// G=0x3504bc89; S=0x34fc4aed; converted property
@property(retain) id sheet;	// G=0x3504bc65; S=0x34fc2c45; converted property
@property(retain) id sideWallGraphicProperties;	// G=0x3504bce9; S=0x34fcb5b1; converted property
@property(assign) int styleId;	// G=0x34ff4eed; S=0x34fc2c55; converted property
@property(retain) id title;	// G=0x34fd66bd; S=0x34fd10ed; converted property
@property(retain) id view3D;	// G=0x3504bcb1; S=0x34fcd209; converted property
+ (id)binaryEffects:(BOOL)effects;	// 0x34fc4379
- (id)init;	// 0x34fc0501
- (id).cxx_construct;	// 0x34fc04fd
- (void)addChild:(id)child;	// 0x34fd969d
- (void)addChildren:(id)children;	// 0x3504bd9d
// converted property getter: - (id)backWallGraphicProperties;	// 0x3504bcd5
- (unsigned)categoryCount;	// 0x3504c221
// converted property getter: - (id)chartAreaGraphicProperties;	// 0x34fd6b19
- (id)childAtIndex:(unsigned)index;	// 0x3504be21
- (unsigned)childCount;	// 0x3504bd7d
- (id)children;	// 0x3504be41
- (void)dealloc;	// 0x34fdd2dd
- (id)defaultContentFormat;	// 0x3504c151
- (id)defaultDataLabelFont;	// 0x3504c015
- (unsigned)defaultFontIndex;	// 0x35007305
- (id)defaultFontWithResources:(id)resources;	// 0x3504c191
- (int)defaultLabelPosition;	// 0x3504c1e1
- (id)defaultSeriesTitleFont;	// 0x3504c0b1
- (id)defaultTextFont;	// 0x3504bf91
// converted property getter: - (id)defaultTextProperties;	// 0x34fc7de1
- (id)defaultThemeFont;	// 0x3504bea1
// converted property getter: - (int)direction;	// 0x34fd0bad
// converted property getter: - (int)displayBlankAs;	// 0x3504bc9d
// converted property getter: - (id)externalData;	// 0x3504bcc5
// converted property getter: - (id)floorGraphicProperties;	// 0x3504bcfd
- (bool)is3D;	// 0x34ff5b25
// converted property getter: - (bool)isAutoTitleDeleted;	// 0x3504bc75
- (bool)isBinary;	// 0x34fc2e8d
// converted property getter: - (bool)isDirectionChanged;	// 0x3504c2bd
// converted property getter: - (bool)isMSGraph;	// 0x34fdb011
- (bool)isPie;	// 0x34ffa515
// converted property getter: - (bool)isPlotVisibleCellsOnly;	// 0x3504bc89
// converted property getter: - (id)legend;	// 0x34fd0001
// converted property getter: - (CGRect)logicalBounds;	// 0x3504bd55
- (id)mainType;	// 0x34fd6429
// converted property getter: - (id)plotArea;	// 0x34fc8a15
- (id)processors;	// 0x34fce8c5
- (void)replaceChild:(id)child with:(id)with;	// 0x3504be51
- (unsigned)seriesCount;	// 0x34ffa565
// converted property setter: - (void)setAutoTitleDeleted:(bool)deleted;	// 0x34fd1131
// converted property setter: - (void)setBackWallGraphicProperties:(id)properties;	// 0x34fcb5f5
// converted property setter: - (void)setChartAreaGraphicProperties:(id)properties;	// 0x34fc4a99
// converted property setter: - (void)setDefaultTextProperties:(id)properties;	// 0x3504bd11
// converted property setter: - (void)setDirection:(int)direction;	// 0x34fd26bd
// converted property setter: - (void)setDirectionChanged:(bool)changed;	// 0x34fdcdc9
// converted property setter: - (void)setDisplayBlankAs:(int)as;	// 0x34fc4b15
// converted property setter: - (void)setExternalData:(id)data;	// 0x34ffae05
// converted property setter: - (void)setFloorGraphicProperties:(id)properties;	// 0x34fcc365
// converted property setter: - (void)setLegend:(id)legend;	// 0x34fcd099
// converted property setter: - (void)setLogicalBounds:(CGRect)bounds;	// 0x34fc3401
// converted property setter: - (void)setMSGraph:(bool)graph;	// 0x3504c2ad
- (void)setParentTextListStyle:(id)style;	// 0x34ffaf2d
// converted property setter: - (void)setPlotArea:(id)area;	// 0x34fd0f35
// converted property setter: - (void)setPlotVisibleCellsOnly:(bool)only;	// 0x34fc4aed
// converted property setter: - (void)setSheet:(id)sheet;	// 0x34fc2c45
// converted property setter: - (void)setSideWallGraphicProperties:(id)properties;	// 0x34fcb5b1
// converted property setter: - (void)setStyleId:(int)anId;	// 0x34fc2c55
// converted property setter: - (void)setTitle:(id)title;	// 0x34fd10ed
// converted property setter: - (void)setView3D:(id)d;	// 0x34fcd209
// converted property getter: - (id)sheet;	// 0x3504bc65
// converted property getter: - (id)sideWallGraphicProperties;	// 0x3504bce9
// converted property getter: - (int)styleId;	// 0x34ff4eed
- (id)styleMatrix;	// 0x34ff5139
// converted property getter: - (id)title;	// 0x34fd66bd
// converted property getter: - (id)view3D;	// 0x3504bcb1
- (id)workbook;	// 0x34ff5185
@end

