/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UITableViewRowData, UITableView, NSMutableArray, NSArray, NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface _UITableViewUpdateSupport : NSObject {
@private
	int oldSection;	// 4 = 0x4
	int newSection;	// 8 = 0x8
	int oldGlobalRow;	// 12 = 0xc
	int newGlobalRow;	// 16 = 0x10
	UITableView *tableView;	// 20 = 0x14
	NSRange visibleRows;	// 24 = 0x18
	NSArray *updateItems;	// 32 = 0x20
	UITableViewRowData *oldRowData;	// 36 = 0x24
	UITableViewRowData *newRowData;	// 40 = 0x28
	NSRange oldRowRange;	// 44 = 0x2c
	NSRange newRowRange;	// 52 = 0x34
	NSMutableIndexSet *rows;	// 60 = 0x3c
	NSMutableIndexSet *movedRows;	// 64 = 0x40
	NSMutableIndexSet *movedSections;	// 68 = 0x44
	CGRect oldTableViewVisibleBounds;	// 72 = 0x48
	CGRect newTableViewVisibleBounds;	// 88 = 0x58
	CGRect tableViewVisibleBoundsUnion;	// 104 = 0x68
	float tableViewVisibleBoundsOffset;	// 120 = 0x78
	int oldSectionCount;	// 124 = 0x7c
	int newSectionCount;	// 128 = 0x80
	int *oldSectionMap;	// 132 = 0x84
	int *newSectionMap;	// 136 = 0x88
	int oldGlobalRowCount;	// 140 = 0x8c
	int newGlobalRowCount;	// 144 = 0x90
	int *oldGlobalRowMap;	// 148 = 0x94
	int *newGlobalRowMap;	// 152 = 0x98
	id *animatedCells;	// 156 = 0x9c
	id *animatedHeaders;	// 160 = 0xa0
	id *animatedFooters;	// 164 = 0xa4
	int globalReorderingRow;	// 168 = 0xa8
	id _context;	// 172 = 0xac
	NSMutableArray *viewAnimations;	// 176 = 0xb0
	NSMutableArray *deletedSections;	// 180 = 0xb4
	NSMutableArray *insertedSections;	// 184 = 0xb8
	NSMutableArray *gaps;	// 188 = 0xbc
}
- (id)initWithTableView:(id)tableView updateItems:(id)items oldRowData:(id)data newRowData:(id)data4 oldRowRange:(NSRange)range newRowRange:(NSRange)range6 context:(id)context;	// 0x32d2e3a1
- (void)_addBottomShadowViewViewForViewAnimation:(id)viewAnimation;	// 0x32f0d53d
- (void)_computeAutomaticAnimationTypes;	// 0x32d30ee9
- (void)_computeGaps;	// 0x32f0cdb9
- (void)_computeRowUpdates;	// 0x32d2ecb1
- (void)_computeSectionUpdates;	// 0x32d2e539
- (void)_computeVisibleBounds;	// 0x32d30865
- (id)_imageViewForView:(id)view;	// 0x32da8a49
- (BOOL)_isReloadSectionUpdate;	// 0x32da897d
- (void)_setupAnimationForReorderingRow;	// 0x32d32349
- (void)_setupAnimationForTableFooter;	// 0x32d3671d
- (void)_setupAnimationForTableHeader;	// 0x32d364b9
- (void)_setupAnimationStructures;	// 0x32d30dc1
- (void)_setupAnimations;	// 0x32d3075d
- (void)_setupAnimationsForDeletedCells;	// 0x32d36b61
- (void)_setupAnimationsForDeletedHeadersAndFooters;	// 0x32d38145
- (void)_setupAnimationsForExistingHeadersAndFooters;	// 0x32d34919
- (void)_setupAnimationsForExistingOffscreenCells;	// 0x32d34455
- (void)_setupAnimationsForExistingVisibleCells;	// 0x32d31da5
- (void)_setupAnimationsForInsertedHeadersAndFooters;	// 0x32d33bad
- (void)_setupAnimationsForNewlyInsertedCells;	// 0x32d324c1
- (void)_setupDeleteAnimationForFooterInSection:(int)section withTargetRect:(CGRect)targetRect forUpdateItem:(id)updateItem;	// 0x32da71e1
- (void)_setupDeleteAnimationForHeaderInSection:(int)section withTargetRect:(CGRect)targetRect forUpdateItem:(id)updateItem;	// 0x32da6dfd
- (void)_setupInsertAnimationForFooterInSection:(int)section withTargetRect:(CGRect)targetRect forUpdateItem:(id)updateItem;	// 0x32da6981
- (void)_setupInsertAnimationForHeaderInSection:(int)section withTargetRect:(CGRect)targetRect forUpdateItem:(id)updateItem;	// 0x32da654d
- (void)_validateAnimatedCells;	// 0x32f0cccd
- (void)dealloc;	// 0x32d38eb9
@end

