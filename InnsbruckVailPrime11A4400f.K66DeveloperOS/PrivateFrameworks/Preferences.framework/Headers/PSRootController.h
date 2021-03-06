/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "PSController.h"
#import "UINavigationControllerDelegate.h"
#import <UIKit/UINavigationController.h>

@class PSSpecifier, NSMutableSet;

@interface PSRootController : UINavigationController <PSController, UINavigationControllerDelegate> {
	PSSpecifier *_specifier;	// 424 = 0x1a8
	NSMutableSet *_tasks;	// 428 = 0x1ac
	BOOL _deallocating;	// 432 = 0x1b0
	unsigned char _hasTelephony;	// 433 = 0x1b1
}
@property(readonly, assign) BOOL deallocating;	// G=0x32471935; converted property
@property(retain) id parentController;	// G=0x32471b39; S=0x32471151; converted property
@property(retain) id rootController;	// G=0x32471b41; S=0x32471b3d; converted property
@property(retain) PSSpecifier *specifier;	// G=0x32471199; S=0x32471155; converted property
+ (id)domainForSpecifier:(id)specifier;	// 0x32470849
+ (BOOL)processedBundle:(id)bundle parentController:(id)controller parentSpecifier:(id)specifier bundleControllers:(id *)controllers settings:(id)settings;	// 0x32471b45
+ (id)readPreferenceValue:(id)value;	// 0x32470b51
+ (void)setPreferenceValue:(id)value specifier:(id)specifier;	// 0x32470aad
+ (void)writePreference:(id)preference;	// 0x324708c1
- (id)initWithTitle:(id)title identifier:(id)identifier;	// 0x32470d61
- (void)_delayedControllerReleaseAfterPop:(id)pop;	// 0x324738ad
- (void)addTask:(id)task;	// 0x32470fd9
- (id)aggregateDictionaryPath;	// 0x32472095
- (BOOL)busy;	// 0x324710e9
- (BOOL)canBeShownFromSuspendedState;	// 0x324738a9
- (id)contentViewForTopController;	// 0x32471115
- (void)dealloc;	// 0x32471945
// converted property getter: - (BOOL)deallocating;	// 0x32471935
- (void)didDismissFormSheetView;	// 0x32473845
- (void)didDismissPopupView;	// 0x3247377d
- (void)didLock;	// 0x32471755
- (void)didUnlock;	// 0x32471845
- (void)didWake;	// 0x324718bd
- (void)handleURL:(id)url;	// 0x32471219
- (void)navigationController:(id)controller willShowViewController:(id)controller2 animated:(BOOL)animated;	// 0x32473fdd
// converted property getter: - (id)parentController;	// 0x32471b39
- (id)popToRootViewControllerAnimated:(BOOL)rootViewControllerAnimated;	// 0x32473c81
- (id)popToViewController:(id)viewController animated:(BOOL)animated;	// 0x32473b51
- (id)popViewControllerAnimated:(BOOL)animated;	// 0x32473999
- (void)pushController:(id)controller;	// 0x324711a9
- (id)readPreferenceValue:(id)value;	// 0x32470d45
// converted property getter: - (id)rootController;	// 0x32471b41
- (void)sendWillBecomeActive;	// 0x32471639
- (void)sendWillResignActive;	// 0x324715ad
// converted property setter: - (void)setParentController:(id)controller;	// 0x32471151
- (void)setPreferenceValue:(id)value specifier:(id)specifier;	// 0x32470b31
// converted property setter: - (void)setRootController:(id)controller;	// 0x32471b3d
// converted property setter: - (void)setSpecifier:(id)specifier;	// 0x32471155
- (void)setViewControllers:(id)controllers animated:(BOOL)animated;	// 0x32473db1
- (void)showLeftButton:(id)button withStyle:(int)style rightButton:(id)button3 withStyle:(int)style4;	// 0x3247121d
// converted property getter: - (id)specifier;	// 0x32471199
- (id)specifiers;	// 0x32471149
- (void)statusBarWillAnimateByHeight:(float)statusBar;	// 0x3247114d
- (void)statusBarWillChangeHeight:(id)statusBar;	// 0x324713a5
- (unsigned)supportedInterfaceOrientations;	// 0x324716c5
- (void)suspend;	// 0x324716dd
- (void)taskFinished:(id)finished;	// 0x32471031
- (BOOL)taskIsRunning:(id)running;	// 0x32470fb1
- (id)tasksDescription;	// 0x32470ead
- (void)willBecomeActive;	// 0x324715a9
- (void)willDismissFormSheetView;	// 0x324737e1
- (void)willDismissPopupView;	// 0x32473719
- (void)willResignActive;	// 0x324715a5
- (void)willUnlock;	// 0x324717cd
@end

