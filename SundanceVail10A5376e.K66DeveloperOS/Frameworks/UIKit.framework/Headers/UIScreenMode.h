/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"


@interface UIScreenMode : NSObject {
	id _mode;	// 4 = 0x4
	BOOL _mainScreen;	// 8 = 0x8
}
@property(assign) BOOL _mainScreen;	// G=0x30549889; S=0x305498a1; @synthesize
@property(readonly, assign, nonatomic) float pixelAspectRatio;	// G=0x30268dd9; 
@property(readonly, assign, nonatomic) CGSize size;	// G=0x302e1775; 
+ (id)_screenModeForDisplayMode:(id)displayMode mainScreen:(BOOL)screen;	// 0x30268951
- (id)initWithDisplayMode:(id)displayMode mainScreen:(BOOL)screen;	// 0x30268a21
- (id)_displayMode;	// 0x305496f5
- (BOOL)_isNTSCOrPAL;	// 0x30268da9
// declared property getter: - (BOOL)_mainScreen;	// 0x30549889
- (id)description;	// 0x30549709
// declared property getter: - (float)pixelAspectRatio;	// 0x30268dd9
// declared property setter: - (void)set_mainScreen:(BOOL)screen;	// 0x305498a1
// declared property getter: - (CGSize)size;	// 0x302e1775
@end
