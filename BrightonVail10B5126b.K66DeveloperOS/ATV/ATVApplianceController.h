/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class NSArray, ATVNavigationBarController;
@protocol BRAppliance;

__attribute__((visibility("hidden")))
@interface ATVApplianceController : BRViewController {
	ATVNavigationBarController *_navigationBarController;	// 104 = 0x68
	NSArray *_applianceCategories;	// 108 = 0x6c
	id<BRAppliance> _appliance;	// 112 = 0x70
}
@property(retain, nonatomic) id<BRAppliance> appliance;	// G=0x120181; S=0x120191; @synthesize=_appliance
- (id)initWithAppliance:(id)appliance;	// 0x11f529
- (id)_controllerWithCategory:(id)category;	// 0x11fc91
- (void)_installControllerView;	// 0x11fd19
- (void)_networkStateChanged;	// 0x11ffd9
// declared property getter: - (id)appliance;	// 0x120181
- (void)dealloc;	// 0x11f7f5
- (BOOL)isNetworkDependent;	// 0x120019
- (void)layoutSubcontrols;	// 0x11f899
// declared property setter: - (void)setAppliance:(id)appliance;	// 0x120191
- (void)updateBoundCategories;	// 0x11f9b5
- (void)wasPopped;	// 0x12001d
@end

