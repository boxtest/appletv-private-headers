/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIAutoRotatingWindow.h"


@interface UITextEffectsWindow : UIAutoRotatingWindow {
	unsigned long _activeEffectsCount;	// 196 = 0xc4
	BOOL _inDealloc;	// 200 = 0xc8
	BOOL _nonServiceHosted;	// 201 = 0xc9
	float _defaultWindowLevel;	// 204 = 0xcc
}
@property(readonly, assign) unsigned contextID;	// G=0x302f3a2d; 
@property(assign, nonatomic) float defaultWindowLevel;	// G=0x302f4129; S=0x302f4139; @synthesize=_defaultWindowLevel
@property(assign, nonatomic) BOOL nonServiceHosted;	// G=0x302f4109; S=0x302f4119; @synthesize=_nonServiceHosted
+ (void)_releaseSharedInstances;	// 0x302f403d
+ (void)lowerTextEffectsWindowsForHideNotificationCenter;	// 0x302f40d1
+ (id)preferredTextEffectsWindow;	// 0x302f3d19
+ (id)preferredTextEffectsWindowAboveStatusBar;	// 0x302f3d8d
+ (void)raiseTextEffectsWindowsForShowNotificationCenter;	// 0x302f4099
+ (id)sharedTextEffectsWindow;	// 0x3010489d
+ (id)sharedTextEffectsWindow:(BOOL)window;	// 0x302f3e05
+ (id)sharedTextEffectsWindowAboveStatusBar;	// 0x302f3f31
- (id)initWithFrame:(CGRect)frame;	// 0x301048bd
- (BOOL)_affectsTintView;	// 0x302f4039
- (void)_didRemoveSubview:(id)subview;	// 0x3015d3a9
- (BOOL)_disableViewScaling;	// 0x302f3b05
- (BOOL)_isWindowServerHostingManaged;	// 0x302f3a3d
- (void)_updateTransformLayerForClassicPresentation;	// 0x302f3b09
- (BOOL)_usesWindowServerHitTesting;	// 0x302f3e01
- (void)bringSubviewToFront:(id)front;	// 0x302f3c05
// declared property getter: - (unsigned)contextID;	// 0x302f3a2d
- (void)dealloc;	// 0x302f39ed
// declared property getter: - (float)defaultWindowLevel;	// 0x302f4129
- (void)delayHideWindow;	// 0x302f3bdd
- (void)didAddSubview:(id)subview;	// 0x30107f39
- (BOOL)isInternalWindow;	// 0x301120d1
- (void)matchDeviceOrientation;	// 0x30104a1d
// declared property getter: - (BOOL)nonServiceHosted;	// 0x302f4109
- (void)resetTransform;	// 0x302f3cc9
- (void)sendSubviewToBack:(id)back;	// 0x302f3c09
// declared property setter: - (void)setDefaultWindowLevel:(float)level;	// 0x302f4139
- (void)setKeepContextInBackground:(BOOL)background;	// 0x302f3a71
// declared property setter: - (void)setNonServiceHosted:(BOOL)hosted;	// 0x302f4119
- (void)sortSubviews;	// 0x30107fcd
- (void)updateForOrientation:(int)orientation;	// 0x30104a59
- (void)updateForOrientation:(int)orientation forceResetTransform:(BOOL)transform;	// 0x302f3c0d
- (void)updateSubviewOrdering;	// 0x302f3d09
@end
