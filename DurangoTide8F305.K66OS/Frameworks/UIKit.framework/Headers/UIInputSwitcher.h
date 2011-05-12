/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class NSString, UIDelayedAction, UIInputSwitcherView;

__attribute__((visibility("hidden")))
@interface UIInputSwitcher : NSObject {
@private
	UIDelayedAction *m_switcherDelay;	// 4 = 0x4
	int m_state;	// 8 = 0x8
	UIInputSwitcherView *m_switcherView;	// 12 = 0xc
	NSString *_newMode;	// 16 = 0x10
}
@property(copy, nonatomic) NSString *newMode;	// G=0x32225685; S=0x32225d0d; @synthesize=_newMode
+ (id)activeInstance;	// 0x32058e75
+ (id)sharedInstance;	// 0x32225905
- (id)init;	// 0x322258a1
- (void)cancelSwitcherTimer;	// 0x32225725
- (void)clearSwitcherTimer;	// 0x322256e9
- (void)dealloc;	// 0x3222583d
- (BOOL)handleModifiersChangedEvent:(GSEventRef)event;	// 0x32225c09
- (void)handleRotate:(id)rotate;	// 0x32225829
- (BOOL)handleSwitchCommand:(BOOL)command;	// 0x32225695
- (void)hideSwitcher;	// 0x322257c1
- (BOOL)isVisible;	// 0x3222566d
// declared property getter: - (id)newMode;	// 0x32225685
// declared property setter: - (void)setNewMode:(id)mode;	// 0x32225d0d
- (void)showSwitcher;	// 0x32225941
- (BOOL)switchMode:(id)mode withDelay:(BOOL)delay;	// 0x322259c1
- (void)touchSwitcherTimer;	// 0x32225749
@end
