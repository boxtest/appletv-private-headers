/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UINavigationController.h"


__attribute__((visibility("hidden")))
@interface UIPrintActivityWrapperNavigationController : UINavigationController {
	id _completionHandler;	// 288 = 0x120
	BOOL _presentedPrintInteractionController;	// 292 = 0x124
}
@property(assign, nonatomic) BOOL presentedPrintInteractionController;	// G=0x306633cd; S=0x306633dd; @synthesize=_presentedPrintInteractionController
- (id)initWithCompletion:(id)completion;	// 0x30663219
- (void)dealloc;	// 0x3066326d
// declared property getter: - (BOOL)presentedPrintInteractionController;	// 0x306633cd
// declared property setter: - (void)setPresentedPrintInteractionController:(BOOL)controller;	// 0x306633dd
- (void)viewWillAppear:(BOOL)view;	// 0x306632b9
@end
