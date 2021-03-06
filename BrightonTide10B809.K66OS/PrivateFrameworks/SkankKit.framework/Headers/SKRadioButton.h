/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import "SKControl.h"
#import "SkankKit-Structs.h"

@class NSMutableArray;

@interface SKRadioButton : SKControl {
	NSMutableArray *_options;	// 68 = 0x44
	int _selectedIndex;	// 72 = 0x48
}
@property(assign) int selectedIndex;	// G=0x35432ebd; S=0x35432ecd; converted property
- (id)init;	// 0x35432df9
- (void)addOption:(id)option;	// 0x35433059
- (void)addOptionWithTitle:(id)title;	// 0x35433119
- (void)clearAllOptions;	// 0x35432f91
- (void)dealloc;	// 0x35432e71
- (BOOL)handleEvent:(GSEventRef)event inLayer:(id)layer;	// 0x3543319d
// converted property getter: - (int)selectedIndex;	// 0x35432ebd
// converted property setter: - (void)setSelectedIndex:(int)index;	// 0x35432ecd
@end

