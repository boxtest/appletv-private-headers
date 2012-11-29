/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class ATVNavigationBarController, NSArray;
@protocol BRAppliance;

__attribute__((visibility("hidden")))
@interface ATVApplianceController : BRViewController {
	ATVNavigationBarController *_navigationBarController;	// 104 = 0x68
	NSArray *_applianceCategories;	// 108 = 0x6c
	id<BRAppliance> _appliance;	// 112 = 0x70
}
@property(retain, nonatomic) id<BRAppliance> appliance;	// G=0x11b629; S=0x11b639; @synthesize=_appliance
- (id)initWithAppliance:(id)appliance;	// 0x11a9d1
- (id)_controllerWithCategory:(id)category;	// 0x11b139
- (void)_installControllerView;	// 0x11b1c1
- (void)_networkStateChanged;	// 0x11b481
// declared property getter: - (id)appliance;	// 0x11b629
- (void)dealloc;	// 0x11ac9d
- (BOOL)isNetworkDependent;	// 0x11b4c1
- (void)layoutSubcontrols;	// 0x11ad41
// declared property setter: - (void)setAppliance:(id)appliance;	// 0x11b639
- (void)updateBoundCategories;	// 0x11ae5d
- (void)wasPopped;	// 0x11b4c5
@end
