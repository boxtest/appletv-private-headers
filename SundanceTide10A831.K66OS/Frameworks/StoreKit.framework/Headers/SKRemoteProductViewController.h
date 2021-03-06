/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import "SKUIClientProductPageViewController.h"
#import <_UIRemoteViewController.h> // Unknown library

@class SKStoreProductViewController;

__attribute__((visibility("hidden")))
@interface SKRemoteProductViewController : _UIRemoteViewController <SKUIClientProductPageViewController> {
	SKStoreProductViewController *_productViewController;	// 300 = 0x12c
}
@property(assign, nonatomic) __weak SKStoreProductViewController *productViewController;	// G=0x338aa299; S=0x338aa2a9; @synthesize=_productViewController
- (void)didFinish;	// 0x338a9d31
- (void)didFinishWithResult:(id)result;	// 0x338a9d51
- (void)didReceiveTitle:(id)title;	// 0x338a9d8d
- (void)loadDidFinishWithResult:(id)load error:(id)error;	// 0x338a9dad
- (void)presentPageWithRequest:(id)request animated:(id)animated;	// 0x338a9ded
// declared property getter: - (id)productViewController;	// 0x338aa299
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x338aa031
// declared property setter: - (void)setProductViewController:(id)controller;	// 0x338aa2a9
- (void)setStatusBarHidden:(id)hidden withAnimation:(id)animation;	// 0x338a9e75
- (void)setStatusBarStyle:(id)style animated:(id)animated;	// 0x338a9edd
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x338a9cc1
- (void)storeKit_setWantsFullScreenLayout:(id)layout;	// 0x338a9f45
- (void)viewServiceDidTerminateWithError:(id)viewService;	// 0x338a9ce5
@end

