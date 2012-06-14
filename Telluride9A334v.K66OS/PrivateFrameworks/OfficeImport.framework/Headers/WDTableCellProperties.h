/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class WDDocument;

__attribute__((visibility("hidden")))
@interface WDTableCellProperties : NSObject {
@private
	short mWidth;	// 4 = 0x4
	short mPosition;	// 6 = 0x6
	unsigned mOriginal : 1;	// 8 = 0x8
	unsigned mTracked : 1;	// 8 = 0x8
	unsigned mResolved : 1;	// 8 = 0x8
	XXStruct_UT9PZB mOriginalProperties;	// 12 = 0xc
	XXStruct_UT9PZB mTrackedProperties;	// 128 = 0x80
	WDDocument *mDocument;	// 244 = 0xf4
}
@property(assign) short bottomMargin;	// G=0x357775ed; S=0x356d8b95; converted property
@property(assign) int bottomMarginType;	// G=0x35777739; S=0x356d8be9; converted property
@property(assign) int deleted;	// G=0x35777f5d; S=0x35777fed; converted property
@property(retain) id deletionDate;	// G=0x35778911; S=0x35779079; converted property
@property(retain) id editDate;	// G=0x35778a3d; S=0x35778fb1; converted property
@property(assign) int edited;	// G=0x357780f9; S=0x35778189; converted property
@property(assign) BOOL firstInSetOfVerticallyMergedCells;	// G=0x35777c61; S=0x35637009; converted property
@property(retain) id formattingChangeDate;	// G=0x35778b85; S=0x35778ee9; converted property
@property(assign) int formattingChanged;	// G=0x35778295; S=0x35778325; converted property
@property(assign) unsigned short indexToAuthorIDOfDeletion;	// G=0x35778431; S=0x357784c5; converted property
@property(assign) unsigned short indexToAuthorIDOfEdit;	// G=0x357785d1; S=0x35778665; converted property
@property(assign) unsigned short indexToAuthorIDOfFormattingChange;	// G=0x35778771; S=0x35778805; converted property
@property(assign) short leftMargin;	// G=0x35628c65; S=0x35621edd; converted property
@property(assign) int leftMarginType;	// G=0x35777881; S=0x356d88ed; converted property
@property(assign) BOOL noWrap;	// G=0x35777db1; S=0x35777e49; converted property
@property(assign) short position;	// G=0x35776de1; S=0x35621ecd; converted property
@property(assign) int resolveMode;	// G=0x35776df1; S=0x35621a29; converted property
@property(assign) short rightMargin;	// G=0x35628db1; S=0x35621f31; converted property
@property(assign) int rightMarginType;	// G=0x357779c9; S=0x356d8941; converted property
@property(assign) short topMargin;	// G=0x35777359; S=0x356d8aed; converted property
@property(assign) int topMarginType;	// G=0x357774a5; S=0x356d8b41; converted property
@property(assign) int verticalAlignment;	// G=0x356376bd; S=0x35636f59; converted property
@property(assign) BOOL verticallyMergedCell;	// G=0x35777b11; S=0x35636fad; converted property
@property(assign) short width;	// G=0x35627111; S=0x35621f85; converted property
@property(assign) int widthType;	// G=0x35627081; S=0x35622189; converted property
- (id)init;	// 0x35630c59
- (id)initWithDocument:(id)document;	// 0x35621595
- (void)addProperties:(id)properties;	// 0x35779201
- (void)addPropertiesValues:(XXStruct_py1o6D *)values to:(XXStruct_py1o6D *)to;	// 0x35779245
- (id)bottomBorder;	// 0x3563759d
// converted property getter: - (short)bottomMargin;	// 0x357775ed
// converted property getter: - (int)bottomMarginType;	// 0x35777739
- (void)clearShading;	// 0x35779139
- (id)copyWithZone:(NSZone *)zone;	// 0x35778ccd
- (void)dealloc;	// 0x3558412d
// converted property getter: - (int)deleted;	// 0x35777f5d
// converted property getter: - (id)deletionDate;	// 0x35778911
- (id)diagonalDownBorder;	// 0x35776f81
- (id)diagonalUpBorder;	// 0x35776e39
- (id)document;	// 0x35776dd1
// converted property getter: - (id)editDate;	// 0x35778a3d
// converted property getter: - (int)edited;	// 0x357780f9
// converted property getter: - (BOOL)firstInSetOfVerticallyMergedCells;	// 0x35777c61
// converted property getter: - (id)formattingChangeDate;	// 0x35778b85
// converted property getter: - (int)formattingChanged;	// 0x35778295
// converted property getter: - (unsigned short)indexToAuthorIDOfDeletion;	// 0x35778431
// converted property getter: - (unsigned short)indexToAuthorIDOfEdit;	// 0x357785d1
// converted property getter: - (unsigned short)indexToAuthorIDOfFormattingChange;	// 0x35778771
- (id)insideHorizontalBorder;	// 0x357770c9
- (id)insideVerticalBorder;	// 0x35777211
- (BOOL)isBottomBorderOverridden;	// 0x35628985
- (BOOL)isBottomMarginOverridden;	// 0x35777681
- (BOOL)isBottomMarginTypeOverridden;	// 0x357777c9
- (BOOL)isDeletedOverridden;	// 0x35778041
- (BOOL)isDeletionDateOverridden;	// 0x3577899d
- (BOOL)isDiagonalDownBorderOverridden;	// 0x35777011
- (BOOL)isDiagonalUpBorderOverridden;	// 0x35776ec9
- (BOOL)isEditDateOverridden;	// 0x35778acd
- (BOOL)isEditedOverridden;	// 0x357781dd
- (BOOL)isFirstInSetOfVerticallyMergedCellsOverridden;	// 0x35777cf9
- (BOOL)isFormattingChangeDateOverridden;	// 0x35778c15
- (BOOL)isFormattingChangedOverridden;	// 0x35778379
- (BOOL)isIndexToAuthorIDOfDeletionOverridden;	// 0x35778519
- (BOOL)isIndexToAuthorIDOfEditOverridden;	// 0x357786b9
- (BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;	// 0x35778859
- (BOOL)isInsideHorizontalBorderOverridden;	// 0x35777159
- (BOOL)isInsideVerticalBorderOverridden;	// 0x357772a1
- (BOOL)isLeftBorderOverridden;	// 0x356288cd
- (BOOL)isLeftMarginOverridden;	// 0x35628bad
- (BOOL)isLeftMarginTypeOverridden;	// 0x35777911
- (BOOL)isNoWrapOverridden;	// 0x35777ea5
- (BOOL)isRightBorderOverridden;	// 0x35628a3d
- (BOOL)isRightMarginOverridden;	// 0x35628cf9
- (BOOL)isRightMarginTypeOverridden;	// 0x35777a59
- (BOOL)isShadingOverridden;	// 0x35628e45
- (BOOL)isTopBorderOverridden;	// 0x35628815
- (BOOL)isTopMarginOverridden;	// 0x357773ed
- (BOOL)isTopMarginTypeOverridden;	// 0x35777535
- (BOOL)isVerticalAlignmentOverridden;	// 0x35628af5
- (BOOL)isVerticallyMergedCellOverridden;	// 0x35777ba9
- (BOOL)isWidthTypeOverridden;	// 0x35626fc9
- (id)leftBorder;	// 0x3563750d
// converted property getter: - (short)leftMargin;	// 0x35628c65
// converted property getter: - (int)leftMarginType;	// 0x35777881
- (id)mutableBottomBorder;	// 0x35636dc1
- (id)mutableDiagonalDownBorder;	// 0x356e16d9
- (id)mutableDiagonalUpBorder;	// 0x356e160d
- (id)mutableInsideHorizontalBorder;	// 0x356b8871
- (id)mutableInsideVerticalBorder;	// 0x356b893d
- (id)mutableLeftBorder;	// 0x35636cf5
- (id)mutableRightBorder;	// 0x35636e8d
- (id)mutableShading;	// 0x356a3195
- (id)mutableTopBorder;	// 0x35636c29
// converted property getter: - (BOOL)noWrap;	// 0x35777db1
- (void)originalToTracked;	// 0x357791c5
// converted property getter: - (short)position;	// 0x35776de1
// converted property getter: - (int)resolveMode;	// 0x35776df1
- (id)rightBorder;	// 0x3563762d
// converted property getter: - (short)rightMargin;	// 0x35628db1
// converted property getter: - (int)rightMarginType;	// 0x357779c9
// converted property setter: - (void)setBottomMargin:(short)margin;	// 0x356d8b95
// converted property setter: - (void)setBottomMarginType:(int)type;	// 0x356d8be9
// converted property setter: - (void)setDeleted:(int)deleted;	// 0x35777fed
// converted property setter: - (void)setDeletionDate:(id)date;	// 0x35779079
// converted property setter: - (void)setEditDate:(id)date;	// 0x35778fb1
// converted property setter: - (void)setEdited:(int)edited;	// 0x35778189
// converted property setter: - (void)setFirstInSetOfVerticallyMergedCells:(BOOL)verticallyMergedCells;	// 0x35637009
// converted property setter: - (void)setFormattingChangeDate:(id)date;	// 0x35778ee9
// converted property setter: - (void)setFormattingChanged:(int)changed;	// 0x35778325
// converted property setter: - (void)setIndexToAuthorIDOfDeletion:(unsigned short)deletion;	// 0x357784c5
// converted property setter: - (void)setIndexToAuthorIDOfEdit:(unsigned short)edit;	// 0x35778665
// converted property setter: - (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)formattingChange;	// 0x35778805
// converted property setter: - (void)setLeftMargin:(short)margin;	// 0x35621edd
// converted property setter: - (void)setLeftMarginType:(int)type;	// 0x356d88ed
// converted property setter: - (void)setNoWrap:(BOOL)wrap;	// 0x35777e49
// converted property setter: - (void)setPosition:(short)position;	// 0x35621ecd
// converted property setter: - (void)setResolveMode:(int)mode;	// 0x35621a29
// converted property setter: - (void)setRightMargin:(short)margin;	// 0x35621f31
// converted property setter: - (void)setRightMarginType:(int)type;	// 0x356d8941
// converted property setter: - (void)setTopMargin:(short)margin;	// 0x356d8aed
// converted property setter: - (void)setTopMarginType:(int)type;	// 0x356d8b41
// converted property setter: - (void)setVerticalAlignment:(int)alignment;	// 0x35636f59
// converted property setter: - (void)setVerticallyMergedCell:(BOOL)cell;	// 0x35636fad
// converted property setter: - (void)setWidth:(short)width;	// 0x35621f85
// converted property setter: - (void)setWidthType:(int)type;	// 0x35622189
- (id)shading;	// 0x356a3271
- (id)topBorder;	// 0x3563747d
// converted property getter: - (short)topMargin;	// 0x35777359
// converted property getter: - (int)topMarginType;	// 0x357774a5
// converted property getter: - (int)verticalAlignment;	// 0x356376bd
// converted property getter: - (BOOL)verticallyMergedCell;	// 0x35777b11
// converted property getter: - (short)width;	// 0x35627111
// converted property getter: - (int)widthType;	// 0x35627081
@end
