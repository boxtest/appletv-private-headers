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
@property(retain) NSString *newMode;	// G=0x33ca2ef1; S=0x33ca2f29; converted property
+ (id)activeInstance;	// 0x33a7370d
+ (id)sharedInstance;	// 0x33ca2dd9
- (id)init;	// 0x33ca2e15
- (void)cancelSwitcherTimer;	// 0x33ca310d
- (void)clearSwitcherTimer;	// 0x33ca3139
- (void)dealloc;	// 0x33ca2e81
- (BOOL)handleModifiersChangedEvent:(GSEventRef)event;	// 0x33ca3461
- (void)handleRotate:(id)rotate;	// 0x33ca2f6d
- (BOOL)handleSwitchCommand:(BOOL)command;	// 0x33ca3195
- (void)hideSwitcher;	// 0x33ca2f7d
- (BOOL)isVisible;	// 0x33ca317d
// converted property getter: - (id)newMode;	// 0x33ca2ef1
// converted property setter: - (void)setNewMode:(id)mode;	// 0x33ca2f29
- (void)showSwitcher;	// 0x33ca2ff5
- (BOOL)switchMode:(id)mode withDelay:(BOOL)delay;	// 0x33ca31ed
- (void)touchSwitcherTimer;	// 0x33ca3089
@end
