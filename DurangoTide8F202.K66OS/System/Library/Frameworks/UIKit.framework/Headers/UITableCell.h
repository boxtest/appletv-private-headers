/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class _UITableCellTransientData;

@interface UITableCell : UIView {
@private
	_UITableCellTransientData *_transientData;	// 44 = 0x2c
	float _rightMargin;	// 48 = 0x30
	struct {
		unsigned dontShowSelection : 1;
		unsigned showDisclosure : 1;
		unsigned showTopSeparator : 1;
		unsigned separatorStyle : 3;
		unsigned selectionStyle : 3;
		unsigned hideDisclosure : 1;
		unsigned isBeingDeleted : 1;
		unsigned disclosureClickable : 1;
		unsigned selectionFadeFraction : 11;
		unsigned disclosureStyle : 1;
		unsigned showingRemoveControl : 1;
		unsigned alignment : 3;
		unsigned showDisclosureWhenReordering : 1;
		unsigned fadeDisclosure : 1;
		unsigned reserved : 2;
	} _tableCellFlags;	// 52 = 0x34
	UIView *_disclosureView;	// 56 = 0x38
}
@property(assign) int disclosureStyle;	// G=0x30705489; S=0x3070705d; converted property
@property(retain) UIView *disclosureView;	// G=0x30705521; S=0x30705531; converted property
@property(assign, getter=isSelected) BOOL selected;	// G=0x30705425; S=0x306549d1; converted property
@property(assign) int separatorStyle;	// G=0x3070549d; S=0x30654bc5; converted property
@property(assign) BOOL showDisclosure;	// G=0x30654cfd; S=0x30706241; converted property
@property(assign) BOOL showDisclosureWhenReordering;	// G=0x30705509; S=0x307054ed; converted property
@property(assign) BOOL showSelection;	// G=0x307054cd; S=0x30653c2d; converted property
- (id)_createDisclosureView;	// 0x30705a61
- (void)_deselectWithFlashCount:(int)flashCount duration:(double)duration;	// 0x30706259
- (id)_disclosureView;	// 0x30705541
- (void)_finishedFadingGrabber:(id)grabber finished:(BOOL)finished;	// 0x30706169
- (void)_grabberBeganReorder:(id)reorder;	// 0x30706141
- (void)_grabberDragged:(id)dragged yDelta:(float)delta;	// 0x30706e25
- (void)_grabberReleased:(id)released;	// 0x30706119
- (id)_grabberView;	// 0x3065709d
- (BOOL)_isReordering;	// 0x30656db5
- (void)_layoutSubviewsAnimated:(BOOL)animated;	// 0x30705bf5
- (void)_releaseGrabber;	// 0x3065b089
- (void)_releaseRemoveControl;	// 0x30706079
- (void)_setDisclosureHidden:(BOOL)hidden;	// 0x30705ec9
- (void)_setDrawsTopSeparator:(BOOL)separator;	// 0x30705a0d
- (void)_setGrabberHidden:(BOOL)hidden;	// 0x30705e31
- (void)_setRemoveCharge:(float)charge;	// 0x30654fad
- (void)_setRightMargin:(float)margin;	// 0x30705c8d
- (void)_setSelectionFadeFraction:(float)fraction;	// 0x30706d21
- (void)_setShowIndentSpacer:(BOOL)spacer animated:(BOOL)animated;	// 0x3065af25
- (BOOL)_shouldTryPromoteDescendantToFirstResponder;	// 0x30653ea9
- (void)_showDeleteOrInsertion:(BOOL)insertion withDisclosure:(BOOL)disclosure animated:(BOOL)animated isDelete:(BOOL)aDelete andRemoveConfirmation:(BOOL)confirmation;	// 0x30654d11
- (void)_uiRemoveControlMinusButtonHideAnimationDone:(id)done;	// 0x30705bb9
- (void)_willBeDeleted;	// 0x30705b81
- (BOOL)cancelMouseTracking;	// 0x307061a1
- (BOOL)cancelTouchTracking;	// 0x3070617d
- (CGRect)contentBounds;	// 0x30656e6d
- (id)createInsertControl;	// 0x30705f9d
- (id)createRemoveControl;	// 0x30705fc5
- (void)dealloc;	// 0x30660dd1
- (id)disclosureImage;	// 0x307064b9
- (id)disclosurePressedImage;	// 0x30706411
- (float)disclosureRightMargin;	// 0x307054e5
// converted property getter: - (int)disclosureStyle;	// 0x30705489
// converted property getter: - (id)disclosureView;	// 0x30705521
- (void)drawBackgroundInRect:(CGRect)rect withFade:(float)fade;	// 0x30657bbd
- (void)drawContentInRect:(CGRect)rect selected:(BOOL)selected;	// 0x30657c99
- (void)drawRect:(CGRect)rect;	// 0x30657a45
- (void)drawSeparatorInRect:(CGRect)rect;	// 0x30657b59
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x30658d85
- (void)insertControl:(id)control shouldInsertWithTarget:(id)target;	// 0x30705ad1
- (BOOL)isAtLeastHalfSelected;	// 0x307053c9
- (BOOL)isRemoveControlVisible;	// 0x30705559
- (BOOL)isReorderingEnabled;	// 0x3065584d
// converted property getter: - (BOOL)isSelected;	// 0x30705425
- (void)layoutSubviews;	// 0x30656bed
- (float)removeButtonAnimationDuration;	// 0x30705551
- (id)removeControl;	// 0x30654fd5
- (void)removeControl:(id)control didRemoveTarget:(id)target;	// 0x30705af9
- (BOOL)removeControl:(id)control shouldRemoveTarget:(id)target;	// 0x30705b59
- (void)removeControl:(id)control willRemoveTarget:(id)target;	// 0x30705b21
- (void)removeControlWillHideRemoveConfirmation:(id)removeControl;	// 0x30705cb1
- (void)removeControlWillShowRemoveConfirmation:(id)removeControl;	// 0x30705d79
- (void)removeFromSuperview;	// 0x3065ae65
- (float)selectionPercent;	// 0x307053f1
// converted property getter: - (int)separatorStyle;	// 0x3070549d
- (void)setAlpha:(float)alpha;	// 0x30706935
- (void)setDisclosureClickable:(BOOL)clickable;	// 0x3070602d
// converted property setter: - (void)setDisclosureStyle:(int)style;	// 0x3070705d
- (void)setDisclosureStyleNoUpdate:(int)update;	// 0x3070546d
// converted property setter: - (void)setDisclosureView:(id)view;	// 0x30705531
- (void)setEnableReordering:(BOOL)reordering animated:(BOOL)animated;	// 0x30654ff5
// converted property setter: - (void)setSelected:(BOOL)selected;	// 0x306549d1
- (void)setSelected:(BOOL)selected withFade:(BOOL)fade;	// 0x306549e9
- (void)setSelectionStyle:(int)style;	// 0x307061c5
// converted property setter: - (void)setSeparatorStyle:(int)style;	// 0x30654bc5
- (void)setSeparatorStyleOnly:(int)only;	// 0x307054b1
// converted property setter: - (void)setShowDisclosure:(BOOL)disclosure;	// 0x30706241
- (void)setShowDisclosure:(BOOL)disclosure animated:(BOOL)animated;	// 0x3070764d
// converted property setter: - (void)setShowDisclosureWhenReordering:(BOOL)reordering;	// 0x307054ed
// converted property setter: - (void)setShowSelection:(BOOL)selection;	// 0x30653c2d
- (void)setShowSelectionNoRedisplay:(BOOL)redisplay;	// 0x30705449
// converted property getter: - (BOOL)showDisclosure;	// 0x30654cfd
// converted property getter: - (BOOL)showDisclosureWhenReordering;	// 0x30705509
// converted property getter: - (BOOL)showSelection;	// 0x307054cd
- (void)updateHighlightColors;	// 0x307053c5
@end

