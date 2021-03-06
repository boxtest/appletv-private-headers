/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedController.h"
#import "AppleTV-Structs.h"

@class ATVNavigationBarController;

__attribute__((visibility("hidden")))
@interface ATVFeedNavigationBarViewController : ATVFeedController {
	ATVNavigationBarController *_navigationBarController;	// 104 = 0x68
	BRController *_selectedController;	// 108 = 0x6c
}
@property(retain, nonatomic) BRController *selectedController;	// G=0x3bafe1; S=0x3baff1; @synthesize=_selectedController
- (id)initWithDictionary:(id)dictionary;	// 0x3baba1
- (id)initWithFeedElement:(id)feedElement;	// 0x3bab2d
- (void).cxx_destruct;	// 0x3bb019
- (void)controlWasActivated;	// 0x3bac25
// declared property getter: - (id)selectedController;	// 0x3bafe1
// declared property setter: - (void)setSelectedController:(id)controller;	// 0x3baff1
@end

