/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIStatusBarComposedData, NSString, UILabel, UIStatusBarLayoutManager;

__attribute__((visibility("hidden")))
@interface UIStatusBarForegroundView : UIView {
@private
	int _foregroundStyle;	// 48 = 0x30
	NSString *_statusString;	// 52 = 0x34
	BOOL _itemIsEnabled[23];	// 56 = 0x38
	UIStatusBarLayoutManager *_layoutManagers[3];	// 80 = 0x50
	UILabel *_doubleHeightLabel;	// 92 = 0x5c
	int _ignoreDataLevel;	// 96 = 0x60
	UIStatusBarComposedData *_pendedData;	// 100 = 0x64
	int _pendedActions;	// 104 = 0x68
	BOOL _performedStyleChangeReflow;	// 108 = 0x6c
}
@property(readonly, assign, nonatomic) int foregroundStyle;	// G=0x3004efb5; @synthesize=_foregroundStyle
- (id)initWithFrame:(CGRect)frame foregroundStyle:(int)style;	// 0x3005fdd9
- (void)_cleanUpAfterDataChange;	// 0x3003f8c5
- (void)_cleanUpAfterSimpleReflow;	// 0x30061f1d
- (void)_computeVisibleItems:(id *)items eitherSideItems:(id)items2;	// 0x30050721
- (void)_reflowItemViewsWithDuration:(double)duration suppressCenterAnimation:(BOOL)animation;	// 0x30050519
- (BOOL)_tryToPlaceItem:(id)placeItem inItemArray:(id)itemArray layoutManager:(id)manager roomRemaining:(float *)remaining allowSwap:(BOOL)swap swappedItem:(id *)item;	// 0x30174b45
- (void)dealloc;	// 0x30195cad
// declared property getter: - (int)foregroundStyle;	// 0x3004efb5
- (BOOL)ignoringData;	// 0x3003dd21
- (void)reflowItemViews:(BOOL)views suppressCenterAnimation:(BOOL)animation;	// 0x30061ed5
- (void)setStatusBarData:(id)data actions:(int)actions animated:(BOOL)animated;	// 0x3003daad
- (void)startIgnoringData;	// 0x3003dd39
- (void)stopIgnoringData:(BOOL)data;	// 0x30040415
@end

