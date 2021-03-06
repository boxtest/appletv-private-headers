/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "PSController.h"
#import <UIViewController.h> // Unknown library

@class PSSpecifier, PSRootController;

@interface PSViewController : UIViewController <PSController> {
	UIViewController<PSController> *_parentController;	// 184 = 0xb8
	PSRootController *_rootController;	// 188 = 0xbc
	PSSpecifier *_specifier;	// 192 = 0xc0
}
@property(retain) id parentController;	// G=0x31d729cd; S=0x31d729bd; converted property
@property(retain) PSRootController *rootController;	// G=0x31d729ed; S=0x31d729dd; converted property
@property(retain) PSSpecifier *specifier;	// G=0x31d72a8d; S=0x31d72a49; converted property
- (BOOL)canBeShownFromSuspendedState;	// 0x31d72b69
- (void)dealloc;	// 0x31d729fd
- (void)didLock;	// 0x31d72ae1
- (void)didUnlock;	// 0x31d72ae9
- (void)didWake;	// 0x31d72aed
- (void)formSheetViewDidDisappear;	// 0x31d72b65
- (void)formSheetViewWillDisappear;	// 0x31d72b61
- (void)handleURL:(id)url;	// 0x31d72b39
// converted property getter: - (id)parentController;	// 0x31d729cd
- (void)popupViewDidDisappear;	// 0x31d72b5d
- (void)popupViewWillDisappear;	// 0x31d72b59
- (void)pushController:(id)controller;	// 0x31d72af1
- (id)readPreferenceValue:(id)value;	// 0x31d72ab9
// converted property getter: - (id)rootController;	// 0x31d729ed
// converted property setter: - (void)setParentController:(id)controller;	// 0x31d729bd
- (void)setPreferenceValue:(id)value specifier:(id)specifier;	// 0x31d72a9d
// converted property setter: - (void)setRootController:(id)controller;	// 0x31d729dd
// converted property setter: - (void)setSpecifier:(id)specifier;	// 0x31d72a49
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x31d72b11
// converted property getter: - (id)specifier;	// 0x31d72a8d
- (void)statusBarWillAnimateByHeight:(float)statusBar;	// 0x31d72b6d
- (void)suspend;	// 0x31d72add
- (void)willBecomeActive;	// 0x31d72ad9
- (void)willResignActive;	// 0x31d72ad5
- (void)willUnlock;	// 0x31d72ae5
@end

