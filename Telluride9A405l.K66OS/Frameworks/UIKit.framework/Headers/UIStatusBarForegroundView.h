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
@property(readonly, assign, nonatomic) int foregroundStyle;	// G=0x32c9afb5; @synthesize=_foregroundStyle
- (id)initWithFrame:(CGRect)frame foregroundStyle:(int)style;	// 0x32cabdd9
- (void)_cleanUpAfterDataChange;	// 0x32c8b8c5
- (void)_cleanUpAfterSimpleReflow;	// 0x32cadf1d
- (void)_computeVisibleItems:(id *)items eitherSideItems:(id)items2;	// 0x32c9c721
- (void)_reflowItemViewsWithDuration:(double)duration suppressCenterAnimation:(BOOL)animation;	// 0x32c9c519
- (BOOL)_tryToPlaceItem:(id)placeItem inItemArray:(id)itemArray layoutManager:(id)manager roomRemaining:(float *)remaining allowSwap:(BOOL)swap swappedItem:(id *)item;	// 0x32dc0b45
- (void)dealloc;	// 0x32de1cad
// declared property getter: - (int)foregroundStyle;	// 0x32c9afb5
- (BOOL)ignoringData;	// 0x32c89d21
- (void)reflowItemViews:(BOOL)views suppressCenterAnimation:(BOOL)animation;	// 0x32caded5
- (void)setStatusBarData:(id)data actions:(int)actions animated:(BOOL)animated;	// 0x32c89aad
- (void)startIgnoringData;	// 0x32c89d39
- (void)stopIgnoringData:(BOOL)data;	// 0x32c8c415
@end

