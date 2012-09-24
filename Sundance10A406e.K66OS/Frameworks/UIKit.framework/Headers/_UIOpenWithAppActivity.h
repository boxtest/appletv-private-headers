/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIActivity.h"

@class UIDocumentInteractionController, LSApplicationProxy;

__attribute__((visibility("hidden")))
@interface _UIOpenWithAppActivity : UIActivity {
	LSApplicationProxy *_appProxy;	// 8 = 0x8
	BOOL _defaultApp;	// 12 = 0xc
	UIDocumentInteractionController *_documentInteractionController;	// 16 = 0x10
}
@property(assign, nonatomic, getter=isDefaultApp) BOOL defaultApp;	// G=0x30be50ad; S=0x30be50bd; @synthesize=_defaultApp
- (id)initWithApplicationIdentifier:(id)applicationIdentifier documentInteractionController:(id)controller;	// 0x30be4e21
- (id)_activityImage;	// 0x30be4fad
- (id)_beforeActivity;	// 0x30be4ef1
- (id)activityTitle;	// 0x30be4f49
- (id)activityType;	// 0x30be4f3d
- (BOOL)canPerformWithActivityItems:(id)activityItems;	// 0x30be4fd9
- (void)dealloc;	// 0x30be4ea1
// declared property getter: - (BOOL)isDefaultApp;	// 0x30be50ad
- (void)performActivity;	// 0x30be4fdd
// declared property setter: - (void)setDefaultApp:(BOOL)app;	// 0x30be50bd
@end
