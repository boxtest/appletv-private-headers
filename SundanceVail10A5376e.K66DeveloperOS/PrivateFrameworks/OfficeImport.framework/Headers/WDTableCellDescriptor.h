/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class WDBorder, WDShading;

@interface WDTableCellDescriptor : NSObject {
	WDShading *mShading;	// 4 = 0x4
	WDBorder *mTopBorder;	// 8 = 0x8
	WDBorder *mLeftBorder;	// 12 = 0xc
	WDBorder *mBottomBorder;	// 16 = 0x10
	WDBorder *mRightBorder;	// 20 = 0x14
	WDBorder *mDiagonalUpBorder;	// 24 = 0x18
	WDBorder *mDiagonalDownBorder;	// 28 = 0x1c
	short mWidth;	// 32 = 0x20
	int mWidthType;	// 36 = 0x24
	short mTopMargin;	// 40 = 0x28
	int mTopMarginType;	// 44 = 0x2c
	short mBottomMargin;	// 48 = 0x30
	int mBottomMarginType;	// 52 = 0x34
	short mLeftMargin;	// 56 = 0x38
	int mLeftMarginType;	// 60 = 0x3c
	short mRightMargin;	// 64 = 0x40
	int mRightMarginType;	// 68 = 0x44
	int mVerticalAlignment;	// 72 = 0x48
	unsigned mShadingOverridden : 1;	// 76 = 0x4c
	unsigned mTopBorderOverridden : 1;	// 76 = 0x4c
	unsigned mLeftBorderOverridden : 1;	// 76 = 0x4c
	unsigned mBottomBorderOverridden : 1;	// 76 = 0x4c
	unsigned mRightBorderOverridden : 1;	// 76 = 0x4c
	unsigned mDiagonalUpBorderOverridden : 1;	// 76 = 0x4c
	unsigned mDiagonalDownBorderOverridden : 1;	// 76 = 0x4c
	unsigned mWidthTypeOverridden : 1;	// 76 = 0x4c
	unsigned mTopMarginOverridden : 1;	// 77 = 0x4d
	unsigned mTopMarginTypeOverridden : 1;	// 77 = 0x4d
	unsigned mBottomMarginOverridden : 1;	// 77 = 0x4d
	unsigned mBottomMarginTypeOverridden : 1;	// 77 = 0x4d
	unsigned mLeftMarginOverridden : 1;	// 77 = 0x4d
	unsigned mLeftMarginTypeOverridden : 1;	// 77 = 0x4d
	unsigned mRightMarginOverridden : 1;	// 77 = 0x4d
	unsigned mRightMarginTypeOverridden : 1;	// 77 = 0x4d
	unsigned mVerticalAlignmentOverridden : 1;	// 78 = 0x4e
	unsigned mVerticallyMergedCell : 1;	// 78 = 0x4e
	unsigned mVerticallyMergedCellOverridden : 1;	// 78 = 0x4e
	unsigned mFirstInSetOfVerticallyMergedCells : 1;	// 78 = 0x4e
	unsigned mFirstInSetOfVerticallyMergedCellsOverridden : 1;	// 78 = 0x4e
	unsigned mNoWrap : 1;	// 78 = 0x4e
	unsigned mNoWrapOverridden : 1;	// 78 = 0x4e
}
@property(retain) id bottomBorder;	// G=0x371b3c45; S=0x371b3c55; converted property
@property(assign, getter=isBottomBorderOverridden) BOOL bottomBorderOverridden;	// G=0x371b3c91; S=0x371b3ca5; converted property
@property(assign) short bottomMargin;	// G=0x371b3f49; S=0x371b3f59; converted property
@property(assign, getter=isBottomMarginOverridden) BOOL bottomMarginOverridden;	// G=0x371b3f69; S=0x371b3f7d; converted property
@property(assign) int bottomMarginType;	// G=0x371b3f9d; S=0x371b3fad; converted property
@property(assign, getter=isBottomMarginTypeOverridden) BOOL bottomMarginTypeOverridden;	// G=0x371b3fbd; S=0x371b3fd1; converted property
@property(retain) id diagonalDownBorder;	// G=0x371b3dc5; S=0x371b3dd5; converted property
@property(assign, getter=isDiagonalDownBorderOverridden) BOOL diagonalDownBorderOverridden;	// G=0x371b3e11; S=0x371b3e25; converted property
@property(retain) id diagonalUpBorder;	// G=0x371b3d45; S=0x371b3d55; converted property
@property(assign, getter=isDiagonalUpBorderOverridden) BOOL diagonalUpBorderOverridden;	// G=0x371b3d91; S=0x371b3da5; converted property
@property(assign) BOOL firstInSetOfVerticallyMergedCells;	// G=0x371b41f5; S=0x371b4209; converted property
@property(assign, getter=isFirstInSetOfVerticallyMergedCellsOverridden) BOOL firstInSetOfVerticallyMergedCellsOverridden;	// G=0x371b4229; S=0x371b423d; converted property
@property(retain) id leftBorder;	// G=0x371b3bc5; S=0x371b3bd5; converted property
@property(assign, getter=isLeftBorderOverridden) BOOL leftBorderOverridden;	// G=0x371b3c11; S=0x371b3c25; converted property
@property(assign) short leftMargin;	// G=0x371b3ff1; S=0x371b4001; converted property
@property(assign, getter=isLeftMarginOverridden) BOOL leftMarginOverridden;	// G=0x371b4011; S=0x371b4025; converted property
@property(assign) int leftMarginType;	// G=0x371b4045; S=0x371b4055; converted property
@property(assign, getter=isLeftMarginTypeOverridden) BOOL leftMarginTypeOverridden;	// G=0x371b4065; S=0x371b4079; converted property
@property(assign) BOOL noWrap;	// G=0x371b425d; S=0x371b4271; converted property
@property(assign, getter=isNoWrapOverridden) BOOL noWrapOverridden;	// G=0x371b4291; S=0x371b42a5; converted property
@property(retain) id rightBorder;	// G=0x371b3cc5; S=0x371b3cd5; converted property
@property(assign, getter=isRightBorderOverridden) BOOL rightBorderOverridden;	// G=0x371b3d11; S=0x371b3d25; converted property
@property(assign) short rightMargin;	// G=0x371b4099; S=0x371b40a9; converted property
@property(assign, getter=isRightMarginOverridden) BOOL rightMarginOverridden;	// G=0x371b40b9; S=0x371b40cd; converted property
@property(assign) int rightMarginType;	// G=0x371b40ed; S=0x371b40fd; converted property
@property(assign, getter=isRightMarginTypeOverridden) BOOL rightMarginTypeOverridden;	// G=0x371b410d; S=0x371b4121; converted property
@property(retain) id shading;	// G=0x371b3ac9; S=0x371b3ad9; converted property
@property(assign, getter=isShadingOverridden) BOOL shadingOverridden;	// G=0x371b3b15; S=0x371b3b29; converted property
@property(retain) id topBorder;	// G=0x371b3b45; S=0x371b3b55; converted property
@property(assign, getter=isTopBorderOverridden) BOOL topBorderOverridden;	// G=0x371b3b91; S=0x371b3ba5; converted property
@property(assign) short topMargin;	// G=0x371b3ea5; S=0x371b3eb5; converted property
@property(assign, getter=isTopMarginOverridden) BOOL topMarginOverridden;	// G=0x371b3ec5; S=0x371b3ed9; converted property
@property(assign) int topMarginType;	// G=0x371b3ef5; S=0x371b3f05; converted property
@property(assign, getter=isTopMarginTypeOverridden) BOOL topMarginTypeOverridden;	// G=0x371b3f15; S=0x371b3f29; converted property
@property(assign) int verticalAlignment;	// G=0x371b413d; S=0x371b414d; converted property
@property(assign, getter=isVerticalAlignmentOverridden) BOOL verticalAlignmentOverridden;	// G=0x371b415d; S=0x371b4171; converted property
@property(assign) BOOL verticallyMergedCell;	// G=0x371b418d; S=0x371b41a1; converted property
@property(assign, getter=isVerticallyMergedCellOverridden) BOOL verticallyMergedCellOverridden;	// G=0x371b41c1; S=0x371b41d5; converted property
@property(assign) int widthType;	// G=0x371b3e55; S=0x371b3e65; converted property
@property(assign, getter=isWidthTypeOverridden) BOOL widthTypeOverridden;	// G=0x371b3e75; S=0x371b3e89; converted property
// converted property getter: - (id)bottomBorder;	// 0x371b3c45
// converted property getter: - (short)bottomMargin;	// 0x371b3f49
// converted property getter: - (int)bottomMarginType;	// 0x371b3f9d
// converted property getter: - (id)diagonalDownBorder;	// 0x371b3dc5
// converted property getter: - (id)diagonalUpBorder;	// 0x371b3d45
// converted property getter: - (BOOL)firstInSetOfVerticallyMergedCells;	// 0x371b41f5
// converted property getter: - (BOOL)isBottomBorderOverridden;	// 0x371b3c91
// converted property getter: - (BOOL)isBottomMarginOverridden;	// 0x371b3f69
// converted property getter: - (BOOL)isBottomMarginTypeOverridden;	// 0x371b3fbd
// converted property getter: - (BOOL)isDiagonalDownBorderOverridden;	// 0x371b3e11
// converted property getter: - (BOOL)isDiagonalUpBorderOverridden;	// 0x371b3d91
// converted property getter: - (BOOL)isFirstInSetOfVerticallyMergedCellsOverridden;	// 0x371b4229
// converted property getter: - (BOOL)isLeftBorderOverridden;	// 0x371b3c11
// converted property getter: - (BOOL)isLeftMarginOverridden;	// 0x371b4011
// converted property getter: - (BOOL)isLeftMarginTypeOverridden;	// 0x371b4065
// converted property getter: - (BOOL)isNoWrapOverridden;	// 0x371b4291
// converted property getter: - (BOOL)isRightBorderOverridden;	// 0x371b3d11
// converted property getter: - (BOOL)isRightMarginOverridden;	// 0x371b40b9
// converted property getter: - (BOOL)isRightMarginTypeOverridden;	// 0x371b410d
// converted property getter: - (BOOL)isShadingOverridden;	// 0x371b3b15
// converted property getter: - (BOOL)isTopBorderOverridden;	// 0x371b3b91
// converted property getter: - (BOOL)isTopMarginOverridden;	// 0x371b3ec5
// converted property getter: - (BOOL)isTopMarginTypeOverridden;	// 0x371b3f15
// converted property getter: - (BOOL)isVerticalAlignmentOverridden;	// 0x371b415d
// converted property getter: - (BOOL)isVerticallyMergedCellOverridden;	// 0x371b41c1
// converted property getter: - (BOOL)isWidthTypeOverridden;	// 0x371b3e75
// converted property getter: - (id)leftBorder;	// 0x371b3bc5
// converted property getter: - (short)leftMargin;	// 0x371b3ff1
// converted property getter: - (int)leftMarginType;	// 0x371b4045
// converted property getter: - (BOOL)noWrap;	// 0x371b425d
// converted property getter: - (id)rightBorder;	// 0x371b3cc5
// converted property getter: - (short)rightMargin;	// 0x371b4099
// converted property getter: - (int)rightMarginType;	// 0x371b40ed
// converted property setter: - (void)setBottomBorder:(id)border;	// 0x371b3c55
// converted property setter: - (void)setBottomBorderOverridden:(BOOL)overridden;	// 0x371b3ca5
// converted property setter: - (void)setBottomMargin:(short)margin;	// 0x371b3f59
// converted property setter: - (void)setBottomMarginOverridden:(BOOL)overridden;	// 0x371b3f7d
// converted property setter: - (void)setBottomMarginType:(int)type;	// 0x371b3fad
// converted property setter: - (void)setBottomMarginTypeOverridden:(BOOL)overridden;	// 0x371b3fd1
// converted property setter: - (void)setDiagonalDownBorder:(id)border;	// 0x371b3dd5
// converted property setter: - (void)setDiagonalDownBorderOverridden:(BOOL)overridden;	// 0x371b3e25
// converted property setter: - (void)setDiagonalUpBorder:(id)border;	// 0x371b3d55
// converted property setter: - (void)setDiagonalUpBorderOverridden:(BOOL)overridden;	// 0x371b3da5
// converted property setter: - (void)setFirstInSetOfVerticallyMergedCells:(BOOL)verticallyMergedCells;	// 0x371b4209
// converted property setter: - (void)setFirstInSetOfVerticallyMergedCellsOverridden:(BOOL)verticallyMergedCellsOverridden;	// 0x371b423d
// converted property setter: - (void)setLeftBorder:(id)border;	// 0x371b3bd5
// converted property setter: - (void)setLeftBorderOverridden:(BOOL)overridden;	// 0x371b3c25
// converted property setter: - (void)setLeftMargin:(short)margin;	// 0x371b4001
// converted property setter: - (void)setLeftMarginOverridden:(BOOL)overridden;	// 0x371b4025
// converted property setter: - (void)setLeftMarginType:(int)type;	// 0x371b4055
// converted property setter: - (void)setLeftMarginTypeOverridden:(BOOL)overridden;	// 0x371b4079
// converted property setter: - (void)setNoWrap:(BOOL)wrap;	// 0x371b4271
// converted property setter: - (void)setNoWrapOverridden:(BOOL)overridden;	// 0x371b42a5
// converted property setter: - (void)setRightBorder:(id)border;	// 0x371b3cd5
// converted property setter: - (void)setRightBorderOverridden:(BOOL)overridden;	// 0x371b3d25
// converted property setter: - (void)setRightMargin:(short)margin;	// 0x371b40a9
// converted property setter: - (void)setRightMarginOverridden:(BOOL)overridden;	// 0x371b40cd
// converted property setter: - (void)setRightMarginType:(int)type;	// 0x371b40fd
// converted property setter: - (void)setRightMarginTypeOverridden:(BOOL)overridden;	// 0x371b4121
// converted property setter: - (void)setShading:(id)shading;	// 0x371b3ad9
// converted property setter: - (void)setShadingOverridden:(BOOL)overridden;	// 0x371b3b29
// converted property setter: - (void)setTopBorder:(id)border;	// 0x371b3b55
// converted property setter: - (void)setTopBorderOverridden:(BOOL)overridden;	// 0x371b3ba5
// converted property setter: - (void)setTopMargin:(short)margin;	// 0x371b3eb5
// converted property setter: - (void)setTopMarginOverridden:(BOOL)overridden;	// 0x371b3ed9
// converted property setter: - (void)setTopMarginType:(int)type;	// 0x371b3f05
// converted property setter: - (void)setTopMarginTypeOverridden:(BOOL)overridden;	// 0x371b3f29
// converted property setter: - (void)setVerticalAlignment:(int)alignment;	// 0x371b414d
// converted property setter: - (void)setVerticalAlignmentOverridden:(BOOL)overridden;	// 0x371b4171
// converted property setter: - (void)setVerticallyMergedCell:(BOOL)cell;	// 0x371b41a1
// converted property setter: - (void)setVerticallyMergedCellOverridden:(BOOL)overridden;	// 0x371b41d5
- (void)setWidth:(short)width;	// 0x371b3e45
// converted property setter: - (void)setWidthType:(int)type;	// 0x371b3e65
// converted property setter: - (void)setWidthTypeOverridden:(BOOL)overridden;	// 0x371b3e89
// converted property getter: - (id)shading;	// 0x371b3ac9
// converted property getter: - (id)topBorder;	// 0x371b3b45
// converted property getter: - (short)topMargin;	// 0x371b3ea5
// converted property getter: - (int)topMarginType;	// 0x371b3ef5
// converted property getter: - (int)verticalAlignment;	// 0x371b413d
// converted property getter: - (BOOL)verticallyMergedCell;	// 0x371b418d
// converted property getter: - (int)widthType;	// 0x371b3e55
@end
