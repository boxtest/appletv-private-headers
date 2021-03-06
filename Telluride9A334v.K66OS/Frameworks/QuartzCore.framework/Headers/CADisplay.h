/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import <NSObject.h> // Unknown library

@class CADisplayMode, NSString, NSArray;

@interface CADisplay : NSObject {
@private
	void *_impl;	// 4 = 0x4
}
@property(assign) BOOL allowsVirtualModes;	// G=0x31b3e081; S=0x31b3e065; 
@property(readonly, assign, nonatomic) NSArray *availableModes;	// G=0x31a99805; 
@property(readonly, assign, nonatomic) CGRect bounds;	// G=0x31a9975d; 
@property(readonly, assign, getter=isCloned) BOOL cloned;	// G=0x31b3dfb1; 
@property(readonly, assign, getter=isCloningSupported) BOOL cloningSupported;	// G=0x31b3df81; 
@property(copy, nonatomic) NSString *colorMode;	// G=0x31b3e129; S=0x31b3e0b1; 
@property(retain, nonatomic) CADisplayMode *currentMode;	// G=0x31a99211; S=0x31b3e1bd; 
@property(readonly, assign, nonatomic) NSString *deviceName;	// G=0x31b3de11; 
@property(readonly, assign) unsigned displayId;	// G=0x31b3de25; 
@property(readonly, assign, getter=isExternal) BOOL external;	// G=0x31b3e035; 
@property(readonly, assign, nonatomic) NSString *name;	// G=0x31a9876d; 
@property(copy, nonatomic) NSString *overscanAdjustment;	// G=0x31a99489; S=0x31a99511; 
@property(readonly, assign) float overscanAmount;	// G=0x31b3dfe1; 
@property(readonly, assign, getter=isOverscanned) BOOL overscanned;	// G=0x31a994e1; 
@property(readonly, assign, nonatomic) CADisplayMode *preferredMode;	// G=0x31b3e18d; 
@property(readonly, assign) double refreshRate;	// G=0x31b3e009; 
@property(readonly, assign, getter=isSupported) BOOL supported;	// G=0x31a99431; 
@property(readonly, assign) int tag;	// G=0x31a99461; 
@property(readonly, assign) NSString *uniqueId;	// G=0x31b3e241; 
+ (id)TVOutDisplay;	// 0x31b3df01
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x31a99801
+ (id)displays;	// 0x31a955e1
+ (id)mainDisplay;	// 0x31abfd5d
- (id)_initWithDisplay:(Display *)display;	// 0x31a98719
- (void)_invalidate;	// 0x31ac3d9d
// declared property getter: - (BOOL)allowsVirtualModes;	// 0x31b3e081
// declared property getter: - (id)availableModes;	// 0x31a99805
// declared property getter: - (CGRect)bounds;	// 0x31a9975d
// declared property getter: - (id)colorMode;	// 0x31b3e129
// declared property getter: - (id)currentMode;	// 0x31a99211
- (id)description;	// 0x31b3df19
// declared property getter: - (id)deviceName;	// 0x31b3de11
// declared property getter: - (unsigned)displayId;	// 0x31b3de25
// declared property getter: - (BOOL)isCloned;	// 0x31b3dfb1
// declared property getter: - (BOOL)isCloningSupported;	// 0x31b3df81
// declared property getter: - (BOOL)isExternal;	// 0x31b3e035
// declared property getter: - (BOOL)isOverscanned;	// 0x31a994e1
// declared property getter: - (BOOL)isSupported;	// 0x31a99431
// declared property getter: - (id)name;	// 0x31a9876d
// declared property getter: - (id)overscanAdjustment;	// 0x31a99489
// declared property getter: - (float)overscanAmount;	// 0x31b3dfe1
// declared property getter: - (id)preferredMode;	// 0x31b3e18d
// declared property getter: - (double)refreshRate;	// 0x31b3e009
// declared property setter: - (void)setAllowsVirtualModes:(BOOL)modes;	// 0x31b3e065
// declared property setter: - (void)setColorMode:(id)mode;	// 0x31b3e0b1
// declared property setter: - (void)setCurrentMode:(id)mode;	// 0x31b3e1bd
// declared property setter: - (void)setOverscanAdjustment:(id)adjustment;	// 0x31a99511
// declared property getter: - (int)tag;	// 0x31a99461
// declared property getter: - (id)uniqueId;	// 0x31b3e241
- (void)update;	// 0x31a987e9
@end

