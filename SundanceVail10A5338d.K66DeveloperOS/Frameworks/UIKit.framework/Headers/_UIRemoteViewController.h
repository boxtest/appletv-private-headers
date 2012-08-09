/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIActionSheetDelegate.h"
#import "UIViewController.h"
#import "_UIRemoteViewController_ViewControllerOperatorInterface.h"
#import "XPCProxyTarget.h"

@class NSError, _UIViewServiceInterface, _UIRemoteView, _UIAsyncInvocation, NSArray, NSString, UIActionSheet, _UISizeTrackingView;

@interface _UIRemoteViewController : UIViewController <XPCProxyTarget, _UIRemoteViewController_ViewControllerOperatorInterface, UIActionSheetDelegate> {
	NSString *_serviceBundleIdentifier;	// 184 = 0xb8
	_UIViewServiceInterface *_serviceInterface;	// 188 = 0xbc
	id _serviceViewControllerProxy;	// 192 = 0xc0
	NSArray *_serviceViewControllerSupportedInterfaceOrientations;	// 196 = 0xc4
	unsigned _serviceAccessibilityServerPort;	// 200 = 0xc8
	unsigned _serviceRegisteredScrollToTopViewCount;	// 204 = 0xcc
	id _viewControllerOperatorProxy;	// 208 = 0xd0
	id _textEffectsOperatorProxy;	// 212 = 0xd4
	BOOL _fencingCurrentTransaction;	// 216 = 0xd8
	_UISizeTrackingView *_sizeTrackingView;	// 220 = 0xdc
	_UIRemoteView *_serviceViewControllerRemoteView;	// 224 = 0xe0
	_UIRemoteView *_fullScreenTextEffectsRemoteView;	// 228 = 0xe4
	_UIAsyncInvocation *_terminationInvocation;	// 232 = 0xe8
	int _terminationErrorLock;	// 236 = 0xec
	NSError *_terminationError;	// 240 = 0xf0
	UIActionSheet *_hostedActionSheet;	// 244 = 0xf4
	int __automatic_invalidation_retainCount;	// 248 = 0xf8
	BOOL __automatic_invalidation_invalidated;	// 252 = 0xfc
}
@property(readonly, assign, nonatomic) NSString *serviceBundleIdentifier;	// G=0x30fe8139; 
@property(readonly, assign, nonatomic) id serviceViewControllerProxy;	// G=0x30fea4cd; 
+ (id)requestViewController:(id)controller fromServiceWithBundleIdentifier:(id)bundleIdentifier connectionHandler:(id)handler;	// 0x30fe6c39
- (int)__automatic_invalidation_logic;	// 0x30fe69d1
- (void)__dismissActionSheetWithClickedButtonIndex:(int)clickedButtonIndex animated:(BOOL)animated;	// 0x30fe9149
- (void)__presentActionSheetFromYCoordinate:(float)ycoordinate withTitle:(id)title buttonTitles:(id)titles cancelButtonIndex:(int)index destructiveButtonIndex:(int)index5 style:(int)style;	// 0x30fe8dc5
- (void)__setSupportedInterfaceOrientations:(id)orientations;	// 0x30fea03d
- (void)__viewServiceDidPromoteFirstResponder;	// 0x30fea245
- (void)__viewServiceDidRegisterScrollToTopView;	// 0x30fe8ad1
- (void)__viewServiceDidUnregisterScrollToTopView;	// 0x30fe8b2d
- (void)__viewServiceDidUpdateTintColor:(id)__viewService duration:(double)duration;	// 0x30fea2f9
- (void)_alertIsAppearing:(id)appearing;	// 0x30fe9331
- (void)_alertIsDisappearing:(id)disappearing;	// 0x30fe9541
- (void)_appearanceInvocationsDidChange:(id)_appearanceInvocations;	// 0x30fea3f1
- (id)_appearanceSource;	// 0x30fea3e1
- (void)_applicationDidEnterBackground:(id)_application;	// 0x30fe82dd
- (void)_applicationDidFinishSuspendSnapshot:(id)_application;	// 0x30fe8375
- (void)_applicationWillEnterForeground:(id)_application;	// 0x30fe81b9
- (void)_didResignContentViewControllerOfPopover:(id)popover;	// 0x30fe9fe9
- (void)_didRotateFromInterfaceOrientation:(int)interfaceOrientation forwardToChildControllers:(BOOL)childControllers skipSelf:(BOOL)aSelf;	// 0x30fe9ec9
- (void)_firstResponderDidChange:(id)_firstResponder;	// 0x30fe8d29
- (void)_hostDidEnterBackground:(id)_host;	// 0x30fe82fd
- (void)_hostWillEnterForeground:(id)_host;	// 0x30fe8265
- (id)_initWithViewServiceBundleIdentifier:(id)viewServiceBundleIdentifier connectionInfo:(XXStruct_zzUENB)info;	// 0x30fe6f25
- (BOOL)_isDeallocating;	// 0x30fe6c0d
- (void)_scrollToTopFromTouchAtViewLocation:(CGPoint)viewLocation resultHandler:(id)handler;	// 0x30fe8b8d
- (BOOL)_serviceHasScrollToTopView;	// 0x30fe8d11
- (void)_statusBarOrientationDidChange:(id)_statusBarOrientation;	// 0x30fe8171
- (void)_terminateUnconditionallyThen:(id)then;	// 0x30fe8459
- (id)_terminateWithError:(id)error;	// 0x30fe8395
- (BOOL)_tryRetain;	// 0x30fe6bbd
- (void)_willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration forwardToChildControllers:(BOOL)childControllers skipSelf:(BOOL)aSelf;	// 0x30fe9cb1
- (void)_willBecomeContentViewControllerOfPopover:(id)popover;	// 0x30fe9f95
- (void)_willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration forwardToChildControllers:(BOOL)childControllers skipSelf:(BOOL)aSelf;	// 0x30fe9dbd
- (void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;	// 0x30fe92a5
- (void)dealloc;	// 0x30fe89bd
- (id)disconnect;	// 0x30fe8405
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x30fea4dd
- (oneway void)release;	// 0x30fe6ae9
- (id)retain;	// 0x30fe6ab1
- (unsigned)retainCount;	// 0x30fe6ba9
// declared property getter: - (id)serviceBundleIdentifier;	// 0x30fe8139
// declared property getter: - (id)serviceViewControllerProxy;	// 0x30fea4cd
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x30fe9b99
- (unsigned)supportedInterfaceOrientations;	// 0x30fe9be1
- (void)synchronizeAnimationsInActions:(id)actions;	// 0x30fe7a05
- (void)viewDidAppear:(BOOL)view;	// 0x30fe9989
- (void)viewDidDisappear:(BOOL)view;	// 0x30fe9ab5
- (void)viewServiceDidTerminateWithError:(id)viewService;	// 0x30fea4ad
- (void)viewWillAppear:(BOOL)view;	// 0x30fe9635
- (void)viewWillDisappear:(BOOL)view;	// 0x30fe99d9
@end
