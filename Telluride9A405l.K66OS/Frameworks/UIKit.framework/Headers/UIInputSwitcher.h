/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class UIDelayedAction, NSString, UIInputSwitcherView;

__attribute__((visibility("hidden")))
@interface UIInputSwitcher : NSObject {
@private
	UIDelayedAction *m_switcherDelay;	// 4 = 0x4
	int m_state;	// 8 = 0x8
	UIInputSwitcherView *m_switcherView;	// 12 = 0xc
	NSString *_newMode;	// 16 = 0x10
}
@property(retain) NSString *newMode;	// G=0x32f9def1; S=0x32f9df29; converted property
+ (id)activeInstance;	// 0x32d6e70d
+ (id)sharedInstance;	// 0x32f9ddd9
- (id)init;	// 0x32f9de15
- (void)cancelSwitcherTimer;	// 0x32f9e10d
- (void)clearSwitcherTimer;	// 0x32f9e139
- (void)dealloc;	// 0x32f9de81
- (BOOL)handleModifiersChangedEvent:(GSEventRef)event;	// 0x32f9e461
- (void)handleRotate:(id)rotate;	// 0x32f9df6d
- (BOOL)handleSwitchCommand:(BOOL)command;	// 0x32f9e195
- (void)hideSwitcher;	// 0x32f9df7d
- (BOOL)isVisible;	// 0x32f9e17d
// converted property getter: - (id)newMode;	// 0x32f9def1
// converted property setter: - (void)setNewMode:(id)mode;	// 0x32f9df29
- (void)showSwitcher;	// 0x32f9dff5
- (BOOL)switchMode:(id)mode withDelay:(BOOL)delay;	// 0x32f9e1ed
- (void)touchSwitcherTimer;	// 0x32f9e089
@end

