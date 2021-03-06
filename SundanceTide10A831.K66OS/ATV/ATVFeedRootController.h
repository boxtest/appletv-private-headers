/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class NSTimer, ATVFeedMerchant, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedRootController : BRViewController {
	ATVFeedMerchant *_merchant;	// 104 = 0x68
	NSTimer *_waitTimer;	// 108 = 0x6c
	NSString *_url;	// 112 = 0x70
}
@property(copy, nonatomic) NSString *url;	// G=0x166021; S=0x166035; @synthesize=_url
+ (id)controllerWithMerchant:(id)merchant;	// 0x16550d
- (id)initWithMerchant:(id)merchant;	// 0x165559
- (void)_readJavaScriptConfig:(id)config;	// 0x165619
- (void)_showWaitTimer:(id)timer;	// 0x165f1d
- (void)controlWasDeactivated;	// 0x165e11
- (void)dealloc;	// 0x1655ad
- (BOOL)isNetworkDependent;	// 0x165611
// declared property setter: - (void)setUrl:(id)url;	// 0x166035
- (BOOL)showsHeader;	// 0x165615
// declared property getter: - (id)url;	// 0x166021
- (void)wasExhumed;	// 0x165e65
- (void)wasPopped;	// 0x165eb9
- (void)wasPushed;	// 0x16586d
@end

