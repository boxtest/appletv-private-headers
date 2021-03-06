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
	_UITableCellTransientData *_transientData;	// 48 = 0x30
	float _rightMargin;	// 52 = 0x34
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
	} _tableCellFlags;	// 56 = 0x38
	UIView *_disclosureView;	// 60 = 0x3c
}
@property(assign) int disclosureStyle;	// G=0x32e4a999; S=0x32e4a785; converted property
@property(retain) UIView *disclosureView;	// G=0x32e4c2ad; S=0x32e4c2bd; converted property
@property(assign, getter=isSelected) BOOL selected;	// G=0x32e4a631; S=0x32e4a61d; converted property
@property(assign) int separatorStyle;	// G=0x32e4a9ad; S=0x32e4a6cd; converted property
@property(assign) BOOL showDisclosure;	// G=0x32e4a9f1; S=0x32e4a71d; converted property
@property(assign) BOOL showDisclosureWhenReordering;	// G=0x32e4ae81; S=0x32e4ae69; converted property
@property(assign) BOOL showSelection;	// G=0x32e4a9d9; S=0x32e4a651; converted property
- (id)_createDisclosureView;	// 0x32e4c8c5
- (void)_deselectWithFlashCount:(int)flashCount duration:(double)duration;	// 0x32e4a53d
- (id)_disclosureView;	// 0x32e4c2cd
- (void)_finishedFadingGrabber:(id)grabber finished:(BOOL)finished;	// 0x32e4ae29
- (void)_grabberBeganReorder:(id)reorder;	// 0x32e4b7e9
- (void)_grabberDragged:(id)dragged yDelta:(float)delta;	// 0x32e4b819
- (void)_grabberReleased:(id)released;	// 0x32e4b981
- (id)_grabberView;	// 0x32e4abf1
- (BOOL)_isReordering;	// 0x32e4abc9
- (void)_layoutSubviewsAnimated:(BOOL)animated;	// 0x32e4c2e9
- (void)_releaseGrabber;	// 0x32e4ad51
- (void)_releaseRemoveControl;	// 0x32e4bcfd
- (void)_setDisclosureHidden:(BOOL)hidden;	// 0x32e4bf71
- (void)_setDrawsTopSeparator:(BOOL)separator;	// 0x32e4d0e1
- (void)_setGrabberHidden:(BOOL)hidden;	// 0x32e4c03d
- (void)_setRemoveCharge:(float)charge;	// 0x32e4d0b5
- (void)_setRightMargin:(float)margin;	// 0x32e4c28d
- (void)_setSelectionFadeFraction:(float)fraction;	// 0x32e4d2c5
- (void)_setShowIndentSpacer:(BOOL)spacer animated:(BOOL)animated;	// 0x32e4c391
- (BOOL)_shouldTryPromoteDescendantToFirstResponder;	// 0x32e4d2c1
- (void)_showDeleteOrInsertion:(BOOL)insertion withDisclosure:(BOOL)disclosure animated:(BOOL)animated isDelete:(BOOL)aDelete andRemoveConfirmation:(BOOL)confirmation;	// 0x32e4c4e1
- (void)_uiRemoveControlMinusButtonHideAnimationDone:(id)done;	// 0x32e4c779
- (void)_willBeDeleted;	// 0x32e4c7bd
- (BOOL)cancelMouseTracking;	// 0x32e4ab79
- (BOOL)cancelTouchTracking;	// 0x32e4aba1
- (CGRect)contentBounds;	// 0x32e4c93d
- (id)createInsertControl;	// 0x32e4bf41
- (id)createRemoveControl;	// 0x32e4bec9
- (void)dealloc;	// 0x32e4a1bd
- (id)disclosureImage;	// 0x32e4a06d
- (id)disclosurePressedImage;	// 0x32e4a115
- (float)disclosureRightMargin;	// 0x32e4ae39
// converted property getter: - (int)disclosureStyle;	// 0x32e4a999
// converted property getter: - (id)disclosureView;	// 0x32e4c2ad
- (void)drawBackgroundInRect:(CGRect)rect withFade:(float)fade;	// 0x32e4b9b1
- (void)drawContentInRect:(CGRect)rect selected:(BOOL)selected;	// 0x32e4bcf9
- (void)drawRect:(CGRect)rect;	// 0x32e4ac35
- (void)drawSeparatorInRect:(CGRect)rect;	// 0x32e4bb51
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x32e4aa75
- (void)insertControl:(id)control shouldInsertWithTarget:(id)target;	// 0x32e4c895
- (BOOL)isAtLeastHalfSelected;	// 0x32e4a4ed
- (BOOL)isRemoveControlVisible;	// 0x32e4c4c9
- (BOOL)isReorderingEnabled;	// 0x32e4ae41
// converted property getter: - (BOOL)isSelected;	// 0x32e4a631
- (void)layoutSubviews;	// 0x32e4d131
- (float)removeButtonAnimationDuration;	// 0x32e4c2dd
- (id)removeControl;	// 0x32e4a2d5
- (void)removeControl:(id)control didRemoveTarget:(id)target;	// 0x32e4c865
- (BOOL)removeControl:(id)control shouldRemoveTarget:(id)target;	// 0x32e4c7f9
- (void)removeControl:(id)control willRemoveTarget:(id)target;	// 0x32e4c825
- (void)removeControlWillHideRemoveConfirmation:(id)removeControl;	// 0x32e4c1b5
- (void)removeControlWillShowRemoveConfirmation:(id)removeControl;	// 0x32e4c0f5
- (void)removeFromSuperview;	// 0x32e4bdb1
- (float)selectionPercent;	// 0x32e4a511
// converted property getter: - (int)separatorStyle;	// 0x32e4a9ad
- (void)setAlpha:(float)alpha;	// 0x32e4aa05
- (void)setDisclosureClickable:(BOOL)clickable;	// 0x32e4be81
// converted property setter: - (void)setDisclosureStyle:(int)style;	// 0x32e4a785
- (void)setDisclosureStyleNoUpdate:(int)update;	// 0x32e4a981
// converted property setter: - (void)setDisclosureView:(id)view;	// 0x32e4c2bd
- (void)setEnableReordering:(BOOL)reordering animated:(BOOL)animated;	// 0x32e4ae95
// converted property setter: - (void)setSelected:(BOOL)selected;	// 0x32e4a61d
- (void)setSelected:(BOOL)selected withFade:(BOOL)fade;	// 0x32e4a2f9
- (void)setSelectionStyle:(int)style;	// 0x32e4a731
// converted property setter: - (void)setSeparatorStyle:(int)style;	// 0x32e4a6cd
- (void)setSeparatorStyleOnly:(int)only;	// 0x32e4a9c1
// converted property setter: - (void)setShowDisclosure:(BOOL)disclosure;	// 0x32e4a71d
- (void)setShowDisclosure:(BOOL)disclosure animated:(BOOL)animated;	// 0x32e4cb95
// converted property setter: - (void)setShowDisclosureWhenReordering:(BOOL)reordering;	// 0x32e4ae69
// converted property setter: - (void)setShowSelection:(BOOL)selection;	// 0x32e4a651
- (void)setShowSelectionNoRedisplay:(BOOL)redisplay;	// 0x32e4a6a9
// converted property getter: - (BOOL)showDisclosure;	// 0x32e4a9f1
// converted property getter: - (BOOL)showDisclosureWhenReordering;	// 0x32e4ae81
// converted property getter: - (BOOL)showSelection;	// 0x32e4a9d9
- (void)updateHighlightColors;	// 0x32e4a4e9
@end

