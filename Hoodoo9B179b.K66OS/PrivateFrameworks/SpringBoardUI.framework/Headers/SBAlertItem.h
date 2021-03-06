/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <NSObject.h> // Unknown library
#import "UIAlertViewDelegate.h"

@class UIAlertView;

@interface SBAlertItem : NSObject <UIAlertViewDelegate> {
	UIAlertView *_alertSheet;	// 4 = 0x4
	BOOL _orderOverSBAlert;	// 8 = 0x8
	BOOL _preventLockOver;	// 9 = 0x9
	BOOL _didEverActivate;	// 10 = 0xa
	BOOL _ignoreIfAlreadyDisplaying;	// 11 = 0xb
	BOOL _didPlayPresentationSound;	// 12 = 0xc
	BOOL _allowInSetup;	// 13 = 0xd
	BOOL _pendInSetupIfNotAllowed;	// 14 = 0xe
}
@property(readonly, retain) UIAlertView *alertSheet;	// G=0x36606369; converted property
@property(assign, nonatomic) BOOL allowInSetup;	// G=0x366060f1; S=0x36606101; @synthesize=_allowInSetup
@property(readonly, assign) BOOL didPlayPresentationSound;	// G=0x36606051; converted property
@property(assign, nonatomic) BOOL ignoreIfAlreadyDisplaying;	// G=0x36606111; S=0x36606121; @synthesize=_ignoreIfAlreadyDisplaying
@property(assign, nonatomic) BOOL pendInSetupIfNotAllowed;	// G=0x366060d1; S=0x366060e1; @synthesize=_pendInSetupIfNotAllowed
@property(assign) BOOL preventLockOver;	// G=0x36606089; S=0x3660622d; converted property
+ (id)_alertItemsController;	// 0x36606485
+ (void)activateAlertItem:(id)item;	// 0x3660633d
- (id)init;	// 0x36606429
- (void)_playPresentationSound;	// 0x36606061
- (id)alertItemNotificationDate;	// 0x366060b9
- (id)alertItemNotificationSender;	// 0x366060bd
- (int)alertItemNotificationType;	// 0x366060b5
- (int)alertPriority;	// 0x366060cd
// converted property getter: - (id)alertSheet;	// 0x36606369
- (Class)alertSheetClass;	// 0x36606131
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x3660632d
- (BOOL)allowAutoUnlock;	// 0x36606031
// declared property getter: - (BOOL)allowInSetup;	// 0x366060f1
- (BOOL)allowMenuButtonDismissal;	// 0x3660602d
- (double)autoDismissInterval;	// 0x36606071
- (void)buttonDismissed;	// 0x366062c5
- (void)cleanPreviousConfiguration;	// 0x36606191
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;	// 0x36606065
- (void)dealloc;	// 0x366064ad
- (void)didActivate;	// 0x36606099
- (void)didDeactivateForReason:(int)reason;	// 0x366060ad
- (void)didFailToActivate;	// 0x366060a5
// converted property getter: - (BOOL)didPlayPresentationSound;	// 0x36606051
- (void)dismiss;	// 0x366062d9
- (void)dismiss:(int)dismiss;	// 0x366062ed
- (BOOL)dismissOnLock;	// 0x36606049
- (BOOL)dismissOnModalDisplayActivation;	// 0x3660604d
- (BOOL)forcesModalAlertAppearance;	// 0x366060c1
// declared property getter: - (BOOL)ignoreIfAlreadyDisplaying;	// 0x36606111
- (id)lockLabel;	// 0x36606069
- (float)lockLabelFontSize;	// 0x366061d5
- (void)noteVolumeOrLockPressed;	// 0x366060b1
// declared property getter: - (BOOL)pendInSetupIfNotAllowed;	// 0x366060d1
- (void)performUnlockAction;	// 0x36606085
- (void)playPresentationSound;	// 0x3660614d
// converted property getter: - (BOOL)preventLockOver;	// 0x36606089
- (BOOL)reappearsAfterLock;	// 0x366060c5
- (BOOL)reappearsAfterUnlock;	// 0x366060c9
- (void)screenWillUndim;	// 0x366060a1
// declared property setter: - (void)setAllowInSetup:(BOOL)setup;	// 0x36606101
// declared property setter: - (void)setIgnoreIfAlreadyDisplaying:(BOOL)displaying;	// 0x36606121
- (void)setOrderOverSBAlert:(BOOL)alert;	// 0x366061f1
// declared property setter: - (void)setPendInSetupIfNotAllowed:(BOOL)setupIfNotAllowed;	// 0x366060e1
// converted property setter: - (void)setPreventLockOver:(BOOL)over;	// 0x3660622d
- (id)shortLockLabel;	// 0x3660606d
- (BOOL)shouldShowInEmergencyCall;	// 0x36606039
- (BOOL)shouldShowInLockScreen;	// 0x36606035
- (BOOL)togglesMediaControls;	// 0x36606045
- (BOOL)undimsScreen;	// 0x3660603d
- (BOOL)unlocksScreen;	// 0x36606041
- (void)willActivate;	// 0x36606271
- (void)willDeactivateForReason:(int)reason;	// 0x366060a9
- (void)willRelockForButtonPress:(BOOL)buttonPress;	// 0x3660609d
@end

