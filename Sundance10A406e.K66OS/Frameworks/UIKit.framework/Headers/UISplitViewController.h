/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIViewController.h"

@class UIPopoverController, NSArray, UIGestureRecognizer, UIView, UIBarButtonItem, NSString;
@protocol UISplitViewControllerDelegate;

@interface UISplitViewController : UIViewController <UIGestureRecognizerDelegate> {
	id _delegate;	// 196 = 0xc4
	UIBarButtonItem *_barButtonItem;	// 200 = 0xc8
	NSString *_buttonTitle;	// 204 = 0xcc
	UIPopoverController *_hiddenPopoverController;	// 208 = 0xd0
	UIView *_rotationSnapshotView;	// 212 = 0xd4
	float _masterColumnWidth;	// 216 = 0xd8
	float _gutterWidth;	// 220 = 0xdc
	float _cornerRadius;	// 224 = 0xe0
	int _rotatingFromOrientation;	// 228 = 0xe4
	int _lastPresentedOrientation;	// 232 = 0xe8
	CGRect _rotatingFromMasterViewFrame;	// 236 = 0xec
	CGRect _rotatingToMasterViewFrame;	// 252 = 0xfc
	NSArray *_cornerImageViews;	// 268 = 0x10c
	unsigned _slideTransitionCount;	// 272 = 0x110
	UIView *_masterBackgroundView;	// 276 = 0x114
	BOOL _presentsInFadingPopover;	// 280 = 0x118
	BOOL _presentsWithGesture;	// 281 = 0x119
	UIGestureRecognizer *_popoverPresentationGestureRecognizer;	// 284 = 0x11c
	struct {
		unsigned validDelegateHiddenMasterOrientations : 5;
		unsigned delegateHiddenMasterOrientations : 5;
		unsigned delegateImplementsShouldHide : 1;
		unsigned hidden : 3;
		unsigned delegateHandlesTogglingMaster : 1;
		unsigned delegateProvidesBackgroundView : 1;
		unsigned delegateWantsUnSlideCallback : 1;
		unsigned masterOnSlide : 1;
		unsigned delegateWantsWillShowCallback : 1;
		unsigned delegateWantsWillHideCallback : 1;
		unsigned delegateWantsWillPresentCallback : 1;
		unsigned delegateWantsNavigationRequests : 1;
	} _splitViewControllerFlags;	// 288 = 0x120
}
@property(assign, nonatomic, setter=_setPresentsInFadingPopover:) BOOL _presentsInFadingPopover;	// G=0x30bbb86d; S=0x30bbb87d; 
@property(assign, nonatomic) id<UISplitViewControllerDelegate> delegate;	// G=0x30bbe821; S=0x30bb9c45; @synthesize=_delegate
@property(assign) float gutterWidth;	// G=0x30bbb825; S=0x30bbb835; converted property
@property(assign) BOOL hidesMasterViewInPortrait;	// G=0x30bbb545; S=0x30bbb5cd; converted property
@property(assign) float leftColumnWidth;	// G=0x30bba61d; S=0x30bba62d; converted property
@property(assign) float masterColumnWidth;	// G=0x30bbb7dd; S=0x30bbb7ed; converted property
@property(assign, nonatomic) BOOL presentsWithGesture;	// G=0x30bbe831; S=0x30bbe841; @synthesize=_presentsWithGesture
@property(copy, nonatomic) NSArray *viewControllers;	// G=0x30bbae99; S=0x30bbaea9; 
+ (BOOL)_forcePresentsInSlidingPopover;	// 0x30bb8ea1
+ (BOOL)_forcePresentsWithGesture;	// 0x30bb8f6d
+ (BOOL)_optsOutOfPopoverControllerHierarchyCheck;	// 0x30bbbdc1
- (id)initWithCoder:(id)coder;	// 0x30bb919d
- (id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x30bb9159
- (void)__viewWillLayoutSubviews;	// 0x30bbe509
- (void)_addOrRemovePopoverPresentationGestureRecognizer;	// 0x30bb9b29
- (void)_calculateDelegateHiddenMasterOrientations;	// 0x30bb9981
- (BOOL)_canDisplayHostedMaster;	// 0x30bba689
- (BOOL)_canSlideMaster;	// 0x30bba70d
- (void)_commonInit;	// 0x30bb9031
- (CGSize)_contentSizeForChildViewController:(id)childViewController inPopoverController:(id)popoverController;	// 0x30bbc0dd
- (BOOL)_delegateUsesLegacySlideSPI;	// 0x30bba665
- (CGRect)_detailViewFrame;	// 0x30bb9ecd
- (void)_dismissMasterViewController;	// 0x30bbbf31
- (BOOL)_effectivePresentsWithGesture;	// 0x30bbb931
- (void)_getRotationContentSettings:(XXStruct_tXAZTC *)settings;	// 0x30bbe819
- (void)_invalidateHidesMasterViewInOrientation:(int)orientation;	// 0x30bbc509
- (BOOL)_isHidesMasterInLandscapeValid;	// 0x30bb996d
- (BOOL)_isHidesMasterInPortraitValid;	// 0x30bb9959
- (BOOL)_isLandscape;	// 0x30bb9735
- (BOOL)_isMasterViewShown;	// 0x30bb98bd
- (BOOL)_isMasterViewShownByDefault;	// 0x30bb9865
- (BOOL)_isRotating;	// 0x30bbc389
- (void)_loadNewSubviews:(id)subviews;	// 0x30bb9371
- (CGRect)_masterViewFrame;	// 0x30bb9e25
- (void)_presentGestureAttemptedWithPresentedPopoverController:(id)presentedPopoverController;	// 0x30bbc151
- (void)_presentMasterViewController:(BOOL)controller;	// 0x30bbbdc5
// declared property getter: - (BOOL)_presentsInFadingPopover;	// 0x30bbb86d
- (void)_removeRoundedCorners;	// 0x30bba339
// declared property setter: - (void)_setPresentsInFadingPopover:(BOOL)fadingPopover;	// 0x30bbb87d
- (void)_setupRoundedCorners;	// 0x30bb9f7d
- (BOOL)_shouldPersistViewWhenCoding;	// 0x30bb9639
- (BOOL)_shouldSynthesizeSupportedOrientations;	// 0x30bbc2fd
- (void)_slideIn:(BOOL)anIn viewController:(id)controller animated:(BOOL)animated totalDuration:(double)duration completion:(id)completion;	// 0x30bba775
- (void)_updateMasterViewControllerFrame;	// 0x30bbdd01
- (void)_viewControllerHiding:(id)hiding;	// 0x30bba41d
- (void)dealloc;	// 0x30bb920d
- (void)decodeRestorableStateWithCoder:(id)coder;	// 0x30bbe8f1
// declared property getter: - (id)delegate;	// 0x30bbe821
- (id)detailViewController;	// 0x30bbb4d5
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x30bbd425
- (void)encodeRestorableStateWithCoder:(id)coder;	// 0x30bbe851
- (void)encodeWithCoder:(id)coder;	// 0x30bb91e1
// converted property getter: - (float)gutterWidth;	// 0x30bbb825
- (BOOL)hidesMasterViewDuringRotationFromInterfaceOrientation:(int)interfaceOrientation toInterfaceOrientation:(int)interfaceOrientation2;	// 0x30bbc481
- (BOOL)hidesMasterViewInLandscape;	// 0x30bbb589
// converted property getter: - (BOOL)hidesMasterViewInPortrait;	// 0x30bbb545
// converted property getter: - (float)leftColumnWidth;	// 0x30bba61d
- (void)loadSubviews;	// 0x30bb936d
- (void)loadView;	// 0x30bb963d
// converted property getter: - (float)masterColumnWidth;	// 0x30bbb7dd
- (id)masterViewController;	// 0x30bbb465
- (void)popoverWillAppear:(id)popover;	// 0x30bbc1a1
// declared property getter: - (BOOL)presentsWithGesture;	// 0x30bbe831
- (void)purgeMemoryForReason:(int)reason;	// 0x30bbbcb9
- (BOOL)revealsMasterViewDuringRotationFromInterfaceOrientation:(int)interfaceOrientation toInterfaceOrientation:(int)interfaceOrientation2;	// 0x30bbc3a1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x30bb9c45
// converted property setter: - (void)setGutterWidth:(float)width;	// 0x30bbb835
// converted property setter: - (void)setHidesMasterViewInPortrait:(BOOL)portrait;	// 0x30bbb5cd
// converted property setter: - (void)setLeftColumnWidth:(float)width;	// 0x30bba62d
// converted property setter: - (void)setMasterColumnWidth:(float)width;	// 0x30bbb7ed
// declared property setter: - (void)setPresentsWithGesture:(BOOL)gesture;	// 0x30bbe841
// declared property setter: - (void)setViewControllers:(id)controllers;	// 0x30bbaea9
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x30bbc225
- (void)snapshotAllViews;	// 0x30bbccad
- (void)snapshotForRotationFromInterfaceOrientation:(int)interfaceOrientation toInterfaceOrientation:(int)interfaceOrientation2;	// 0x30bbce29
- (void)snapshotMasterView;	// 0x30bbc9f5
- (void)toggleMasterVisible:(id)visible;	// 0x30bbc019
- (void)unloadViewForced:(BOOL)forced;	// 0x30bb9779
// declared property getter: - (id)viewControllers;	// 0x30bbae99
- (void)viewDidAppear:(BOOL)view;	// 0x30bbbae9
- (void)viewDidDisappear:(BOOL)view;	// 0x30bbbc29
- (void)viewWillAppear:(BOOL)view;	// 0x30bbb9f5
- (void)viewWillDisappear:(BOOL)view;	// 0x30bbbb99
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x30bbd27d
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x30bbc53d
@end

