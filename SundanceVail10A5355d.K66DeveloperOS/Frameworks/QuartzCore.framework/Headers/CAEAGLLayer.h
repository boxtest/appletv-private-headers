/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CALayer.h"
#import "EAGLDrawable.h"

@class NSDictionary;

@interface CAEAGLLayer : CALayer <EAGLDrawable> {
	CAEAGLNativeWindow *_win;	// 48 = 0x30
}
@property(assign, getter=isAsynchronous) BOOL asynchronous;	// G=0x365d14a9; S=0x365d14d9; 
@property(copy) NSDictionary *drawableProperties;	// G=0x365d1499; S=0x365d14a1; 
@property(readonly, assign) EAGLNativeWindowObject *nativeWindow;	// G=0x365d1131; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x365d13b5
+ (id)defaultValueForKey:(id)key;	// 0x365d0f79
- (void)_didCommitLayer:(Transaction *)layer;	// 0x365d140d
- (void)_display;	// 0x365d1375
- (void)dealloc;	// 0x365d12cd
- (void)didChangeValueForKey:(id)key;	// 0x365d1051
// declared property getter: - (id)drawableProperties;	// 0x365d1499
// declared property getter: - (BOOL)isAsynchronous;	// 0x365d14a9
- (void)layerDidBecomeVisible:(BOOL)layer;	// 0x365d1345
// declared property getter: - (EAGLNativeWindowObject *)nativeWindow;	// 0x365d1131
// declared property setter: - (void)setAsynchronous:(BOOL)asynchronous;	// 0x365d14d9
// declared property setter: - (void)setDrawableProperties:(id)properties;	// 0x365d14a1
- (BOOL)shouldArchiveValueForKey:(id)key;	// 0x365d0ff9
@end
