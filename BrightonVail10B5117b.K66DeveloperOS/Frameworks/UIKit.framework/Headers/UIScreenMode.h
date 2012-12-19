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
@property(assign) BOOL _mainScreen;	// G=0x32fc1779; S=0x32fc1791; @synthesize
@property(readonly, assign, nonatomic) float pixelAspectRatio;	// G=0x32cdeb41; 
@property(readonly, assign, nonatomic) CGSize size;	// G=0x32d57285; 
+ (id)_screenModeForDisplayMode:(id)displayMode mainScreen:(BOOL)screen;	// 0x32cde6b9
- (id)initWithDisplayMode:(id)displayMode mainScreen:(BOOL)screen;	// 0x32cde789
- (id)_displayMode;	// 0x32fc15e5
- (BOOL)_isNTSCOrPAL;	// 0x32cdeb11
// declared property getter: - (BOOL)_mainScreen;	// 0x32fc1779
- (id)description;	// 0x32fc15f9
// declared property getter: - (float)pixelAspectRatio;	// 0x32cdeb41
// declared property setter: - (void)set_mainScreen:(BOOL)screen;	// 0x32fc1791
// declared property getter: - (CGSize)size;	// 0x32d57285
@end
